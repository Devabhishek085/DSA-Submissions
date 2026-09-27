#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n][n];

    int first=0,second=0;   
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            if(i==j){
                first+=x;
            }
            if(i+j==n-1){
                second+=x;
            }
        }
    }
    cout<<abs(first-second)<<endl;
}