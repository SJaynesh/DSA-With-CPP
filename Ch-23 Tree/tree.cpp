#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }

    // Root -> Left -> Right
    void preOrder(Node *root)
    {
        if (root == nullptr)
            return;

        cout << root->data << " "; // 1 2 4 5 3 6
        preOrder(root->left);
        preOrder(root->right);
    }

    //  Left ->Root -> Right
    void inOrder(Node *root)
    {
        if (root == nullptr)
            return;

        inOrder(root->left);
        cout << root->data << " "; // 4 2 5 1 3 6
        inOrder(root->right);
    }

    //  Left ->Root -> Right
    void postOrder(Node *root)
    {
        if (root == nullptr)
            return;

        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " "; // 4 5 2 6 3 1
    }
};

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->right = new Node(6);

    cout << endl;
    root->preOrder(root);

    cout << endl;
    root->inOrder(root);

    cout << endl;
    root->postOrder(root);
}