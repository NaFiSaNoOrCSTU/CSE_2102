#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cout << "enter n " << endl;
    cin >> n;
    int a[100];
    cout << "enter n elements " << endl;
    for(int i=0;i<n;++i)
    {
        cin >> a[i];
    }
    int pos;
    cout << "enter the pos " << endl;
    cin >> pos;
    int item;
    cout << "enter the item " << endl;
    cin >> item;
    for(int i=n;i>=pos;--i)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=item;
    n++;
    cout << "after insertion: "; 
    for(int i=0;i<n;++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}