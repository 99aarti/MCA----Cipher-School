
#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

int main() {
    Node *head = new Node(10), *temp = head; 
    int element;
    cout << "enter the number of elements = ";
    cin >> element;
    int arr[element];

    // input elements from user
    for (int i = 0; i < element; i++) {
        cout << "enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // create a linked list with the input elements
    for (int i = 1; i < 6; i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }

    // print the list before insertion
    cout << "List before insertion: \n";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    // Find the node with value 23
    Node *current = head;
    while (current != nullptr && current->data != 23) {
        current = current->next;
    }

    if (current != nullptr) {
        // Insert 15 after 23
        Node *newNode = new Node(15);
        newNode->next = current->next;
        current->next = newNode;

  // print before insertion
    cout << "\n\nElement to be inserted is 45.\n"
         << "Before inserting, List is : \n";

        // print the list after insertion
        cout << "\n\nList after inserting 15 after 23: \n";
        temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    } else {
        cout << "\n23 not found in the list\n";
    }

    return 0;
}