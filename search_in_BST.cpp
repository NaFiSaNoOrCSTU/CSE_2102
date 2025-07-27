#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *insert(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }
    if (val < root->val)
    {
        root->left = insert(root->left, val);
    }
    else
    {
        root->right = insert(root->right, val);
    }

    return root;
}

Node *createBST(int a[], int n)
{
    Node *root = NULL;
    for (int i = 0; i < n; ++i)
    {
        root = insert(root, a[i]);
    }
    return root;
}

bool search(Node* root,int key)
{
    if(root == NULL) return false;
    if(root->val == key) return true;
    if(key < root->val) return search(root->left,key);
    else return search(root->right,key);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a[] = {7, 5, 4, 1, 3, 2, 6};
    Node *root = createBST(a, 9);
    cout << search(root,9) << endl;
    return 0;
}