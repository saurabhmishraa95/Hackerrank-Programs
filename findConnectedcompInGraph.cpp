#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gra[10000][10000];
bool v[10000]; 
int edge,node;

void dfs(int i)
{

	for(int j=0;j<node;j++)
	{
		if(gra[i][j] && v[j]!=1)
		{
			v[j]=1;
			cout<<j+1<<" ";
			dfs(j);
		}
	}
	

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    cin>>node>>edge;
    int x,y;

    for(int i=0;i<node;i++)
	{
		for(int j=0;j<node;j++)
		    gra[i][j]=0;	
	}
	    
    while(edge--)
    {
    	cin>>x>>y;
    	gra[x-1][y-1]=1;
    	gra[y-1][x-1]=1;
	}
	
	for(int i=0;i<node;i++)
	{
		for(int j=0;j<node;j++)
		cout<<gra[i][j]<<"  ";
	    cout<<"\n";
	}
    
    v[node]={0};
   int connected=0;
    for(int i=0;i<node;i++)
    {
        if(v[i]==0)
        {
        	v[i]=1;
        	cout<<i+1<<" ";
        	connected++;
        	dfs(i);
        	cout<<"\n";
		}
		
	}
    
    cout<<connected;
    
    
    
    return 0;
}

