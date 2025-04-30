#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

Node *CreateList(Node *head, vector<int> arr)
{   Node *curr = head;
    for (int i = 1; i < arr.size(); i++)
    {
        head->next = new Node(arr[i]);
        head = head->next;
    }
    return curr;
}
void printList(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout<<endl;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    Node *head = new Node(arr[0]);
    head = CreateList(head, arr);
    printList(head);
    return 0;
}
