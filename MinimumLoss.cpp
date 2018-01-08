#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,x;  
    cin>>n;
    long long p[n];
    long long min=9999999999,m;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
  
    }
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(p[i]>p[j] && p[i]-p[j]<min)
             min=p[i]-p[j];
            
        }
    }
    cout<<min;
    
    return 0;
}

