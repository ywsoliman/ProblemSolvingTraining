bool checkBST(Node* root) {
    return checkBST(root, INT16_MIN, INT16_MAX);
}
bool checkBST(Node* root, int minVal, int maxVal) {
    if (root == nullptr)
        return true;
    if (root->data > maxVal || root->data < minVal) return false;
    return checkBST(root->left, minVal, root->data - 1) && checkBST(root->right, root->data + 1, maxVal);
}