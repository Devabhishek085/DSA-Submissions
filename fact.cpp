# include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long prod=1;
        for(int i=1;i<=n;i++){
            prod=prod*i;
        }
        cout<<prod<<endl;
    }
}