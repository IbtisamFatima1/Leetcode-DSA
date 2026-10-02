class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> sorted;
        vector<int> notpresent;

        for (int i=0;i<arr2.size();i++)
        {
            for (int j=0;j<arr1.size();j++)
            {
                if (arr2[i]==arr1[j])
                {
                    sorted.push_back(arr1[j]);
                }
            }
        }

        for (int i=0;i<arr1.size();i++)
        {
            bool found=false;

            for (int j=0;j<arr2.size();j++)
            {
                if (arr1[i]==arr2[j])
                {
                    found=true;
                }
            }

            if (found==false)
            {
                notpresent.push_back(arr1[i]);
            }
        }

        for (int i=0;i<notpresent.size();i++)
        {
            for (int j=0;j<notpresent.size()-1-i;j++)
            {
                if (notpresent[j]>notpresent[j+1])
                {
                    swap(notpresent[j],notpresent[j+1]);
                }
            }
        }

        for (int i=0;i<notpresent.size();i++)
        {
            sorted.push_back(notpresent[i]);
        }

        return sorted;
    }
};