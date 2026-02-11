

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = right = nullptr;
    }
};

Node *insertLeft(Node *root, int value)
{
    root->left = new Node(value);
    return root->left;
}
Node *insertRight(Node *root, int value)
{
    root->right = new Node(value);
    return root->right;
}

void inorder(Node *root)
{
    if (root == nullptr)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root)
{
    if (root == nullptr)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{
    if (root == nullptr)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{

    Node n1 = Node(1);

    Node *l1 = insertLeft(&n1, 2);
    Node *r1 = insertRight(&n1, 3);

    Node *l2 = insertLeft(l1, 4);
    Node *r2 = insertRight(l1, 5);

    Node *l3 = insertLeft(r1, 6);
    Node *r3 = insertRight(r1, 7);
    cout << "Inorder: " << endl;
    inorder(&n1);
    cout << endl;

    cout << "Preorder: " << endl;
    preorder(&n1);
    cout << endl;

    cout << "Postorder: " << endl;
    postorder(&n1);
    cout << endl;

    return 0;
}