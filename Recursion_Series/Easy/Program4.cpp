//Problem 4 Print Linearly from 1 to N using backtracking

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void printSeries(int n)
{
   if(n==0)
   {
    return;
   }
   printSeries(n-1);
   cout<<n<<endl;
   
}

int main()
{
     int N;
     cin>>N;

     printSeries(N);

    return 0;
}