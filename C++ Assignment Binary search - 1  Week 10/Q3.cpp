#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row = 0;
    vector<vector<int>> matrix = {{0, 1, 1}, {1, 1, 1}, {0, 0, 0}};
    
    int max = 0; // Initialize max to 0
    for (int i = 0; i < matrix.size(); i++) // Iterate over rows
    {
        int lo = 0, hi = matrix[i].size() - 1, result = -1;
        int target = 1, count = 0;

        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (matrix[i][mid] == target)
            {
                result = mid;
                hi = mid - 1;
            }
            else if (matrix[i][mid] > target)
            {
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }

        if (result != -1)
        {
            count = matrix[i].size() - result;
        }

        if (count > max) // Compare with max correctly
        {
            max = count;
            row = i;
        }
    }

    cout << "Row with the max number of 1s: " << row << endl;
    return 0;
}
