//Problem - The Tower Of Hanoi Problem using recursion technique

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char fromRod,char toRod,char midRod)
{
if(n==1)
{
    cout<<"Move disk from "<<fromRod<<" to "<<toRod<<endl;
    return ;
}
towerOfHanoi(n-1,fromRod,midRod,toRod);
cout<<"Move disk from "<<fromRod<<" to "<<toRod<<endl;
towerOfHanoi(n-1,midRod,toRod,fromRod);
}

int main()
{
    char a,b,c;
    int n;

    cin>>n;
    cin>>a>>b>>c;

    towerOfHanoi(n,a,b,c);


    return 0;
}

