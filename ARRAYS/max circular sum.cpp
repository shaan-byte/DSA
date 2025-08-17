#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Standard Kadane's algorithm to find max subarray sum
int kadaneMax(const vector<int>& arr) {
    int max_current = arr[0], max_global = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        max_current = max(arr[i], max_current + arr[i]);
        max_global = max(max_global, max_current);
    }
    return max_global;
}

// Kadane's for finding min subarray sum
int kadaneMin(const vector<int>& arr) {
    int min_current = arr[0], min_global = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        min_current = min(arr[i], min_current + arr[i]);
        min_global = min(min_global, min_current);
    }
    return min_global;
}

// Function to find the maximum circular subarray sum
int maxCircularSubarraySum(vector<int>& arr) {
    int max_kadane = kadaneMax(arr); // Case 1: Normal max subarray
    int total_sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        total_sum += arr[i];
    }

    int min_kadane = kadaneMin(arr); // Case 2: Min subarray for circular sum

    // Edge Case: If all elements are negative
    if (total_sum == min_kadane)
        return max_kadane;

    // Return the maximum of normal and circular cases
    return max(max_kadane, total_sum - min_kadane);
}

int main() {
    vector<int> arr = {8, -1, 3, 4};
    cout << "Maximum Circular Subarray Sum: " << maxCircularSubarraySum(arr) << endl;
    return 0;
}
