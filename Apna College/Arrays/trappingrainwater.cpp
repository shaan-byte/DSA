//2 Poinetr Approach
//trapping rainwater problem
//rain water trapped between the bars of different heights
//compare the 2 largestbars on the left and right side of the current bar
//the water trapped on the current bar is equal to the minimum of the 2 largest bars minus the height of the current bar
class Solution {
    public:
        int trap(vector<int>& height) {
            int n=height.size();
            int total=0;
            int l=0;int r=n-1;
            int lmax=0;int rmax=0;
            while(l<r){
                lmax=max(lmax,height[l]);
                rmax=max(rmax,height[r]);
                if(lmax<rmax){
                    total+=lmax-height[l];
                    l++;
                }else{
                    total+=rmax-height[r];
                    r--;
                }
            }return total;
        }
    };

//Prefis Sum Approach
    class Solution {
        public:
            int trap(vector<int>& height) {
                int n=height.size();
                vector<int> leftmax(n);
                vector<int> rightmax(n);
                leftmax[0]=height[0];
                rightmax[n-1]=height[n-1];
                for(int i=1;i<n;i++){
                    leftmax[i]=max(leftmax[i-1],height[i]);
                }
                  for(int i=n-2;i>=0;i--){
                    rightmax[i]=max(rightmax[i+1],height[i]);
                }
        
                int total=0;
                for(int i=0;i<n;i++){
                    total+=min(leftmax[i],rightmax[i])-height[i];
                }return total;
            }
        };