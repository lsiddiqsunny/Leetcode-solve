class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> ans;
        if (n == 1)
        {

            ans.push_back(0);
            return ans;
        }
        int left[n];
        int right[n];

        /* Allocate memory for the product array */
        int prod[n];

        int i, j;

        left[0] = 1;

        right[n - 1] = 1;

        for (i = 1; i < n; i++)
            left[i] = arr[i - 1] * left[i - 1];

        for (j = n - 2; j >= 0; j--)
            right[j] = arr[j + 1] * right[j + 1];

        for (i = 0; i < n; i++)
        {
            prod[i] = left[i] * right[i];
            ans.push_back(prod[i]);
        }
        return ans;
    }
};