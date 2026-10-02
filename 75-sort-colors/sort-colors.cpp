class Solution {
public:
    void sortColors(vector<int>& nums) {
        bool swapped =true;
        for (int i=0;i<nums.size();i++)
        {
            for (int j=0;j<nums.size()-1-i;j++)
            {
                if (nums[j]>nums[j+1])
                {
                    swap(nums[j],nums[j+1]);
                    swapped=true;
                }
                
            }
            if (swapped==false)
            {
                break;
            }
        }
    }
};