#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

class LinkedList
{

    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }
    void insertVal(int val)
    {
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void insertAtIndex(int pos, int value)
    {

        Node *newNode = new Node(value);
        Node *temp = head;
        for (int i = 1; i < pos && temp != nullptr; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
    // Delete at end
    void deleteAtEnd()
    {
        if (head == nullptr)
        {
            cout << "List is empty!" << endl;
            return;
        }

        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
            return;
        }

        Node *temp = head;
        while (temp->next->next != nullptr)
            temp = temp->next;

        delete temp->next;
        temp->next = nullptr;
    }

    // Delete at position
    void deleteAtPosition(int pos)
    {

        Node *temp = head;

        for (int i = 1; i < pos && temp != nullptr; i++)
            temp = temp->next;

        if (temp == nullptr || temp->next == nullptr)
        {
            cout << "Invalid position!" << endl;
            return;
        }

        Node *deleteNode = temp->next;
        temp->next = temp->next->next;
        delete deleteNode;
    }
};

int main()
{

    LinkedList l1;
    l1.insertVal(56);
    l1.insertVal(34);
    l1.insertVal(12);
    l1.insertVal(83);
    l1.insertAtIndex(2, 88);
    l1.insertAtIndex(3, 45);
    l1.deleteAtEnd();
    l1.deleteAtPosition(2);
    l1.display();

    return 0;
}