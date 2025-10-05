#include <iostream>
using namespace std;

int main() {
    int nums[] = {2, 5, 7, 9, 11};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target = 9;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                cout << i << " and " << j << endl;
            }
        }
    }

    return 0;
}
