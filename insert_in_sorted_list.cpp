#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_sorted(Node *&head, int item)
{
    Node *newNode = new Node(item);
    if(head==NULL || head->val>item)
    {
        newNode->next=head;
        head=newNode;
        return;
    }
    Node *tmp = head;
    while(tmp->next && tmp->next->val<item)
    {
        tmp=tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Node *head = new Node(20);
    Node *a = new Node(30);
    Node *b = new Node(40);
    Node *c = new Node(50);
    Node *d = new Node(60);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    cout << "item you want to insert: " << endl;
    int item;
    cin >> item;
    insert_sorted(head,item);
    print(head);
    return 0;
}