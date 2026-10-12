#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int nums[n];

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector <int> leftsum(n);
    for(int i=0;i<n;i++){
        if(i==0){
            leftsum[i]=0;
        }
        else{
            leftsum[i]=leftsum[i-1]+nums[i-1];
        }
    }

    vector<int> rightsum(n);

    for(int i=0;i<n;i++){
        int ans=0;
        for(int j=i+1;j<n;j++){
            rightsum[i]+=nums[j];
        }
    }

    for(int i=0;i<n;i++){
        cout<<abs(leftsum[i]-rightsum[i])<<" ";
    }
    



   
}