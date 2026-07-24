#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   int mx=arr[0];
   int mn=arr[0];
   int i1=0;
   int i2=0;
   for(int i=0;i<n;i++){
      if(mx<arr[i]){
         mx=arr[i];
         i1=i;
      }
      if(mn>arr[i]){
         mn=arr[i];
         i2=i;
      }
   }
   swap(arr[i2],arr[i1]);
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
}
