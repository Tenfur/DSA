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

class CircularDoublyLinkedList {
private:
    Node* head;
    Node* tail;
public:
    CircularDoublyLinkedList() {
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
            newNode->prev = tail;
            tail = newNode;

            head->prev = tail;
            tail->next = head;
        }
    }
    void show() {
        Node* start = head;
        while (true) {
            cout << start->value << "->";
            if (start->value == head->next->value) {
                break;
            }
            start = start->prev;
        }
    }
};
