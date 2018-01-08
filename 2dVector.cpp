#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

 
int main() {
    int n=10,x,y;
    vector<vector<int>> vis(n,vector<int>(n));
    for(int i=0;i<5;i++)
    {
    	cin>>x>>y;
    	vis[x-1].push_back(y-1);
    	vis[y-1].push_back(x-1);
	}
    
    for(int i=0;i<n;i++)
    
	{
	for(int j=0;j<n;j++)
   {cout<<vis[i][j]<<" ";
   	
	} cout<<"\n";
}
	std::cout << "Vector contents are: \n";
	/*for(int i=0;i<3;++i) {
		for(int j=0;j<3;++j){
			std::cout << matrix[i][j] << " ";
		}
		std::cout << "\n";
	}*/
	return 0;
}
