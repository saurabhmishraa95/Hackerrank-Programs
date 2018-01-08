#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,k,add,x=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++)
        {
        add=0;
        for(int j=i+1;j<n;j++)
            {
            
                add=a[i]+a[j];
                if(add%k==0)
                    x++;}
    }
    cout<<x;
    return 0;
}
