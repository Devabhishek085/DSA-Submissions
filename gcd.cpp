# include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;

    int mx = INT_MIN;
    for(int i = 1; i <= min(a,b); i++) {
    if(a % i == 0 && b % i == 0) {
        mx = i;
    }
}
cout << mx;
}