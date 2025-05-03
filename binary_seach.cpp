#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int a[]={3,4,5,6,7,8};
    n=sizeof(a[0]);
    int l=0;
    int r=n-1;
    int item;
    cout << "searched item " << endl;
    cin >> item;
    int flag=1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==item)
        {
            flag=0;
            cout << "found at location: " << mid+1 << endl;
            break;
        }
        else if(a[mid]>item)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    if(flag) cout << "not found" << endl;
    return 0;
}