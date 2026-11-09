#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;

    Node(int value) {
        this->value = value;
        this->next = nullptr;
    }
};

struct Dnode {
    int value;
    Dnode* next;
    Dnode* prev;

    Dnode(int value) {
        this->value = value;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

int main(){
    Node x(10);
    Node y(12);
    Node z(30);

    x.next = &y;
    y.next = &z;

    Node* curr = &x;
    cout<<"==========singly=========="<<endl;
    while(curr != nullptr){
        cout<< curr->value <<endl;
        curr = curr->next;
    }

    Dnode a(10);
    Dnode b(20);
    Dnode c(30);

    a.next = &b;
    b.next = &c;
    b.prev = &a;
    c.prev = &b;

    Dnode* current = &a;
    cout<<"==========doubly=========="<<endl;
    while (current != nullptr)
    {
        cout<< current->value << endl;
        current = current->next;
    }

    Node p(9);
    Node q(32);
    Node r(21);

    p.next = &q;
    q.next = &r;
    r.next = &p; // Creating a circular linked list

    Node* circular_curr = &p;
    cout<<"==========circular=========="<<endl;
    do {
        cout<< circular_curr->value << endl;
        circular_curr = circular_curr->next;
    } while (circular_curr != &p);
}