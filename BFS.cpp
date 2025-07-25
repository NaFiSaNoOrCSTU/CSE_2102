#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> mat(1000);
bool vis[1000];
void bfs(int src)
{
    cout << "Nodes --> ";
    queue<int> q;
    q.push(src);
    vis[src]=true;
    while(!q.empty())
    {
        int par=q.front();
        q.pop();
        cout << par << " ";
        for(int i=0;i<mat[par].size();++i)
        {
            int child=mat[par][i];
            if(vis[child]==false)
            {
                q.push(child);
                vis[child]=true;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,e;
    cin >> n >> e;
    while(e--)
    {
        int a,b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    int src;
    cin >> src;
    memset(vis,false,sizeof(vis));
    bfs(src);
    return 0;
}