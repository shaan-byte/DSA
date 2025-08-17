#include <bits/stdc++.h>
using namespace std;

/**
 * @brief This function partitions the array on the basis of a pivot element.
 *        It places all elements smaller than the pivot to its left and all greater elements to its right.
 *
 * @param arr The vector of integers to be sorted.
 * @param low The starting index of the subarray to be partitioned.
 * @param high The ending index of the subarray to be partitioned.
 *
 * @return The index of the pivot element after partitioning.
 */
int Partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {  //checking for element greater than pivot
            i++;
        }
        while (arr[j] > pivot && j >= low + 1) {    //checking for element smaller than pivot
            j--;
        }
        if (i < j) {    //if i and j are not crossed then swap the elements
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]); //swap the pivot element with the element at index j if i and j crossed
    return j;
}


/**
 * @brief This function performs the QuickSort algorithm on a vector of integers.
 *        It recursively partitions the array and sorts the elements smaller than the pivot to its left and greater elements to its right.
 *
 * @param arr The vector of integers to be sorted.
 * @param low The starting index of the subarray to be sorted.
 * @param high The ending index of the subarray to be sorted.
 *
 * @return This function does not return a value. It sorts the input vector in-place.
 */
void QuickSort(vector<int> &arr, int low, int high){
    if(low<high){
        int pi=Partition(arr, low, high);
        QuickSort(arr,low,pi-1);
        QuickSort(arr,pi+1,high);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    QuickSort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";}
        return 0;
}