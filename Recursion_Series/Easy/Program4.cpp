//Problem 4 Print Linearly from 1 to N

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void printSeries(int n,int i)
{
   if(i>n)
   {
    return;
   }
   cout<<i<<endl;
   return printSeries(n,i+1);
   
}

int main()
{
     int N;
     cin>>N;

     printSeries(N,1);

    return 0;
}