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
    vector<int> v;
    long count=0;
    int x;
    for(int i=0;i<n;i++)
    {    cin>>x;
         v.push_back(x);
    }
    sort(v.begin(),v.end());

    int i=0;
    int j=1;
   while(j < n) {
        int diff = v[j] - v[i];
        
        if (diff == k) {
            count++;
            j++;
        } else if (diff > k) {
            i++;
        } else if (diff < k) {
            j++;}
   }
    cout<<count;
    return 0;
}

