#include<iostream>
#include<vector>
using namespace std;

// Function to find the first occurrence of a target value in an array using recursion
int firstOccurence(vector<int>& arr,int index,int target){
    if(index==arr.size()) return -1; // Base case: if index exceeds array size, target not found
    if(arr[index]==target) return index; // If current element matches target, return index
    return firstOccurence(arr,index+1,target); // Recursive call to check the next element
}

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target value to find its first occurrence: ";
    cin >> target;
    int result = firstOccurence(arr, 0, target);
    if(result != -1) {
        cout << "The first occurrence of " << target << " is at index: " << result << endl;
    } else {
        cout << target << " not found in the array." << endl;
    }
}