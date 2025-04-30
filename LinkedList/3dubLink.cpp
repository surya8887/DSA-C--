#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }
};
Node *insertAtHead(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == nullptr)
    {
        return temp;
    }
    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;
}

Node *insetAtLast(Node *head, int data)
{
    Node *curr = head;
    Node *temp = new Node(data);
    if (head == nullptr)
        return temp;
    while (curr->next != nullptr)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    temp->next = nullptr;

    return head;
}
void PrintList(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << "<->";
        head = head->next;
    }
    cout << "null";
    cout << endl;
}

int main()
{
    Node *head = nullptr;
    head = insertAtHead(head, 10);
    head = insertAtHead(head, 20);
    head = insetAtLast(head, 30);
    head = insetAtLast(head, 40);
    head = insetAtLast(head, 50);
    PrintList(head);

    return 0;
}