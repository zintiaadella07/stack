#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node *front = NULL, *rear = NULL;

void enqueue(int nilai) {
    Node* baru = new Node();
    baru->data = nilai;
    baru->next = NULL;

    if (rear == NULL) {
        front = rear = baru;
    } else {
        rear->next = baru;
        rear = baru;
    }
}

void dequeue() {
    if (front == NULL) {
        cout << "Queue kosong\n";
    } else {
        Node* hapus = front;
        cout << "Data keluar: " << hapus->data << endl;
        front = front->next;
        delete hapus;
    }
}

void display() {
    Node* temp = front;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();
    dequeue();
    display();
}