// Program it checks whether the array is sorted or not using recursion

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int checkIfSorted(int vec[],int n)
{
    if(n==1)
    {
        return 1;
    }
    return (vec[n-1]<vec[n-2])?0: checkIfSorted(vec,n-1);
}
int main()
{
   int n;
   cout<<"Enter Length of Array\n";
   cin>>n;
   int arr[n];

   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }

   if(checkIfSorted(arr, n))
   {
    cout<<"YES IT IS SORTED...";
   }
   else
   {
    cout<<"NO IT IS NOT SORTED....";
   }

       return 0;

}