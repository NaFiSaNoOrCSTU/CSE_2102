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
void search(Node* head,int item)
{
    int pos=0;
    int flag=0;
    Node* tmp=head;
    while(tmp!=NULL)
    {
        pos++;
        if(tmp->val==item)
        {
            flag=1;
            break;
        }
        tmp=tmp->next;
    }
    if(flag==0) cout << "not found" << endl;
    else cout << "found at position: " << pos << endl;
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
    a->next=b;
    b->next=c;
    c->next=d;
    cout << "item you want to search: " << endl;
    int item;
    cin >> item;
    search(head,item);
    return 0;
}