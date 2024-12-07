//This Program prints series of numbers from  to n backwards using Recursion

#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

void printFunc(int N)
{
    if(N==0)
    {
        return ;
    }
    cout<<(N)<<endl;
    return printFunc(N-1);
}
int main()
{
     int N;
     cin>>N;

     printFunc(N);

    return 0;
}

