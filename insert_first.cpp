#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_first(Node* &head,int item)
{
    Node* newNode=new Node(item);
    newNode->next=head;
    head=newNode;
}
void print(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout << tmp->val << " ";
        tmp=tmp->next;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Node* head=new Node(10);
    Node* a=new Node(60);
    Node* b=new Node(30);
    Node* c=new Node(50);
    Node* d=new Node(40);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    cout << "item you want to insert at head: " << endl;
    int item;
    cin >> item;
    insert_first(head,item);
    print(head);
    return 0;
}