#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "Array Size : ";
    int n;
    cin >> n;
    int a[n];
    cout << "Array : ";
    for(int i=0;i<n;++i)
    {
        cin >> a[i];
    }
    cout << "Unsorted Array : ";
    for(int i=0;i<n;++i)
    {
        cout << a[i] << " ";
    }
    for(int i=1;i<n;++i)
    {
        int curr=a[i];
        int prev=i-1;
        while(prev>=0 && a[prev]>curr)
        {
            a[prev+1]=a[prev];
            prev--;
        }
        a[prev+1]=curr;
    }
    cout << "Sorted Array : ";
    for(int i=0;i<n;++i)
    {
        cout << a[i] << " ";
    }
    return 0;
}