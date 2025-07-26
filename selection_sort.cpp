#include<bits/stdc++.h>
using namespace std;
int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    cout << "Array size : ";
    int n;
    cin >> n;
    int a[n];
    cout << "Enter Array : ";
    for(int i=0;i<n;++i)
    {
        cin >> a[i];
    }
    cout << "Unsorted Array : ";
    for(int i=0;i<n;++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Sorted Array : ";
    for(int i=0;i<n-1;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            if(a[j] < a[i])
            {
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    for(int i=0;i<n;++i)
    {
        cout << a[i] << " ";
    }
    return 0;
}