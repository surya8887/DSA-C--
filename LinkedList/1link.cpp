#include <bits/stdc++.h>
using namespace std;
//  Linked List
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
        this->next = nullptr;
    }
};

void printList(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout <<"Null"<<"\n";
}
Node*  ArrayTOList(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* curr = head;
    for(int i =1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        curr->next = temp;
        curr = temp;
    }

    return head;
}
int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    // printList(head);

    int* ptr = new int(10);
    // cout <<*ptr<<endl;

    // 
    vector<int> arr = {1,2,3,4,5};
    Node* head2 = ArrayTOList(arr);
    printList(head2);
    return 0;
}