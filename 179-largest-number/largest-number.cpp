class Solution {
public:
    string largestNumber(vector<int>& nums) {

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                string a = to_string(nums[i]);
                string b = to_string(nums[j]);

                if (a + b < b + a)
                {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }

        string c = "";

        for (int i = 0; i < nums.size(); i++)
        {
            c = c + to_string(nums[i]);
        }

        if (c[0] == '0')
            return "0";

        return c;
    }
};