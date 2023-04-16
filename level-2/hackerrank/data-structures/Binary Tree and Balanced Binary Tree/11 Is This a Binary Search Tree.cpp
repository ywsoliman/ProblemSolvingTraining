bool checkBST(Node* root) {
    return checkBST(root, 0, INT16_MAX);
}
bool checkBST(Node* root, int minVal, int maxVal) {
    if (root == nullptr)
        return true;
    if (root->data >= maxVal || root->data <= minVal) return false;
    return checkBST(root->left, minVal, root->data) && checkBST(root->right, root->data, maxVal);
}