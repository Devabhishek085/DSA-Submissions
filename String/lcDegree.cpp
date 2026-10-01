#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int n=s.size();

    int diff=0;
    int ans=0;
    for(int i=1;i<n;i++){
        int diff=abs(s[i]-s[i-1]);
        ans=ans+diff;
    }
    cout<<ans;
    
}