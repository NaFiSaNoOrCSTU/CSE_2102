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
void search(node* head,int item)
{
    int flag=0;
    int pos=0;
    node* tmp=head;
    while(tmp!=NULL)
    {
        pos++;
        if(tmp->val==item)
        {
            flag=1;
            cout << "found at position: " << pos << endl;
            break;
        }
        tmp=tmp->next;
    }
    if(flag==0) cout << "not found" << endl;
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
    cout << "item you want to search: " << endl;
    int item;
    cin >> item;
    search(head,item);
    return 0;
}