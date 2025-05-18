#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev=NULL;
    }
};
void dlt_pos(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i < pos - 1; ++i)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev=tmp;
    delete deleteNode;
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
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* d=new Node(50);
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    c->next=d;
    int pos;
    cout << "position you want to delete: " << endl;
    cin >> pos;
        dlt_pos(head, pos);
    print(head);
    return 0;
}