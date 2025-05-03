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
    int item;
    cout << "searched item " << endl;
    cin >> item;
    int flag=0;
    int loc;
    for(int i=0;i<n;++i)
    {
        if(a[i]==item)
        {
            flag=1;
            loc=i+1;
            break;
        }
    }
    (flag==0) ? cout << "not found" << endl : cout << "found at " << loc << "th position" << endl;
    return 0;
}