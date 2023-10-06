class Node {
    public:
        int value;
        Node* next;
        Node* prev;
        Node(int value) {
            this->value = value;
            next = nullptr;
            prev = nullptr;
        }
};

class LinkedList {
private:
    Node* head;
    Node* tail;
public:
    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }
    void pushBack(int newValue) {
        Node* newNode = new Node(newValue);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void show() {
        Node* start = head;
        while (start != nullptr) {
            cout << start->value << "->";
            start = start->next;
        }
    }
};
