#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stdlib.h>
#include<cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char a[100][100],tmp[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
    }
     for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
        {

            if(atoi(a[i])>=atoi(a[j]))
            {
                strcpy(tmp,a[j]);
                strcpy(a[j],a[i]);
                strcpy(a[i],tmp);
            }   
        }
for(int i=0;i<n;i++)
         {
         cout<<a[i]<<'\n';
     }
    
    return 0;
}
