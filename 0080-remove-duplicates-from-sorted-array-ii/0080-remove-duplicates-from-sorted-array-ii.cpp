class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int j = 1;
        if (nums.size()== 1)
            return (j);
        for (int i = 2; i < nums.size(); i++)
        {
            if (nums[i] != nums[j - 1])
                nums[++j] = nums[i];
        }
        return(j + 1);
    }
};