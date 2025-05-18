#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node* next;
    node* prev;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void print(node* head)
{
    node* tmp=head;
    while(tmp!=NULL)
    {
        cout << tmp->val << " ";
        tmp=tmp->next;
    }
}
void insert_pos(node* head,int pos,int val)
{
    node* newNode=new node(val);
    node* tmp=head;
    for(int i=1;i<pos-1;++i)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    newNode->next->prev=newNode;
    newNode->prev=tmp;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    node* head=new node(10);
    node* a=new node(20);
    node* b=new node(30);
    node* c=new node(40);
    node* d=new node(50);
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    c->next=d;
    cout << "enter position where you want to insert: " << endl;
    int pos;
    cin >>pos;
    cout << "enter value you want to insert: " << endl;
    int v;
    cin >> v;
    insert_pos(head,pos,v);
    print(head);
    return 0;
}