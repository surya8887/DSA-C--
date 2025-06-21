#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

//  create a linked list
void createLinkedList(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
}

// Print Linked List
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

//  delete a node from head in the linked list
Node* deleteNodeFromHead(Node* head)
{
    if (head == NULL)
    {
        return head;
    }
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;  // ← No parentheses here!
    return head;
}
Node* AddAtHead(Node *head,int data){
    Node* new_node = new Node(data);
    new_node->next = head;
    head = new_node;
    return head;

}


Node * deleteNodeFromTail(Node* head){
    if (head == NULL || head->next == NULL) return nullptr;
    Node* curr = head ;
    while (curr->next->next != NULL) {
        curr = curr->next;
    }
    Node *deleteNode  = curr ->next;
    curr -> next = nullptr ;  
    delete deleteNode ;
    return head ;
} 
int main()
{
    Node *head = new Node(0);

    createLinkedList(head, 1);
    createLinkedList(head, 2);
    createLinkedList(head, 3);
    createLinkedList(head, 4);
    head = deleteNodeFromHead(head);
    head = AddAtHead(head, 5);
    printList(head);
    head = deleteNodeFromTail(head);
    head = deleteNodeFromTail(head);
    printList(head);

    return 0;
}
