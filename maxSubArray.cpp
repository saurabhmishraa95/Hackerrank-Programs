#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Prlong long output to STDOUT */  
    long long times;
        cin>>times;
    long long maxa[times],maxsuma[times];
    for(long long i;i<times;i++)
	{
    long long maxsum=0,x,n,max=-99999,temp=0,min=-99999;
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(x>min)
        min=x;
        if(x>0)
            maxsum=maxsum+x;
         temp = temp + x;
         if(x==0&&max<0)
         temp=0;
        if (temp > max)
            max = temp;
        if(temp<0)
           temp=0;
 
    }
    if(maxsum==0)
    maxsum=min;
    maxsuma[i]=maxsum;
    maxa[i]=max;
}
    for(long long i=0;i<times;i++)
    cout<<maxa[i]<<" "<<maxsuma[i]<<"\n";
    
    return 0;
}

