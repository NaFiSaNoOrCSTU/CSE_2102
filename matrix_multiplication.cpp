#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m,n,p;
    cin >> m >> n >> p;
    int a[m][n],b[n][p],ans[m][p];
    cout << "enter " << m << "x" << n << "matrix" << endl;
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<n;++j)
        {
            cin >> a[i][j];
        }
    }
    cout << "enter " << n << "x" << p << "matrix" << endl;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<p;++j)
        {
            cin >> b[i][j];
        }
    }
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<p;++j)
        {
            ans[i][j]=0;
        }
    }
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<n;++j)
        {
            for(int k=0;k<p;++k)
            {
                ans[i][k]+=a[i][j]*b[j][k];
            }
        }
    }
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<p;++j)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}