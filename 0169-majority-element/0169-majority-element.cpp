class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        //Moore's Voting Algorithm
        int cout = 0;
        int el;
        for (int i = 0; i < nums.size(); i++)
        {
            if (cout == 0)
            {
                cout = 1;
                el = nums[i];
            }
            else
                (nums[i] == el) ? cout++ : cout--;
        }
        cout = 0;
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] == el)
                cout++;
        if (cout > nums.size() / 2)
            return (el);
        return (-1);
        }
};