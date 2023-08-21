class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int add = 1;
        std::vector<int> answer(n, 1);

        for (int i = 1; i < n; ++i)
            answer[i] = nums[i - 1] * answer[i - 1];
        for (int i = n - 1; i >= 0; --i)
        {
            answer[i] = answer[i] * add;
            add = nums[i] * add;
        }
        return (answer);
    }
};