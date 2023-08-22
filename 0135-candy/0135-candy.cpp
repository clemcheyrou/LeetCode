class Solution {
public:
    int candy(vector<int>& ratings)
    {
        int n = ratings.size();
        int j = 0;
        vector<int> tmp(n,1);
        for (int i = 1; i < n; i++)
            if (ratings[i - 1] < ratings[i])
                tmp[i] = max(tmp[i], tmp[i - 1] + 1);
        for (int i = n - 2; i >= 0; i--)
            if (ratings[i + 1] < ratings[i])
                tmp[i] = max(tmp[i], tmp[i + 1] + 1);
        for (int i = 0; i < n; i++)
            j += tmp[i];
        return (j);
    }
};