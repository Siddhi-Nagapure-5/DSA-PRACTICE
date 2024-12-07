//Program 5 Print series from N to 1 using recursion

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printReverseSeries(int n)
{
   if(n==0)
   {
    return ;
   }
   cout<<n<<endl;
   return printReverseSeries(n-1);
}

int main()
{

     int N;
     cin>>N;

     printReverseSeries(N);

    return 0;
}

