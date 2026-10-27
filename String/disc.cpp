#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int disc=1;
        if(n>=100 && n<=1000){
            disc=100;
        }
        else{
            disc=0.1*n;
        }
        cout<<disc<<endl;
    }
}
