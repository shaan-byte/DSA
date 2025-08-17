#include<bits/stdc++.h>
using namespace std;
// Function to find the maximum profit from buying and selling stocks

int main(){
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int n = prices.size();
    int leastbuy=prices[0];
    int maxprofit = 0;
    for(int i=0;i<n;i++){
        if(prices[i]<leastbuy){
            leastbuy=prices[i];
        }
        else if(prices[i]-leastbuy>maxprofit){
            maxprofit=prices[i]-leastbuy;
        }
    }cout<<maxprofit<<endl;
}
//     return 0;