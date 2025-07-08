#include<iostream>
using namespace std ;

// Remove Duplicates from Sorted Array
/*
Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/

#include <iostream>
using namespace std;

int removeDuplicate(int nums[], int k) {


    int i = 0;
    for (int j = 1; j < k; j++) {
        if (nums[i] != nums[j]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}

int main() {
    int nums[] = {1, 1, 2, 2, 3, 4, 4};
    int k = sizeof(nums) / sizeof(nums[0]);

    int newLength = removeDuplicate(nums, k);

    cout << "New length: " << newLength << endl;
    cout << "Modified array: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
