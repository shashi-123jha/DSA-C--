#include <iostream>
#include <vector>
#include <climits> // for INT_MIN
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxSum = INT_MIN; // To store the maximum sum found
    int currentSum = 0;   // To store current running sum

    for(int i = 0; i < nums.size(); i++) {
        currentSum += nums[i];              // Add current number to currentSum
        maxSum = max(maxSum, currentSum);   // Update maxSum if currentSum is higher
        if(currentSum < 0) currentSum = 0;  // If currentSum becomes negative, reset it to 0
    }

    return maxSum;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum Subarray Sum = " << maxSubArray(arr) << endl;
    return 0;
}

