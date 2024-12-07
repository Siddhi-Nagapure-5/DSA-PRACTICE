//Program 6 Find Nth Fibonacci Number

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int printNthFibonacciNumber(int n)
{
    if(n<=1)
    {
     return n;
    }
    return printNthFibonacciNumber(n-1)+printNthFibonacciNumber(n-2);
}
int main()
{
   
    int n;
    cin >> n;

    int result=printNthFibonacciNumber(n);
    cout<<result;

    return 0;
}




