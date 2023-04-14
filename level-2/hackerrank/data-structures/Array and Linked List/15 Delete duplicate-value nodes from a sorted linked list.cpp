SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* head = llist;
    while (head != nullptr && head->next != nullptr) {
        if (head->data == head->next->data) {
            SinglyLinkedListNode* temp = head->next;
            head->next = head->next->next;
            delete temp;
        } else
            head = head->next;
    }
    return llist;
}