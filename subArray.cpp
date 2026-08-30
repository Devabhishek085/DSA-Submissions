#include <bits/stdc++.h>
using namespace std;


int main() {
  int t;
  cin>>t;
  
  while(t--){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
      cin>>arr[i];
    }

    for(int j=0;j<n;j++){

      int mx=INT_MIN;
      for(int i=j;i>=0;i--){
        mx=max(mx,arr[i]);
        cout<<mx<<" ";
      }
    }
    cout<<endl;
  }
}



