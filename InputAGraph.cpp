#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int edge,node;
    cin>>node>>edge;
    int gra[node][node]={0};
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
	}
	
	for(int i=0;i<node;i++)
	{
		for(int j=0;j<node;j++)
		cout<<gra[i][j]<<"  ";
	    cout<<"\n";
	}
    
    
    
    
    
    
    
    
    
    return 0;
}

