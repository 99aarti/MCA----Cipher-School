#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data; = data;
        this->next = NULL;
    }
};
void insertAtHead(Node **head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void printMiddle(Node *head)
{
    if(head == nullptr)
    {
        cout << "List is empty" << end1;
        return;
    }
    Node* slowptr = head;
    Node* fastptr = head;
    while (fastptr != NULL && fastptr->next != nullptr)
    {
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
    }
    cout << "Middle element: " << slowptr->data << endl;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << end1;
}
int main()
{
    int a, b, c, d, e, f;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;
    Node *node = new Node(a);
    Node *head = node;
    insertatHead(head, b);
    insertAtHead(head, c);
    insertAtHead(head, d);
    insertAtHead(head, e);
    insertAtHead(head, f);
    print(head);
    printMiddle(head);   

}
