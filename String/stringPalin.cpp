#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();

    int start=0;
    int end=n-1;
    bool isPalin=true;

    while(start<end){
        if(s[start++]!=s[end--]){
            isPalin=false;
            break;
        }
    }
    if(isPalin){
        cout<<"Palindrome haiii"<<endl;
    }
    else{
        cout<<"Nhi hai palindrome!"<<endl;
    }
}