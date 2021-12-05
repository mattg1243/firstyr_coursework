#include <iostream>
using namespace std;

class MyDeque {

    private:
    struct Node {
        int x;
        Node* next;
    };
    Node* head;

    public:
    MyDeque() { head = nullptr; }
    ~MyDeque() { clear(); }
    int front() const;
    int back() const;
    void push_back(int);
    void push_front(int);
    int size() const;
    void remove(int);
    void clear();
    friend ostream& operator<<(ostream&, const MyDeque&);

};

int MyDeque::front() const { 
    
    if (head == nullptr) { return -1; }
    return head->x;
}

int MyDeque::back() const { 
    
    if (head == nullptr) { return -1; }

    Node* search = head;
    while (search->next != nullptr) { 
        search = search->next;
    }

    return search->x;
}

void MyDeque::push_back(int v) {

    Node* newPtr, *search = head;
    newPtr = new Node;
    newPtr->x = v;
    newPtr->next = nullptr;

    if (head != nullptr) {
        while (search->next != nullptr) { 
            search = search->next;
        }
        search->next = newPtr;
    } else {
        head = newPtr;
    }
}

void MyDeque::push_front(int v) {

}

int MyDeque::size() const {
    return 0;
}

void MyDeque::remove(int v) {

}

void MyDeque::clear() {

}

ostream& operator<<(ostream& o, const MyDeque& m) {
    return o;
}

int main() {

    MyDeque dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);

    cout << "Front: " << dq.front() << endl;
    cout << "Back: " << dq.back() << endl;

    return 0;
}