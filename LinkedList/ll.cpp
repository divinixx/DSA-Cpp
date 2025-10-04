#include<iostream>
using namespace std;


class Node {
    public:
        int data;
        Node* next;
    
    Node(int val) {
        this->data = val;  
        this->next = NULL;
    }
};


Node* insertAtHead(int value, Node* &head, Node* &tail) {

    if(head == NULL && tail == NULL) {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }

    else {
        Node* newNode  = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    return head;
}

Node* insertAtTail(int value, Node* &head, Node* &tail) {

    if(head == NULL && tail == NULL) {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else {
        Node* newNode = new Node(value);
        tail->next = newNode;
        tail = newNode;
    }

    return head;
}

int getLength(Node* head) {

    int len = 0;
    Node* temp = head;

    while(temp != NULL) {
        temp = temp->next;
        len++;
    }

    return len;
}

Node* insertAtPos(int pos , int value, Node* head, Node* tail) {

    int length = getLength(head);
    if(pos == 1) {
        insertAtHead(value, head, tail);
    }
    else if(pos == length + 1) {
        insertAtTail(value, tail, head);
    }
    else{
        Node* temp = head;
        for(int i=0; i< pos-2; i++) temp = temp->next;
        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    return head;
}

void print(Node* head){ 
    // Traverse the Array
    Node* temp = head;
    while (temp != NULL) {
        cout << temp -> data<< "->";
        temp = temp->next;
    }cout << "NULL" << endl;
}

int search(int target, Node* head, Node* tail) {
    Node* temp = head;
    int l = getLength(head);
    for(int i=1; i <= l; i++) {
        if(temp->data == target) {
            return i;
        }
        temp = temp->next;
    }

    return -1;
}

void deleteNode(int pos, Node* &head, Node* &tail) {

    if(head == NULL && tail == NULL) {
        cout << "No Node to Delete" << endl;
        return;
    }
    else if(head == tail) {
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }

    else{
        if(pos == 1) {
            Node *temp = head;
            head = temp->next;
            temp->next = NULL;
            delete temp;
        }
        else {
            Node* prev = head;
            for(int i = 0; i < pos-2; i++) {
                prev = prev->next;
            }
            Node* curr = prev->next;
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
        }
    }
}
int main() {
    Node* head = NULL;
    Node* tail = NULL;
     
    head = insertAtHead(10, head, tail);
    print(head);

    head = insertAtHead(20, head, tail);
    print(head);

    head = insertAtHead(30, head, tail);
    print(head);

    head = insertAtTail(40, head, tail);
    print(head);

    head = insertAtPos(3, 65, head, tail);
    print(head);

    // int pos = search(220, head, tail );
    // cout<<pos<<endl;

        head = insertAtHead(340, head, tail);
    print(head);

        head = insertAtHead(230, head, tail);
    print(head);

    deleteNode(1, head, tail);
    print(head);

    deleteNode(4, head, tail);
    print(head);

    deleteNode(3, head, tail);
    print(head);


    


    return 0;
}