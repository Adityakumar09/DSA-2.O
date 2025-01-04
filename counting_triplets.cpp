#include <iostream>
#include <vector>
using namespace std;

int countTriplets(vector<int> &arr, int target) {
    int n = arr.size();
    int res = 0;
    for (int i = 0; i < n - 2; i++) {
        int left = i + 1, right = n - 1;
        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum < target) {
                left += 1;
            }
            else if (sum > target) {
                right -= 1;
            }
            else if (sum == target) {
                int ele1 = arr[left], ele2 = arr[right];
                int cnt1 = 0, cnt2 = 0;
                while (left <= right && arr[left] == ele1) {
                    left++;
                    cnt1++;
                }
                while (left <= right && arr[right] == ele2) {
                    right--;
                    cnt2++;
                }
                if (ele1 == ele2)
                    res += (cnt1 * (cnt1 - 1)) / 2;
                else
                    res += (cnt1 * cnt2);
            }
        }
    }
    return res;
}

int main() {
    vector<int> arr = {-3, -1, -1, 0, 1, 2};
    int target = -2;
    cout << countTriplets(arr, target) << endl;
    return 0;
}