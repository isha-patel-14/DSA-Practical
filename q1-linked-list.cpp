// Write a program to create a singly linked list and perform : 1. Insert a node at the beginning and 2. Display the list .

#include <iostream>
using namespace std;

// Define Node structure
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void display() {
        if (head == NULL) {
            cout << "The list is empty!" << endl;
            return;
        }

        Node* temp = head;
        cout << "Linked List: ";
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;
    int n, value;

    cout << "Enter number of nodes to insert: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> value;
        list.insertAtBeginning(value);
    }

    cout << "\nFinal Linked List: ";
    list.display();

    return 0;
}
