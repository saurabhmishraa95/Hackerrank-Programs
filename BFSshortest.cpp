#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Prlong long output to STDOUT */  
    long long times;
    cin>>times;
    while(times--)
    {
    long long v,edge,x,y;
    cin>>v>>edge;
    queue<long long> q;
    vector<bool> vis(v,false);
    vector<long long> graph[v];
    long long dist[v];
    for(long long i=0;i<v;i++)
    dist[i]=0;
    while(edge--)
    {
        cin>>x>>y;
        x--;y--;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    
    long long s;
    cin>>s;
    s--;
    q.push(s);
    vis[s]=true;
    while(!q.empty())
    {
        long long r=q.front();
        q.pop();
        for(long long i=0;i<graph[r].size();i++)
        {
            if(vis[graph[r][i]]==false)
            {
                vis[graph[r][i]]=true;
                q.push(graph[r][i]);
                dist[graph[r][i]]=dist[r]+1;
            
            }
        }
    }
    for(long long i=0;i<v;i++)
    {
    //	cout<<dist[i]<<"  ";
       if(i!=s)
            if(dist[i]!=0)
                cout<<dist[i]*6<<" ";
            else
                cout<<"-1"<<" ";
    }
    cout<<"\n";
    }
    return 0;
}

