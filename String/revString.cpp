#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    int freq[26]={0};

    

    for(int i=0;i<n;i++){
        freq[s[i]-'a']++;
    }
    string ans="";
    for(int i=0;i<26;i++){
        char ch='a'+i;
        while(freq[i]){
            ans.push_back(ch);
            freq[i]--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    
}