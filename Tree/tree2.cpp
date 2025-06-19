#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;
    Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

vector<vector<int>> levelOrderTraversal(Node *root) {
    vector<vector<int>> ans;
    if (root == nullptr)
        return ans;

    queue<Node *> q;
    q.push(root);

    while (!q.empty()) {
        int n = q.size();
        vector<int> level;

        for (int i = 0; i < n; i++) {
            Node *node = q.front();
            q.pop();

            level.push_back(node->data);

            if (node->left != nullptr)
                q.push(node->left);
            if (node->right != nullptr)
                q.push(node->right);
        }
        ans.push_back(level);
    }

    return ans;
}

int main() {
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<vector<int>> result = levelOrderTraversal(root);

    cout << "Level Order Traversal:\n";
    for (auto level : result) {
        for (int val : level)
            cout << val << " ";
        cout << "\n";
    }

    return 0;
}
