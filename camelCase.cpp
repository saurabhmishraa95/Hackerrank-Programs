#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char ch[100001];
    int count=1;
    cin>>ch;
    
    
    for(int i=0;ch[i]!='\0';i++)
        {
        if((ch[i]>='A')&&(ch[i]<='Z'))
            count++;
    }
    cout<<count;
    return 0;
}

