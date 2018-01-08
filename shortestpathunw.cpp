#include<iostream>
#include<queue>

using namespace std;
int count=0;
int dis[6]={-1,-1,-1,-1,-1,-1};
void bfs(int adj[6][6],int u,int x)
{
	queue <int> q;
	q.push(u);
	while(!q.empty())
	{
		u=q.front();
		q.pop();
		cout<<u<<"  ";
	
		dis[u]=0;
		
		for(int v=0;v<6;v++)
		{    
			if(dis[v]==-1&&adj[u][v])
		{
			dis[v]=dis[u]+1;
			q.push(v);
		}	
		}
		
	}
	cout<<"dis :"<<dis[x]+1;
}

int main()
{
	int adj[6][6]={
	0,1,1,1,0,0,
	1,0,0,0,0,0,
	1,0,0,1,0,0,
	0,0,1,0,1,1,
	0,0,0,1,0,1,
	0,0,0,1,1,0
	};
	int x,y;
	cin>>x>>y;
	bfs(adj,x,y);
	return 0;    
	
}
