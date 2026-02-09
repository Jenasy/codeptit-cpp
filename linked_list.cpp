#include <iostream>
using namespace std;

struct node {
    int value;
    node *next;
    node *prev;
};

struct LinkedList {
    node *head = NULL;
    node *tail = NULL;
    int size = 0;
};

// --- CÁC HÀM MỚI ---

// 1. Truy cập vào phần tử tại vị trí index (0-based)
node* getAt(LinkedList list, int index) {
    if (index < 0 || index >= list.size) return NULL;

    node *temp = list.head;
    for (int i = 0; i < index; i++) {
        temp = temp->next; // Duyệt tuần tự
    }
    return temp;
}

// 2. Chèn vào vị trí bất kỳ (Ví dụ: chèn vào vị trí index)
void insertAt(LinkedList &list, int val, int index) {
    if (index < 0 || index > list.size) return;

    // Nếu chèn đầu
    if (index == 0) {
        node *newNode = new node{val, list.head, NULL};
        if (list.head) list.head->prev = newNode;
        list.head = newNode;
        if (list.size == 0) list.tail = newNode;
        list.size++;
        return;
    }

    // Nếu chèn cuối
    if (index == list.size) {
        node *newNode = new node{val, NULL, list.tail};
        if (list.tail) list.tail->next = newNode;
        list.tail = newNode;
        list.size++;
        return;
    }

    // Chèn vào giữa: Phải duyệt tìm node hiện tại ở vị trí index
    node *curr = getAt(list, index); 
    node *newNode = new node{val, curr, curr->prev};

    curr->prev->next = newNode;
    curr->prev = newNode;
    list.size++;
}

// Hàm Output để kiểm tra
void output(LinkedList list) {
    node *temp = list.head;
    while (temp) {
        cout << temp->value << " <-> ";
        temp = temp->next;
    }
    cout << "NULL (Size: " << list.size << ")" << endl;
}

int main() {
    LinkedList L;
    insertAt(L, 10, 0); // [10]
    insertAt(L, 30, 1); // [10, 30]
    insertAt(L, 20, 1); // Chèn 20 vào vị trí 1 -> [10, 20, 30]

    cout << "Danh sach sau khi chen: ";
    output(L);

    node* p = getAt(L, 1);
    if (p) cout << "Phan tu tai vi tri 1 la: " << p->value << endl;

    return 0;
}