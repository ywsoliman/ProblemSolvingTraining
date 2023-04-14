void printLinkedList(SinglyLinkedListNode* head) {
    while (head != nullptr) {
        cout << head->data << "\n";
        head = head->next;
    }
}