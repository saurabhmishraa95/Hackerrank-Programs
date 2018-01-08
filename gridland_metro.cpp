#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    unsigned long long int row,col,k,x;
    cin>>row>>col>>k;
    unsigned long long int r[k],a[k],b[k],mat[row][col];
    for(unsigned long long int i=0;i<row;i++)
        for(unsigned long long int j=0;j<col;j++)
            mat[i][j]=0;
    for(unsigned long long int i=0;i<k;i++)
    {
        cin>>r[i]>>a[i]>>b[i];
    }
    for(unsigned long long int i=0;i<k;i++)
    {
       x=r[i]-1;
       for(unsigned long long int j=a[i]-1;j<=b[i]-1;j++)
           mat[x][j]=1;
    }
    x=0;
    for(unsigned long long int i=0;i<row;i++)
        for(unsigned long long int j=0;j<col;j++)
        {
            if(mat[i][j]==0)
                x++;
        }
    cout<<x;
    return 0;
}

