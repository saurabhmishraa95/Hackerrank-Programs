#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int repeat(int j,int x[],int n)
{
	for(int i=0;i<=n;i++)
	{
		if(x[i]==j+1)
		return 0;
	}
	return 1;
}

int main()
{
	vector<float> t,s,sbt,sol;
	int n,x;
	float a;
	
	cin>>n;
	int v[n];
	for(int i=0;i<n;i++)
	{
		cin>>x;
		t.push_back(x);
		cin>>x;
		s.push_back(x);
	}
	for(int i=0;i<n;i++)
	{
		a=s[i]/t[i];
		sbt.push_back(a);
	}
	sol=sbt;
	sort(sol.begin(),sol.end());
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(sbt[i]==sol[j]&&repeat(j,v,i))
			{
			v[i]=j+1;
			break;
				
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
	{
		if(t[i]<=t[j]&&sbt[i]==sbt[j])
		{
			int temp=v[i];
			v[i]=v[j];
			v[j]=temp;
		}
	}
	}
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<"\n";
	}
	return 0;
}
