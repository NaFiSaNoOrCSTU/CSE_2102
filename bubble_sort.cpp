#include <bits/stdc++.h>
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
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    // ascending order
    int ind = n - 1;
    while (ind != 0)
    {
        int flag = 1;
        for (int j = 0; j < ind; ++j)
        {
            if (a[j] > a[j + 1])
            {
                flag = 0;
                swap(a[j], a[j + 1]);
            }
        }
        if (flag)
            break;
        ind--;
    }
    cout << "after bubble sorting in ascending order: ";
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}