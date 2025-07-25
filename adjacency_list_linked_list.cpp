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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,e;
    cin >> n >> e;
    Node* adj[n+1]={nullptr};
    while(e--)
    {
        int a,b;
        cin >> a >> b;
        Node* newNodeA=new Node(a);
        newNodeA->next=adj[b];
        adj[b]=newNodeA;
        Node* newNodeB=new Node(b);
        newNodeB->next=adj[a];
        adj[a]=newNodeB;
    }
    for(int i=1;i<=n;++i)
    {
        cout << i << "--> ";
        Node* tmp=adj[i];
        while(tmp)
        {
            cout << tmp->val << " ";
            tmp=tmp->next;
        }
        cout << endl;
    }
    return 0;
}