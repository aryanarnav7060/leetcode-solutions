#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define MAX_SIZE 100

typedef struct {
    char items[MAX_SIZE];
    int top;
} Stack;

void stackInit(Stack* s) {
    s->top = -1;
}

int stackIsEmpty(Stack* s) {
    return s->top == -1;
}

int stackIsFull(Stack* s) {
    return s->top == MAX_SIZE - 1;
}

void stackPush(Stack* s, char c) {
    if (!stackIsFull(s)) {
        s->items[++(s->top)] = c;
    }
}

char stackPop(Stack* s) {
    if (!stackIsEmpty(s)) {
        return s->items[(s->top)--];
    }
    return '\0';
}

char stackPeek(Stack* s) {
    if (!stackIsEmpty(s)) {
        return s->items[s->top];
    }
    return '\0';
}

int isMatchingPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

int isValid(char* s) {
    Stack stack;
    stackInit(&stack);

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (c == '(' || c == '{' || c == '[') {
            stackPush(&stack, c);
        } else if (c == ')' || c == '}' || c == ']') {
            if (stackIsEmpty(&stack)) {
                return 0;
            }
            char top = stackPop(&stack);
            if (!isMatchingPair(top, c)) {
                return 0;
            }
        }
    }

    return stackIsEmpty(&stack) ? 1 : 0;
}

int main(void) {
    // Test Case 1: Valid parentheses
    char s1[] = "()";
    assert(isValid(s1) == true);
    printf("Test Case 1 Passed: %s is valid\n", s1);

    // Test Case 2: Valid nested parentheses
    char s2[] = "()[]{}";
    assert(isValid(s2) == true);
    printf("Test Case 2 Passed: %s is valid\n", s2);

    // Test Case 3: Valid nested with mix
    char s3[] = "{[]}";
    assert(isValid(s3) == true);
    printf("Test Case 3 Passed: %s is valid\n", s3);

    // Test Case 4: Invalid - mismatched
    char s4[] = "(]";
    assert(isValid(s4) == false);
    printf("Test Case 4 Passed: %s is invalid\n", s4);

    // Test Case 5: Invalid - unclosed
    char s5[] = "(";
    assert(isValid(s5) == false);
    printf("Test Case 5 Passed: %s is invalid\n", s5);

    // Test Case 6: Invalid - wrong order
    char s6[] = "([)]";
    assert(isValid(s6) == false);
    printf("Test Case 6 Passed: %s is invalid\n", s6);

    // Test Case 7: Edge case - empty string
    char s7[] = "";
    assert(isValid(s7) == true);
    printf("Test Case 7 Passed: %s is valid (empty)\n", s7);

    printf("All local test cases passed!\n");
    return 0;
}