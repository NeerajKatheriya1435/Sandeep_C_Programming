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

int main(int argc, char const *argv[])
{

    Node *root = new Node(10);
    root->left = insertLeft(root, 18);
    root->right = insertRight(root, 78);
    root->left->left = insertLeft(root->left, 22);
    root->left->right = insertRight(root->left, 90);

    preorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    inorder(root);

    return 0;
}
