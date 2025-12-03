#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int front;
    int rear;
    int capacity;
    int size = -1;

    Queue(int cap)
    {
        capacity = cap;
        front = 0;
        rear = -1;
        arr = new int[cap];
    }

    void enque(int data)
    {

        if (rear == capacity - 1)
        {
            cout << "Queue is Full" << endl;
            return;
        }
        arr[++rear] = data;
        size++;
    }

    int deque()
    {
        if (size == -1)
        {
            cout << "Queue is Empty" << endl;
        }
        int data = arr[front];
        front++;
        size--;
        return data;
    }

    void display()
    {
        if (size == -1)
        {
            cout << "Queue is Empty" << endl;
        }
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
    }
    bool isEmpty()
    {
        if (size == -1)
            return true;
        else
            return false;
    }
    int size1()
    {
        return size + 1;
    }
};

int main()
{

    Queue *q1 = new Queue(5);
    // q1->enque(45);
    // q1->enque(23);
    // q1->enque(99);
    // q1->enque(22);
    // q1->enque(12);
    // q1->deque();
    // q1->deque();
    // q1->display();
    // cout << q1->isEmpty();
    cout << q1->size1();

    return 0;
}