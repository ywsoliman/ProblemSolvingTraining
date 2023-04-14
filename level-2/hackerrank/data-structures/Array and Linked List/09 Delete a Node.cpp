SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    if (llist == nullptr)
        return nullptr;
    if (position == 0) {
        SinglyLinkedListNode *newNode = llist->next;
        free(llist);
        return newNode;
    }
    SinglyLinkedListNode* prev = llist;
    for (int i = 0; i < position - 1; i++)
        prev = prev->next;
    if (prev->next->next != nullptr)
        prev->next = prev->next->next;
    else
        prev->next = nullptr;
    return llist;
}