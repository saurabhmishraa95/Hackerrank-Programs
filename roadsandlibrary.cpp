#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long edge,node;
long long count;


void addEdge(vector<long long> adj[], long long u, long long v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
 
// A utility function to do DFS of graph
// recursively from a given vertex u.
void DFSUtil(long long u, vector<long long> adj[],
                    vector<bool> &visited)
{
    visited[u] = true;
    ::count++;
    for (long long i=0; i<adj[u].size(); i++)
        if (visited[adj[u][i]] == false)
            DFSUtil(adj[u][i], adj, visited);
}
 
// This function does DFSUtil() for all 
// unvisited vertices.
void DFS(vector<long long> adj[], long long V,long long &cr,long long &cl,long long &tcr)
{
    vector<bool> visited(V, false);
    for (long long u=0; u<V; u++)
        if (visited[u] == false)
          { ::count=0;
		   DFSUtil(u, adj, visited);
         	tcr=tcr+((::count-1)*cr + cl);
}
}
 

int main() {
    /* Enter your code here. Read input from STDIN. Prlong long output to STDOUT */  
    long long times;
    cin>>times;
    while(times--){
	
    cin>>::node>>::edge;
    vector<long long> gra[node];         //array of vector
    long long cr,cl,tcr,tcl;
    cin>>cl>>cr;
    tcl=cl*node;
    tcr=0;
    long long x,y;
	    
    while(edge--)
    {
    	cin>>x>>y;
    	x--;y--;
    	addEdge(gra,x,y);
		}
   
  
	DFS(gra,node,cr,cl,tcr);
    
    if(tcr<tcl)
    cout<<tcr;
    else
    cout<<tcl;
    cout<<"\n";
}
    
    return 0;
}
