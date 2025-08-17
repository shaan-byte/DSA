class Solution {
    public:
      /**
       * @brief Merges two sorted subarrays of the input array.
       *
       * This function takes an array, two indices representing the lower and upper bounds of the first subarray,
       * and the upper bound of the second subarray. It merges these two subarrays in sorted order and stores the result
       * in the original array.
       *
       * @param arr The input array to be sorted.
       * @param low The lower bound index of the first subarray.
       * @param mid The upper bound index of the first subarray and the lower bound index of the second subarray.
       * @param high The upper bound index of the second subarray.
       */
      void merge(vector<int> &arr, int low, int mid, int high) {
          vector<int> temp;
          int left = low;
          int right = mid + 1;

          // Merge the two subarrays
          while (left <= mid && right <= high) {
              if (arr[left] <= arr[right]) {
                  temp.push_back(arr[left]);
                  left++;
              } else {
                  temp.push_back(arr[right]);
                  right++;
              }
          }

          // Copy the remaining elements of the left subarray, if any
          while (left <= mid) {
              temp.push_back(arr[left]);
              left++;
          }

          // Copy the remaining elements of the right subarray, if any
          while (right <= high) {
              temp.push_back(arr[right]);
              right++;
          }

          // Copy the merged subarray back to the original array
          for (int i = low; i <= high; i++) {
              arr[i] = temp[i - low];
          }
      }

      /**
       * @brief Performs merge sort on a given array of integers.
       *
       * This function recursively divides the input array into two halves, sorts them using merge sort,
       * and then merges the sorted halves back together.
       *
       * @param arr The input array to be sorted.
       * @param l The lower bound index of the subarray to be sorted.
       * @param r The upper bound index of the subarray to be sorted.
       *
       * @return void
       */
      void mergeSort(vector<int>& arr, int l, int r) {
          if(l >= r) {
              return;
          }
          int mid = (l + r) / 2;
          mergeSort(arr, l, mid);
          mergeSort(arr, mid + 1, r);
          merge(arr, l, mid, r);
      }

  };

  int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
  }
  