# include <iostream>
# include <vector>
# include <iterator>

class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        if (nums.size() < 0 || nums.size() > 100 || val < 0 || val > 100)
            return (0);
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it)
        {
            if (*it < 0 || *it > 50)
                return (0);
            if (*it == val)
                nums.erase(it--);
        }
        return(nums.size());
    }
};