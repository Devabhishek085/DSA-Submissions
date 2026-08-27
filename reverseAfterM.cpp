void reverseArray(vector<int> &arr , int m) {
    // Write your code here
    int n=arr.size();

    vector<int> temp;
    
    for(int i=m+1;i<n;i++){
       temp.push_back(arr[i]);
    }

    int j=temp.size()-1;

    for(int i=m+1;i<n;i++){
        arr[i]=temp[j];
        j--;
    }
}