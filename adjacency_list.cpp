#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,e;
    cin >> n >> e;
    vector<vector<int>> mat(n+1); //1-based indexing
    while(e--)
    {
        int a,b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    for(int i=1;i<=n;++i)
    {
        cout << i << "--> ";
        for(int j=0;j<mat[i].size();++j)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}