#include <iostream>
#include <climits>
using namespace std;

// to finds the minimum and the maximum number  int the array 

int main() {
    int arr[5] = {5, 6, 7, 43, -2};
    int min = INT_MAX; // to use INT_MAX and INT_MIN, we must include the header file <climits>
    int max = INT_MIN;

    for (int i = 0; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "The minimum number in the array is: " << min << endl;
    cout << "The maximum number in the array is: " << max << endl;

    return 0;
}
