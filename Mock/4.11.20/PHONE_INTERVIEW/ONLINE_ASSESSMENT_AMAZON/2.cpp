/*
Given a positive integer n, generate a square matrix filled with elements from 1 to n2 in spiral order.

Example:

Input: 3
Output:
[
 [ 1, 2, 3 ],
 [ 8, 9, 4 ],
 [ 7, 6, 5 ]
]
*/
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int i, k = 0, l = 0;
        int m = n;
        vector<vector<int> > a(n,vector<int>(n));
    int co=1;
    while (k < m && l < n) {
        for (i = l; i < n; ++i) {
            a[k][i]=co++;
            cout << a[k][i] << " ";
        }
        k++;
 

        for (i = k; i < m; ++i) {
            a[i][n-1]=co++;
            cout << a[i][n - 1] << " ";
        }
        n--;
 

        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                a[m-1][i]=co++;
                cout << a[m - 1][i] << " ";
            }
            m--;
        }

        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                a[i][l]=co++;
                cout << a[i][l] << " ";
            }
            l++;
        }
    }
        return a;
    }
};