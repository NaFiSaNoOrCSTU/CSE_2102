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
void search(Node *head, int item)
{
    int flag=0;
    int pos = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        pos++;
        if (tmp->val == item)
        {
            flag=1;
            cout << "found at position: " << pos << endl;
            return;
        }
        else if (tmp->val > item)
        {
            //cout << "not found" << endl;
            return;
        }
        tmp=tmp->next;
    }
    cout << "not found" << endl;
}
// void search(Node *head, int item)
// {
//     int pos = 0;
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         pos++;
//         if (tmp->val == item)
//         {
//             cout << "found at position: " << pos << endl;
//             return;
//         }
//         else if (tmp->val > item)
//         {
//             // Since the list is sorted in ascending order,
//             // and current value is already greater, item not found
//             break;
//         }
//         tmp = tmp->next;
//     }
//     cout << "not found" << endl;
// }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    cout << "item you want to search: " << endl;
    int item;
    cin >> item;
    search(head, item);
    return 0;
}