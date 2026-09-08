#include <bits/stdc++.h>
using namespace std;


int main() {

  int arr[]={1,4,45,6,10,8};
  int n=sizeof(arr)/sizeof(arr[0]);
  int target=55;

  sort(arr,arr+n);

  for(int i=0;i<n-2;i++){
    int start=i+1;
    int end=n-1;
    int newTarget=target-arr[i];
    int found=false;

    while(start<end){
      if(arr[start]+arr[end]==newTarget){
        found=true;
        break;
      }
      else if(arr[start]+arr[end]<newTarget){
        start++;
      }
      else{
        end--;
      }
    }
   if(found){
     cout<<arr[i]<<" "<<arr[start]<<" "<<arr[end]<<endl;
   }
  }
}




