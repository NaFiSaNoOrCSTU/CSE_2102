// #include<bits/stdc++.h>
// using namespace std;
// int partition(int a[],int st,int end)
// {
//     int idx=st-1,pivot=a[end];
//     for(int i=0;i<end;++i)
//     {
//         if(a[i]<=pivot)
//         {
//             idx++;
//             swap(a[i],a[idx]);
//         }
//     }
//     idx++;
//     swap(a[idx],a[end]);
//     return idx;
// }
// void quickSort(int a[],int n,int st,int end)
// {
//     if(st<end)
//     {
//         int pivIdx=partition(*a,st,end);
//         quickSort(a,n,st,pivIdx-1);  // left half
//         quickSort(a,n,pivIdx+1,end);  // right half
//     }
// }
// int main()
// {
//     // ios::sync_with_stdio(false);
//     // cin.tie(nullptr);
//     cout << "Array size : ";
//     int n;
//     cin >> n;
//     cout << "Array elements : ";
//     int a[n];
//     for(int i=0;i<n;++i)
//     {
//         cin >> a[i];
//     }
//     cout << "Unsorted Array : ";
//     for(int i=0;i<n;++i)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     quickSort(a,n,0,n-1);
//     cout << "Sorted Array : ";
//     for(int i=0;i<n;++i)
//     {
//         cout << a[i] << " ";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int st, int end) {
    int idx = st - 1, pivot = a[end];
    for (int i = st; i < end; ++i) {
        if (a[i] <= pivot) {
            idx++;
            swap(a[i], a[idx]);
        }
    }
    idx++;
    swap(a[idx], a[end]);
    return idx;
}

void quickSort(int a[], int st, int end) {
    if (st < end) {
        int pivIdx = partition(a, st, end);
        quickSort(a, st, pivIdx - 1);  // left half
        quickSort(a, pivIdx + 1, end);  // right half
    }
}

int main() {
    int n;
    cout << "Array size: ";
    cin >> n;

    int a[n];
    cout << "Array elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << "Unsorted Array: ";
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    quickSort(a, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}

