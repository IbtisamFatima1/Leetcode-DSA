class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int index=0;
       vector<int> expected(heights.size());
       for (int i=0;i<heights.size();i++)
        {
           expected[i]=heights[i];
        }
        for (int i=0;i<heights.size()-1;i++)
        {
            for (int j=0;j<heights.size()-1-i;j++)
            {
                if (expected[j]>expected[j+1])
                {
                    swap(expected [j],expected[j+1]);
                }
            }
        }
        for (int i=0;i<heights.size();i++)
        {
            if (heights[i]!=expected[i])
            {
                index++;
            }
        }
        return index;
    }
};