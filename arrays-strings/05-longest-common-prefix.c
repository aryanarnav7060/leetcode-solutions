#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";

    int len = strlen(strs[0]);
    int commonLen = len;

    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (j < commonLen && j < (int)strlen(strs[i]) && strs[0][j] == strs[i][j]) {
            j++;
        }
        commonLen = j;
        if (commonLen == 0) break;
    }

    char* result = (char*)malloc((commonLen + 1) * sizeof(char));
    strncpy(result, strs[0], commonLen);
    result[commonLen] = '\0';
    return result;
}

int main(void) {
    // Test Case 1: Standard case with common prefix
    char* strs1[] = {"flower", "flow", "flight"};
    int size1 = 3;
    char* result1 = longestCommonPrefix(strs1, size1);
    assert(strcmp(result1, "fl") == 0);
    printf("Test Case 1 Passed: prefix = '%s'\n", result1);
    free(result1);

    // Test Case 2: No common prefix
    char* strs2[] = {"dog", "racecar", "car"};
    int size2 = 3;
    char* result2 = longestCommonPrefix(strs2, size2);
    assert(strcmp(result2, "") == 0);
    printf("Test Case 2 Passed: prefix = '%s'\n", result2);
    free(result2);

    // Test Case 3: Edge case - single string
    char* strs3[] = {"interspecies"};
    int size3 = 1;
    char* result3 = longestCommonPrefix(strs3, size3);
    assert(strcmp(result3, "interspecies") == 0);
    printf("Test Case 3 Passed: prefix = '%s'\n", result3);
    free(result3);

    printf("All local test cases passed!\n");
    return 0;
}