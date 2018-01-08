#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,a[10000],s,j;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
        {s=a[i];
         for(j=i-1;j>=0&&a[j]>s;j--)
             {a[j+1]=a[j];
         }a[j+1]=s;
        }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}
