#include <iostream>
#include <vector>
using namespace std;

class MyCircularQueue {
private:
    vector<int> q;
    int front, rear, size;

public:
    MyCircularQueue(int k) {
        q.resize(k);
        size = k;
        front = -1;
        rear = -1;
    }

    bool enQueue(int value) {
        if (isFull()) return false;
        if (isEmpty()) front = 0;
        rear = (rear + 1) % size;
        q[rear] = value;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) return false;
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
        return true;
    }

    int Front() {
        if (isEmpty()) return -1;
        return q[front];
    }

    int Rear() {
        if (isEmpty()) return -1;
        return q[rear];
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return ((rear + 1) % size) == front;
    }
};

int main() {
    MyCircularQueue q(3);
    cout << q.enQueue(10) << endl;
    cout << q.enQueue(20) << endl;
    cout << q.enQueue(30) << endl;
    cout << q.enQueue(40) << endl;
    cout << q.Rear() << endl;
    cout << q.isFull() << endl;
    cout << q.deQueue() << endl;
    cout << q.enQueue(40) << endl;
    cout << q.Rear() << endl;
    return 0;
}
