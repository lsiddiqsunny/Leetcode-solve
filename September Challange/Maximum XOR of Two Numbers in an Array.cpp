class Solution
{
public:
    int findMaximumXOR(vector<int> &arr)
    {
        int maxx = 0, mask = 0;
        int n = arr.size();
        set<int> se;

        for (int i = 31; i >= 0; i--)
        {

            mask |= (1 << i);

            for (int i = 0; i < n; ++i)
            {

                se.insert(arr[i] & mask);
            }

            int newMaxx = maxx | (1 << i);

            for (int prefix : se)
            {

                if (se.count(newMaxx ^ prefix))
                {
                    maxx = newMaxx;
                    break;
                }
            }

            se.clear();
        }

        return maxx;
    }
};