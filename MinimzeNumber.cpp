#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int operations=0;

    while(true){
        bool isEven=true;
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                isEven=false;
                break;
            }
        }

        if(!isEven){
            break;
        }

        for(int i=0;i<n;i++){
            arr[i]=arr[i]/2;
        }
        operations++;
    }
    cout<<operations;  
}