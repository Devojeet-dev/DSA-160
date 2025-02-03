#include <bits/stdc++.h>
using namespace std;
// using extra space 
vector<int> reverseArray(vector<int> arr){
    int n = arr.size();
    int j=n-1;
    vector<int> copy(n);
    for(int i = 0; i<n; i++){
        copy[i]=arr[j-i];
    }
    return copy;
}

// Without using extra space
 vector<int> reverse_Array(vector<int> &arr) {
        int left=0;
        int right=arr.size()-1;
        while(left<right){
            swap(arr[left],arr[right]);
            
            left++;
            
            right--;
        }
        return arr;
    }
int main(){
    vector<int> arr = {1,2,3,4};
    // vector<int> ReverseArray = reverseArray(arr);
       vector<int> ReverseArray = reverse_Array(arr);
    for(int i=0; i<ReverseArray.size(); i++){
        cout<<ReverseArray[i]<<" ";
    }
}