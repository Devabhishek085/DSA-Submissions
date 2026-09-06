#include <bits/stdc++.h>
using namespace std;


int main() {
  int n;
  cin>>n;
  int arr[n];

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  int index=-1;
  for(int i=0;i<n;i++){
    if(arr[i]==0){
      index=i;
      reverse(arr,arr+i);
    }
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}



