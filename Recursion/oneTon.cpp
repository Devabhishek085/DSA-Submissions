#include <bits/stdc++.h>
using namespace std;



void print(int x,int n){
    if(x>n){
        return;
    }
    cout<<x<<" ";          
    print(x+1,n);
}

    

int main() {
   cin>>n;
   print(1,n);
    
}