#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    char ch;
    cin>>ch;
    int end=-1;

    for(int i=0;i<s.size();i++){
        if(ch==s[i]){
            end=i;
            break;
        }
    }

    int start=0;
    while(start<end){
        swap(s[start++],s[end--]);
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }

}