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

Node *insertatFirst(Node *head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    return head;
}

Node *insertAtLast(Node *head, int data)
{
    if (head == nullptr)
    {
        return new Node(data);
    }
    Node *current = head;
    while (current->next != nullptr)
    {
        current = current->next;
    }
    current->next = new Node(data);
    return head;
}
void printLinkedList(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{

    Node *head = nullptr;
    head = insertatFirst(head, 10);
    head = insertatFirst(head, 20);
    head = insertatFirst(head, 30);
    head = insertAtLast(head, 40);
    head = insertAtLast(head, 50);
    head = insertAtLast(head, 60);
    printLinkedList(head);
    return 0;
}
