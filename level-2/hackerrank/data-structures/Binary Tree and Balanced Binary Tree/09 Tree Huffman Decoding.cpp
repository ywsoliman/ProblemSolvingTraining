void decode_huff(node * root, string s) {
    node* current = root;
    node* parent = nullptr;
    for (char c : s) {
        parent = current;
        if (c == '1')
            current = current->right;
        else
            current = current->left;
        if (current->left == nullptr && current->right == nullptr) { // leaf node
            cout << current->data;
            current = root; // back to the root
        }
    }
}