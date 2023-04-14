SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    if (llist == nullptr)
        return nullptr;
    SinglyLinkedListNode* newList = nullptr;
    while (llist != nullptr) {
        if (newList == nullptr)
            newList = new SinglyLinkedListNode(llist->data);
        else {
            SinglyLinkedListNode* temp = new SinglyLinkedListNode(llist->data);
            temp->next = newList;
            newList = temp;
        }
        llist = llist->next;
    }
    return newList;
}