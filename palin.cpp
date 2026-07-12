# include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp=n;
    int rev=0;
    while(temp!=0){
        int digit=temp%10;
        rev=rev*10+digit;
        temp=temp/10;
    }
    cout<<(rev==n?"Yes":"No")<<endl;
}