#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,e;
    cin >> n >> e;
    int mat[n+1][n+1];
    memset(mat,0,sizeof(mat));
    while(e--)
    {
        int a,b;
        cin >> a >> b;
        mat[a][b]=1;
        mat[b][a]=1;
    }
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=n;++j)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}