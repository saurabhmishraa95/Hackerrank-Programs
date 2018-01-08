#include<iostream>
#include<queue>

using namespace std;
int count=0;
int visited[6]={0,0,0,0,0,0};
void bfs(int adj[6][6],int u)
{
	queue <int> q;
	q.push(u);
	while(!q.empty())
	{
		u=q.front();
		q.pop();
		cout<<u<<"  ";
	
		visited[u]=1;
		
		for(int v=0;v<6;v++)
		{    
			if(!visited[v]&&adj[u][v])
		{
			q.push(v);
		}	
		}
		
	}
}

int main()
{
	int adj[6][6]={
	0,0,0,1,0,0,
	1,0,0,0,0,0,
	1,0,0,1,0,0,
	0,0,0,0,1,0,
	0,0,0,0,0,0,
	0,0,0,1,1,0
	};
	int x,y;
	cin>>x>>y;
	bfs(adj,x);
	if(visited[y])
	cout<<"Yes";
	else 
	cout<<"no";
	return 0;    
	
}
