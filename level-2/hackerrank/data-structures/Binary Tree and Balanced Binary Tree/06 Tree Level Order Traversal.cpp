void levelOrder(Node * root) {
        if (root == nullptr)
            return;
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            Node* temp = q.front();
            cout << temp->data << " ";
            if (temp->left != nullptr) q.push(temp->left);
            if (temp->right != nullptr) q.push(temp->right);
            q.pop();
        }
    }