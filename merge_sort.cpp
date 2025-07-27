#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int st, int mid, int end)
{
    vector<int> tmp;
    int i = st, j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (a[i] <= a[j])
        {
            tmp.push_back(a[i]);
            i++;
        }
        else
        {
            tmp.push_back(a[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        tmp.push_back(a[i]);
        i++;
    }
    while (j <= end)
    {
        tmp.push_back(a[j]);
        j++;
    }
    for (int idx = 0; idx < tmp.size(); ++idx)
    {
        a[idx + st] = tmp[idx];
    }
}
void mergeSort(int a[], int st, int end)
{
    if (st < end)
    {
        int mid = st + (end - st) / 2;
        mergeSort(a, st, mid);
        mergeSort(a, mid + 1, end);
        merge(a, st, mid, end);
    }
}
int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    cout << "Array Size : ";
    int n;
    cin >> n;
    int a[n];
    cout << "Array Elements : ";
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    cout << "Unsorted Array : ";
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    mergeSort(a, 0, n - 1);
    cout << "Sorted Array : ";
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    return 0;
}