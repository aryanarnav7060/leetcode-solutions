#include <stdio.h>
#include <stdlib.h>

void moveZeroes(int* nums, int numsSize) {
    int writePos = 0;

    // First pass: move all non-zero elements to the front
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[writePos] = nums[i];
            writePos++;
        }
    }

    // Second pass: fill the remaining positions with zeros
    for (int i = writePos; i < numsSize; i++) {
        nums[i] = 0;
    }
}

int main(void) {
    // Test Case 1: Standard case with zeros
    int nums1[] = {0, 1, 0, 3, 12};
    int size1 = 5;
    moveZeroes(nums1, size1);
    assert(nums1[0] == 1 && nums1[1] == 3 && nums1[2] == 12 && nums1[3] == 0 && nums1[4] == 0);
    printf("Test Case 1 Passed: ");
    for (int i = 0; i < size1; i++) printf("%d ", nums1[i]);
    printf("\n");

    // Test Case 2: No zeros
    int nums2[] = {1, 2, 3, 4, 5};
    int size2 = 5;
    moveZeroes(nums2, size2);
    assert(nums2[0] == 1 && nums2[1] == 2 && nums2[2] == 3 && nums2[3] == 4 && nums2[4] == 5);
    printf("Test Case 2 Passed: ");
    for (int i = 0; i < size2; i++) printf("%d ", nums2[i]);
    printf("\n");

    // Test Case 3: All zeros
    int nums3[] = {0, 0, 0, 0};
    int size3 = 4;
    moveZeroes(nums3, size3);
    assert(nums3[0] == 0 && nums3[1] == 0 && nums3[2] == 0 && nums3[3] == 0);
    printf("Test Case 3 Passed: ");
    for (int i = 0; i < size3; i++) printf("%d ", nums3[i]);
    printf("\n");

    // Test Case 4: Edge case - single element non-zero
    int nums4[] = {1};
    int size4 = 1;
    moveZeroes(nums4, size4);
    assert(nums4[0] == 1);
    printf("Test Case 4 Passed: single non-zero\n");

    // Test Case 5: Edge case - single element zero
    int nums5[] = {0};
    int size5 = 1;
    moveZeroes(nums5, size5);
    assert(nums5[0] == 0);
    printf("Test Case 5 Passed: single zero\n");

    printf("All local test cases passed!\n");
    return 0;
}