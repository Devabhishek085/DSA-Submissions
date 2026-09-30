#include <iostream>
using namespace std;

int main(){
    string s;
    int t;
    cin>>t;

    while(t--){
        cin>>s;
        char first=s[0];
        char last=s[s.size()-1];

        if(s.size()>10){
            cout<<first;
            int noc=0;
            for(int i=1;i<s.size()-1;i++){
                noc++;
            }
            cout<<noc;
            cout<<last<<endl;
        }
        else{
            cout<<s<<endl;
        }
        

    }
}