DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    if (!llist)
        return new DoublyLinkedListNode(data);
    DoublyLinkedListNode* newNode = new DoublyLinkedListNode(data);
    if (llist->data > data) {
        newNode->next = llist;
        llist->prev = newNode;
        return newNode;
    }
    DoublyLinkedListNode* current = llist;
    while (current->next && current->next->data < data)
        current = current->next;
    newNode->next = current->next;
    if (current->next)
        current->next->prev = newNode;
    newNode->prev = current;
    current->next = newNode;
    return llist;
}