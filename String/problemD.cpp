#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b; 
    cin>>a>>b;

    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;

    char a1=a[0];
    char b1=b[0];

    a[0]=b1;
    b[0]=a1;

    cout<<a<<" "<<b<<endl;

}