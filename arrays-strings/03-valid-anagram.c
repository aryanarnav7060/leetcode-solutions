#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>

bool isAnagram(char* s, char* t) {
    int lenS = strlen(s);
    int lenT = strlen(t);

    if (lenS != lenT) {
        return false;
    }

    int count[26] = {0};

    for (int i = 0; i < lenS; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main(void) {
    // Test Case 1: Standard valid anagram
    char s1[] = "anagram";
    char t1[] = "nagaram";
    assert(isAnagram(s1, t1) == true);
    printf("Test Case 1 Passed: '%s' and '%s' are anagrams.\n", s1, t1);

    // Test Case 2: Different strings / lengths
    char s2[] = "rat";
    char t2[] = "car";
    assert(isAnagram(s2, t2) == false);
    printf("Test Case 2 Passed: '%s' and '%s' are not anagrams.\n", s2, t2);

    // Test Case 3: Edge case (single character)
    char s3[] = "a";
    char t3[] = "a";
    assert(isAnagram(s3, t3) == true);
    printf("Test Case 3 Passed: single character identical strings.\n");

    printf("All local test cases passed!\n");
    return 0;
}s