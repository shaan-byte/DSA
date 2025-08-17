#include<bits/stdc++.h>
using namespace std;
/**
 * @brief Sorts an array using the selection sort algorithm
 *
 * This function implements the selection sort algorithm which works by
 * repeatedly finding the minimum element from the unsorted part of the array
 * and putting it at the beginning of the unsorted part.
 *
 * @param arr The array to be sorted
 * @param n The number of elements in the array
 * @return void This function doesn't return a value
 */
void selectionsort(int arr[], int n) {
    for(int i=0; i<=n-2; i++) {
        int mini=i;
        for(int j=i; j<=n-1; j++) {
            if(arr[j]<arr[mini]) {
                mini=j;
            }
        }swap(arr[i], arr[mini]);
    }
}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
selectionsort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
