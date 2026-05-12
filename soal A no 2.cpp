#include <iostream>
using namespace std;

const int MAX = 5;

// Deklarasi stack
string stackBuku[MAX];
int top = -1;

// Cek stack kosong
bool isEmpty() {
    return top == -1;
}

// Cek stack penuh
bool isFull() {
    return top == MAX - 1;
}

// Push data ke stack
void push(string judul) {
    if (isFull()) {
        cout << "Stack penuh! Buku tidak bisa ditambahkan.\n";
    } else {
        top++;
        stackBuku[top] = judul;
        cout << "Buku \"" << judul << "\" berhasil ditambahkan.\n";
    }
}

// Pop data dari stack
void pop() {
    if (isEmpty()) {
        cout << "Stack kosong! Tidak ada buku yang dihapus.\n";
    } else {
        cout << "Buku \"" << stackBuku[top]
             << "\" berhasil dihapus.\n";
        top--;
    }
}

// Melihat elemen paling atas
void peek() {
    if (isEmpty()) {
        cout << "Stack kosong.\n";
    } else {
        cout << "Buku paling atas: "
             << stackBuku[top] << endl;
    }
}

// Menampilkan isi stack
void display() {
    if (isEmpty()) {
        cout << "Stack kosong.\n";
    } else {
        cout << "\nIsi Stack:\n";
        for (int i = top; i >= 0; i--) {
            cout << "- " << stackBuku[i] << endl;
        }
    }
}

int main() {

    // Push 4 buku
    push("Fisika Dasar");
    push("Kalkulus");
    push("Algoritma");
    push("Jaringan");

    // Tampilkan buku paling atas
    peek();

    // Pop 2 buku
    pop();
    pop();

    // Tampilkan isi stack
    display();

    return 0;
}
