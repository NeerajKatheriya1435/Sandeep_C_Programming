#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

class Dlist
{
    Node *head;

public:
    Dlist()
    {
        head = nullptr;
    }
    void insertAtBeggining(int data)
    {
        Node *temp = new Node(data);
        temp->next = head;
        if (head != nullptr)
        {
            head->prev = temp;
        }
        head = temp;
    }

    void deleteAtBeginning()
    {
        if (head == nullptr)
        {
            cout << "List is empty!" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        if (head != nullptr)
            head->prev = nullptr;
        delete temp;
    }

    void displayData()
    {
        cout << "hello" << endl;
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " " << " <-> ";
            temp = temp->next;
        }
    }
};

int main()
{

    Dlist *d1 = new Dlist();
    // d1->insertAtBeggining(67);
    // d1->insertAtBeggining(23);
    // d1->insertAtBeggining(78);
    // d1->insertAtBeggining(14);
    // d1->insertAtBeggining(88);
    // d1->insertAtBeggining(83);
    // cout << d1;
    // d1->deleteAtBeginning();
    // d1->deleteAtBeginning();
    // d1->deleteAtBeginning();
    d1->displayData();
    return 0;
}