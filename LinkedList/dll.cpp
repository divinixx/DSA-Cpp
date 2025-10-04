#include<iostream>
using namespace std;



class Node {

    public:
    Node* prev;
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;

    }

};


void print(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << "->";; 
        temp = temp->next;
    }
    cout << "NULL" << endl;
}


void printReverse(Node* tail) {
    Node* temp = tail;
    while(temp != NULL) {
        cout << temp->data << "->";
        temp = temp->prev;
    }
    cout << "NULL" << endl;
}


Node* insertAtHead(int data, Node* &head, Node* &tail) {

    if(head == NULL && tail == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else {
        // LL is not Empty
        Node* newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;

    }
}
int main() {

    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(10, head, tail);
    print(head);
    insertAtHead(20, head, tail);
    print(head);
    insertAtHead(30, head, tail);
    print(head);
    printReverse(tail);

    return 0;
}