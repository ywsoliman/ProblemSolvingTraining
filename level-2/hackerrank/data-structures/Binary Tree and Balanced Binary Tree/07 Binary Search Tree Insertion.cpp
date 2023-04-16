    // Iterative Approach
    Node * insert(Node * root, int data) {
        if (root == nullptr)
            return new Node(data);
        Node* current = root;
        Node* parent = nullptr;
        Node* insertedNode = new Node(data);
        while (current != nullptr) {
            parent = current;
            if (current->data < data)
                current = current->right;
            else
                current = current->left;
        }
        if (parent->data < data)
		parent->right = insertedNode;
        else
            parent->left = insertedNode;
        return root;
    }

    // Recursive Approach
    Node * insert(Node * root, int data) {
        if (root == nullptr)
            return new Node(data);
        if (root->data < data)
            root->right = insert(root->right, data);
        else
            root->left = insert(root->left, data);
        return root;
    }