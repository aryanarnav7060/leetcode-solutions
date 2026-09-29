#include <stdio.h>
#include <string.h>
#include <assert.h>

void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main(void) {
    // Test Case 1: Standard odd-length string
    char s1[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    reverseString(s1, 5);
    assert(strcmp(s1, "olleh") == 0);
    printf("Test Case 1 Passed: %s\n", s1);

    // Test Case 2: Even-length string
    char s2[] = {'H', 'a', 'n', 'n', 'a', 'h', '\0'};
    reverseString(s2, 6);
    assert(strcmp(s2, "hannaH") == 0);
    printf("Test Case 2 Passed: %s\n", s2);

    // Test Case 3: Edge case (single character)
    char s3[] = {'A', '\0'};
    reverseString(s3, 1);
    assert(strcmp(s3, "A") == 0);
    printf("Test Case 3 Passed: %s\n", s3);

    printf("All local test cases passed!\n");
    return 0;
}