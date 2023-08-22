class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        vector<int> tmp;
        
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it)
        {
            for (vector<int>::iterator tmp_it = tmp.begin(); tmp_it != tmp.end(); ++tmp_it)
            {
                if (*it == *tmp_it)
                {
                    nums.erase(--it);
                    break;
                }
            }
            tmp.push_back(*it);
        }
        tmp.clear();
        return(nums.size());
    }
};