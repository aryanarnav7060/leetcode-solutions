#include <stdio.h>
#include <stdlib.h>

int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main(void) {
    // Test Case 1: Standard case, target present
    int nums1[] = {-1, 0, 3, 5, 9, 12};
    int size1 = 6;
    int target1 = 9;
    int result1 = search(nums1, size1, target1);
    assert(result1 == 4);
    printf("Test Case 1 Passed: index = %d\n", result1);

    // Test Case 2: Target not present
    int nums2[] = {-1, 0, 3, 5, 9, 12};
    int size2 = 6;
    int target2 = 2;
    int result2 = search(nums2, size2, target2);
    assert(result2 == -1);
    printf("Test Case 2 Passed: index = %d (not found)\n", result2);

    // Test Case 3: Edge case - single element, target found
    int nums3[] = {5};
    int size3 = 1;
    int target3 = 5;
    int result3 = search(nums3, size3, target3);
    assert(result3 == 0);
    printf("Test Case 3 Passed: index = %d\n", result3);

    // Test Case 4: Edge case - single element, target not found
    int nums4[] = {5};
    int size4 = 1;
    int target4 = 3;
    int result4 = search(nums4, size4, target4);
    assert(result4 == -1);
    printf("Test Case 4 Passed: index = %d (not found)\n", result4);

    printf("All local test cases passed!\n");
    return 0;
}