#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int s = 0;                     // Start index
    int e = nums.size() - 1;       // End index
    int mid;                       // Middle index

    while (s <= e) {
        mid = s + (e - s) / 2;     // Calculate mid to avoid overflow
        if (nums[mid] < target) {
            s = mid + 1;           // Target is in the right half
        } else if (nums[mid] == target) {
            return mid;            // Target found
        } else {
            e = mid - 1;           // Target is in the left half
        }
    }
    return -1;                     // Target not found
}

int main() {
    vector<int> nums = {1, 3, 5, 7, 9, 11};
    int target = 7;

    int result = search(nums, target);
    if (result != -1) {
        cout << "Target " << target << " found at index " << result << endl;
    } else {
        cout << "Target " << target << " not found." << endl;
    }

    return 0;
}
