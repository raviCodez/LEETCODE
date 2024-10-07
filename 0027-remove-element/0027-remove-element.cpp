class Solution {
public:
    int removeElement(vector<int>& nums,int val) {
        if(nums.size() == 0) return 0;  // Handle empty array
        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != val){
                nums[i] = nums[j];
                i++;
                  // Move the unique element forward
            }
        }
        return i;  // Number of unique elements
    }
};