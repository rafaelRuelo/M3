// practice linked list.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next; 
};

int main()
{
    /*Node* p;
    Node* g;
    Node* f;
    p = new Node;
    p->data = 10;
    p->next = NULL;

    cout<< p->data << endl;
    
    g = new Node;
    g->data = 9;
    g->next = NULL;

    cout << g->data << endl;

    f = new Node;
    f->data = 8;
    f->next = NULL;

    cout << f->data << endl;
*/

    const int mgaNodes = 9;
    Node* head = nullptr;

    for (int i = 0; i <= 9; i++) {
        Node* sendNodes = new Node;
        sendNodes->data = i;

        sendNodes->next = head;
        head = sendNodes;
    }
       
}

