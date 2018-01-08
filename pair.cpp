#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long n,k;
    cin>>n>>k;
    long a[n];
    long count=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
       for(int j=i+1;j<n;j++)
       {
           if((a[i]-a[j])==k||(a[j]-a[i])==k)
               count++;
               
       }
    }
    cout<<count;
    return 0;
}

