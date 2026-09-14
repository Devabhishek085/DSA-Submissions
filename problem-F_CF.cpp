#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int left=0,right=n-1;


    while(left<=right ){
        if(left==right){
            cout<<arr[left]<<" ";
        }
        else{
            cout<<arr[left]<<" "<<arr[right]<<" ";
        }
        left++;
        right--;
    }
}

