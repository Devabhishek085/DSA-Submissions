#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int copy[n];
    for(int i=0;i<n;i++){
        copy[i]=arr[i];
    }
    reverse(copy,copy+n);
    bool isPalin=true;
    for(int i=0;i<n;i++){
        if(copy[i]!=arr[i]){
            isPalin=false;
        }
    }
    cout<<(isPalin?"YES":"NO")<<endl;





}
