#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;

void push(int nilai) {
    Node* baru = new Node();
    baru->data = nilai;
    baru->next = top;
    top = baru;
}

void pop() {
    if (top == NULL) {
        cout << "Stack kosong\n";
    } else {
        Node* hapus = top;
        cout << "Data dihapus: " << hapus->data << endl;
        top = top->next;
        delete hapus;
    }
}

void peek() {
    if (top == NULL)
        cout << "Stack kosong\n";
    else
        cout << "Data teratas: " << top->data << endl;
}

int main() {
    push(10);
    push(20);
    push(30);

    peek();
    pop();
    peek();
}