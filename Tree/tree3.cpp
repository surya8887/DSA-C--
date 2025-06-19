#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

vector<int> iterativePreOrder(Node *root)
{
    vector<int> preorder;
    if (root == NULL)
        return preorder;

    stack<Node *> st;
    st.push(root);

    while (!st.empty())
    {
        Node *node = st.top();
        st.pop();
        preorder.push_back(node->data);

        if (node->right)
            st.push(node->right);
        if (node->left)
            st.push(node->left);
    }
    return preorder;
}

vector<int> InorderTraversal(Node *root)
{
    vector<int> inorder;
    stack<Node *> st;
    Node *node = root;
    while (true)
    {
        if (node != NULL)
        {
            st.push(node);
            node = node->left;
        }
        else
        {
            if (st.empty())
                break;
            node = st.top();
            st.pop();
            inorder.push_back(node->data);
            node = node->right;
        }
    }
    return inorder;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<int> result = iterativePreOrder(root);
    cout << "preorder Traversal: ";
    for (int val : result)
        cout << val << " ";
    cout << endl;

    cout << "In-order Traversal: ";
    vector<int> result2 = InorderTraversal(root);
    for (auto val : result2)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
