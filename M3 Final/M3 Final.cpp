#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node {
    int data;           // Data stored in the node
    struct Node* next;  // Pointer to the next node in the list
};

// LinkedList class to manage the linked list operations
class LinkedList {
private:
    Node* head;  // Pointer to the head of the list

public:
    // Constructor to initialize the linked list
    LinkedList() {
        head = NULL;  // Initialize head as NULL (empty list)
    }

    // Inserts an element at the beginning of the list
    void insertAtBeginning(int val) {
        Node* newNode = new Node();  // Create a new node
        newNode->data = val;         // Set data of the new node
        newNode->next = head;        // Point new node to the current head
        head = newNode;              // Update head to the new node
    }

    // Inserts an element after a specific position in the list
    void insertAfter(int val, int pos) {
        Node* temp = head;
        int currentPos = 1;

        // Traverse the list to find the position
        while (temp != NULL && currentPos < pos) {
            temp = temp->next;
            currentPos++;
        }

        // Check if position is valid
        if (temp == NULL) {
            cout << "Invalid position!\n";
            return;
        }

        // Create a new node
        Node* newNode = new Node;
        newNode->data = val;

        // Insert the new node into the list
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Inserts an element at the end of the list
    void insert(int val) {
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = NULL;

        // If list is empty, make new node as head
        if (head == NULL) {
            head = newNode;
        }
        else {
            // Traverse to the end of the list and append new node
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Removes an element at a specified position from the list
    void removeAt(int pos) {
        Node* temp1 = head;

        // If removing the head node
        if (pos == 1) {
            head = temp1->next;
            delete temp1;
            return;
        }

        // Traverse to the node just before the position to be removed
        for (int i = 1; i < pos - 1; i++) {
            temp1 = temp1->next;
        }

        // Remove the node at the specified position
        Node* temp2 = temp1->next;
        temp1->next = temp2->next;
        delete temp2;
    }

    // Searches for an element in the list
    bool search(int val) {
        Node* current = head;

        // Traverse the list to find the element
        while (current != NULL) {
            if (current->data == val)
                return true;
            current = current->next;
        }
        return false;
    }

    // Returns the number of elements in the list
    int getSize() {
        Node* tmp = head;
        int length = 0;

        // Traverse the list to count nodes
        while (tmp != NULL) {
            length++;
            tmp = tmp->next;
        }
        return length;
    }

    // Checks if the list is empty
    bool isEmpty() {
        return head == NULL;
    }

    // Checks if the list is full (not applicable for linked lists)
    bool isFull() {
        return false;  // Linked list cannot be full unless memory is exhausted
    }

    // Displays the elements in the list
    void printList() {
        Node* current = head;

        // Traverse and print each element in the list
        while (current != NULL) {
            cout << current->data << endl;
            current = current->next;
        }
        cout << endl;
    }
};

// Main function to run the program
int main() {
    LinkedList list;
    int choice, position, data;

    // Menu-driven loop to perform list operations
    do {
        cout << "\nList Operations:\n";
        cout << "1. Insert at beginning\n";
        cout << "2. Insert at end\n";
        cout << "3. Insert at position\n";
        cout << "4. Remove at position\n";
        cout << "5. Search\n";
        cout << "6. Display list\n";
        cout << "7. Get size\n";
        cout << "8. Check if list is empty\n";
        cout << "9. Check if list is full\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter data to be inserted at beginning: ";
            cin >> data;
            list.insertAtBeginning(data);
            break;

        case 2:
            cout << "Enter data to be inserted at end: ";
            cin >> data;
            list.insert(data);
            break;

        case 3:
            cout << "Enter data to be inserted: ";
            cin >> data;
            cout << "Enter position to insert data: ";
            cin >> position;
            list.insertAfter(data, position);
            break;

        case 4:
            cout << "Enter position of data to be removed: ";
            cin >> position;
            list.removeAt(position);
            break;

        case 5:
            cout << "Enter data to search: ";
            cin >> data;
            if (list.search(data))
                cout << "Element found in the list\n";
            else
                cout << "Element not found in the list\n";
            break;

        case 6:
            cout << "Elements in the list are: ";
            list.printList();
            break;

        case 7:
            cout << "Size of the list is: " << list.getSize() << endl;
            break;

        case 8:
            if (list.isEmpty())
                cout << "List is empty\n";
            else
                cout << "List is not empty\n";
            break;

        case 9:
            // Since linked list can't be full unless memory is exhausted
            cout << "List is not full\n";
            break;

        case 0:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice, please try again\n";
            break;
        }
    } while (choice != 0);

    return 0;
}
