#include <iostream>
#include <vector>
using namespace std;

//Recursive Function to check if an array is sorted

bool isSorted(vector<int>& arr,int index){
    if(index==arr.size()-1) return true; // Base case: if we reach the last element, the array is sorted
    if(arr[index]>arr[index+1]) return false; // If the current element is greater than the next, the array is not sorted
    return isSorted(arr, index + 1); // Recursive call to check the next element
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
    if(isSorted(arr, 0)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }
    return 0;
}