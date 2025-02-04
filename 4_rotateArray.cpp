#include <bits/stdc++.h>
using namespace std;
// Time complexcity O(n) and space complexcity O(1)
vector<int> rotateArr(vector<int> arr, int d) {
    int n = arr.size();
    
    // Step 1: Reverse the first d elements
    int left = 0;
    int right = d - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    // Step 2: Reverse the remaining n - d elements
    left = d;
    right = n - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    // Step 3: Reverse the entire array
    left = 0;
    right = n - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    return arr;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int d = 2;

    vector<int> rotatedArr = rotateArr(arr, d);

    // Print the rotated array
    for (int i = 0; i < rotatedArr.size(); i++) {
        cout << rotatedArr[i] << " ";
    }
    cout << endl;

    return 0;
}
