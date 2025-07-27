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
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
Node* getInorderSuccesor(Node* root)
{
    while(root != NULL && root->left != NULL)
    {
        root = root->left;
    }
    return root; 
}
Node* delNode(Node* root,int key)
{
    if(root == NULL) return NULL;
    if(key < root->val) root->left = delNode(root->left,key);
    else if(key > root->val) root->right = delNode(root->right,key);
    else
    {
        //key==root
        if(root->left == NULL)
        {
            Node* tmp=root->right;
            delete root;
            return tmp;
        } //1 -children or no children
        else if(root->right == NULL)
        {
            Node* tmp=root->left;
            delete root;
            return tmp;
        }
        else
        {
            Node* IS = getInorderSuccesor(root->right);
            root->val = IS->val;
            root->right = delNode(root->right,IS->val);
        }
    }
    return root;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a[] = {7, 5, 4, 1, 3, 2, 6};
    Node *root = createBST(a, 7);
    cout << "Before Deletion : ";
    inorder(root);
    cout << endl;
    delNode(root,4);
    cout << "After Deletion : ";
    inorder(root);
    return 0;
}