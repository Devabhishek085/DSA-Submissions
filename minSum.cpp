#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    int n;
    cin>>n;
    int arr[n];
    
    while(t--){
        for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum=arr[i]+arr[j]+j-i;
            if(ans>sum){
                ans=sum;
            }
        }
    }
    cout<<ans<<endl;;
    }
}
