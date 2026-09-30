#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    string temp=s;

    int start=0;
    int end=s.size()-1;

    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }

    bool isPalin=true;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]!=temp[i]){
            isPalin=false;
            break;
        }
    }

    if(isPalin){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }
}