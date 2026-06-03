class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int low=0;
        int high=n-1;
        int maxarea=0;
        while(low<high){
            int currentwater=min(height[low],height[high])*(high-low);
            if(height[low]<=height[high]){
                low++;
            }
            else{
                high--;
            }
            maxarea=max(maxarea,currentwater);
            

        }
        return maxarea;
        
    }
};
