#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Fixed 4-level Binary Tree
Node* createTree() {

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);

    root->left->right->left = new Node(10);
    root->left->right->right = new Node(11);

    root->right->left->left = new Node(12);
    root->right->left->right = new Node(13);

    root->right->right->left = new Node(14);
    root->right->right->right = new Node(15);

    return root;
}


// Inorder: Left -> Root -> Right
void inorder(Node* root) {
    if (root == nullptr)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


// Preorder: Root -> Left -> Right
void preorder(Node* root) {
    if (root == nullptr)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}


// Postorder: Left -> Right -> Root
void postorder(Node* root) {
    if (root == nullptr)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}


// Count total nodes
int countNodes(Node* root) {
    if (root == nullptr)
        return 0;

    return 1 + countNodes(root->left)
             + countNodes(root->right);
}


// Height
int height(Node* root) {
    if (root == nullptr)
        return 0;

    return 1 + max(height(root->left),
                   height(root->right));
}


// Count leaf nodes
int countLeaf(Node* root) {
    if (root == nullptr)
        return 0;

    if (root->left == nullptr && root->right == nullptr)
        return 1;

    return countLeaf(root->left)
         + countLeaf(root->right);
}


// Search
bool search(Node* root, int key) {
    if (root == nullptr)
        return false;

    if (root->data == key)
        return true;

    return search(root->left, key) ||
           search(root->right, key);
}


int main() {

      Node* root = createTree();

    cout << "Inorder: ";
    inorder(root);
    cout << endl;

    cout << "Preorder: ";
    preorder(root);
    cout << endl;

    cout << "Postorder: ";
    postorder(root);
    cout << endl;

    cout << "Total Nodes: "
         << countNodes(root) << endl;

    cout << "Height: "
         << height(root) << endl;

    cout << "Leaf Nodes: "
         << countLeaf(root) << endl;

    cout << "Search 10: "
         << (search(root, 10) ? "Found" : "Not Found")
         << endl;

    return 0;
}