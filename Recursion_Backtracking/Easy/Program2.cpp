//This program is used to find factorial of given number using the concept of recursion.

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int findFactorial(int N)
{
    if(N==1)
    {
        return 1;
    }
    return N*findFactorial(N-1);

}
int main()
{
    int N;
    cin>>N;

    cout<<"Factorial of "<<N<<" is :- "<<findFactorial(N);

    return 0;
}