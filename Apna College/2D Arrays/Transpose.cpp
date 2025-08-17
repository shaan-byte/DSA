#include <iostream>
#include <vector>
#include <algorithm> // for std::reverse
using namespace std;

vector<vector<int>> Transpose(vector<vector<int>>& arr) {
    int n=arr.size();
    int m=arr[0].size();
    vector<vector<int>> ans(m,vector<int>(n));
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            ans[j][i]=arr[i][j];
        }
    }return ans;
}


int main() {
    vector < vector < int >> arr;
    arr =  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    arr=Transpose(arr);
    cout << "Rotated Image" << endl;
    for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[0].size(); j++) {
        cout << arr[i][j] << " ";
    }
    cout <<endl;
    }

}