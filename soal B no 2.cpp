#include <iostream>
using namespace std;

const int MAX = 5;

// Deklarasi queue
string queue[MAX];
int front = 0;
int rear = -1;
int count = 0;

// Cek queue kosong
bool isEmpty() {
    return count == 0;
}

// Cek queue penuh
bool isFull() {
    return count == MAX;
}

// Enqueue
void enqueue(string nama) {
    if (isFull()) {
        cout << "Queue penuh! "
             << nama << " tidak bisa masuk.\n";
    } else {
        rear++;
        queue[rear] = nama;
        count++;

        cout << nama
             << " berhasil masuk antrian.\n";
    }
}

// Dequeue
void dequeue() {
    if (isEmpty()) {
        cout << "Queue kosong!\n";
    } else {
        cout << queue[front]
             << " keluar dari antrian.\n";

        front++;
        count--;
    }
}

// Peek
void peek() {
    if (isEmpty()) {
        cout << "Queue kosong.\n";
    } else {
        cout << "Antrian terdepan: "
             << queue[front] << endl;
    }
}

// Menampilkan isi queue
void display() {
    if (isEmpty()) {
        cout << "Queue kosong.\n";
    } else {
        cout << "\nIsi Queue:\n";

        for (int i = front; i <= rear; i++) {
            cout << "- " << queue[i] << endl;
        }
    }
}

int main() {

    // Enqueue 3 anggota
    enqueue("Reza");
    enqueue("Mia");
    enqueue("Hendra");

    // Tampilkan antrian terdepan
    peek();

    // Dequeue 1 anggota
    dequeue();

    // Enqueue anggota baru
    enqueue("Putri");

    // Tampilkan isi queue
    display();

    return 0;
}
