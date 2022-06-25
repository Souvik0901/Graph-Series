

#include<bits/stdc++.h>
using namespace std;


void DFS(int src, vector<int>&ans, vector<int>&vis, vector<int>adj[])
{
    vis[src]=1;
    ans.push_back(src);
    for(auto x: adj[src])
    {
        if(!vis[x])
        {
            DFS(x,ans,vis,adj);
        }
    }
  
}


vector<int> dfsofgraph(int n,vector<int>adj[])
{
    vector<int>vis(n+1,0);
    vector<int>ans;
    for(int i=0; i<=n; i++)
    {
       if(!vis[i])
       {
          DFS(i,ans,vis,adj);
       }
    }
    return ans;
}




int main()
{
    int n, m;
    cin>>n>>m;
    
    vector<int>adj[n+1];
    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    vector<int>ans;
    ans=dfsofgraph(n,adj);
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

}
