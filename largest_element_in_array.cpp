#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cout << "enter n " << endl;
    cin >> n;
    int a[n];
    cout << "enter n elements " << endl;
    for(int i=0;i<n;++i)
    {
        cin >> a[i];
    }
    int mx=a[0];
    int loc;
    for(int i=0;i<n;++i)
    {
        if(a[i]>mx)
        {
            mx=a[i];
            loc=i+1;
        }
    }
    cout << "largest element: " << mx << endl;
    cout << "location: " << loc << endl;
    return 0;
}