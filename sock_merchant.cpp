#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x;
	cin>>n;
	vector<int> ar;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		ar.push_back(x);	
	}
	ar.push_back(-77);
    int count=0,pair=0;
    sort(ar.begin(),ar.end());
    for(int i=0;i<n+1;i++)
    {
        if(ar[i]==ar[i+1])
    	{
			count++;
        }
		else
        { pair=pair+((count+1)/2);
         count=0;
    }}
  
  	cout<<pair;
	return 0;
}
