//Program 3 Print name N times

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printName(int n,string s)
{
    if(n==0)
    {
        return;
    }
    cout<<s<<endl;
    return printName(n-1,s);
}
int main()
{
    int N;
    string s;
    
    cin>>N;
    cin>>s;

    printName(N,s);


    return 0;
}