#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> nums(n, vector<int>(n, 0));
        int left = 0, right = n - 1, up = 0, down = n - 1;
        int count = 1;
        while(left <= right && up <= down)
        {
            for (int i = left; i < right; i++)
                nums[up][i] = count++;
            for (int i = up; i < down; i++)
                nums[i][right] = count++;
            for (int i = right; i > left; i--)
                nums[down][i] = count++;
            for (int i = down; i > up; i--)
                nums[i][left] = count++;

            left++;
            right--;
            up++;
            down--;
        }
        if(n % 2)
            nums[n / 2][n / 2] = n * n;
        return nums;

    }
};