SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    if (llist == nullptr)
        return new SinglyLinkedListNode(data);
    else {
        SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
        newNode->next = llist;
        return newNode;
    }
}