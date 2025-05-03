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
    int val;
    cout << "value to delete " << endl;
    cin >> val;
    int b[100];
    int ind=0;
    for(int i=0;i<n;++i)
    {
        if(a[i]!=val)
        {
            b[ind]=a[i];
            ind++;
        }
    }
    if(ind==n) cout << "not found" << endl;
    else
    {
        cout << "after deletion " << endl;
        for(int i=0;i<ind;++i)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}