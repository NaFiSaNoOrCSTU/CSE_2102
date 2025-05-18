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
void dlt_head(Node* &head)
{
    Node* deleteNode=head;
    head=head->next;
    delete deleteNode;
}
void dlt_pos(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i < pos - 1; ++i)
    {
        tmp = tmp->next;
    }
    Node* deleteNode=tmp->next;
    tmp->next = tmp->next->next;
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
    Node *head = new Node(20);
    Node *a = new Node(30);
    Node *b = new Node(40);
    Node *c = new Node(50);
    Node *d = new Node(60);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    int pos;
    cout << "position you want to delete: " << endl;
    cin >> pos;
    if(pos==0) dlt_head(head);
    else{
    dlt_pos(head, pos);
    }
    print(head);
    return 0;
}