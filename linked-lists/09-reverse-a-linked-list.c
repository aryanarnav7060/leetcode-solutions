#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev = NULL;
    struct ListNode *current = head;
    struct ListNode *nextNode = NULL;

    while (current != NULL) {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    return prev;
}

// Helper: create a linked list from an array
struct ListNode* createList(int arr[], int size) {
    if (size == 0) return NULL;
    struct ListNode *head = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->val = arr[0];
    head->next = NULL;
    struct ListNode *tail = head;
    for (int i = 1; i < size; i++) {
        tail->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        tail = tail->next;
        tail->val = arr[i];
        tail->next = NULL;
    }
    return head;
}

// Helper: print a linked list
void printList(struct ListNode* head) {
    while (head != NULL) {
        printf("%d -> ", head->val);
        head = head->next;
    }
    printf("NULL\n");
}

// Helper: free a linked list
void freeList(struct ListNode* head) {
    while (head != NULL) {
        struct ListNode* temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    // Test Case 1: Standard list 1->2->3->4->5
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = 5;
    struct ListNode* head1 = createList(arr1, size1);
    printf("Test Case 1 Before: ");
    printList(head1);
    struct ListNode* reversed1 = reverseList(head1);
    printf("Test Case 1 After: ");
    printList(reversed1);
    // Verify: should be 5->4->3->2->1
    int expected1[] = {5, 4, 3, 2, 1};
    struct ListNode* curr1 = reversed1;
    for (int i = 0; i < size1; i++) {
        assert(curr1->val == expected1[i]);
        curr1 = curr1->next;
    }
    printf("Test Case 1 Passed: reversed correctly\n");
    freeList(reversed1);

    // Test Case 2: Single element
    int arr2[] = {1};
    int size2 = 1;
    struct ListNode* head2 = createList(arr2, size2);
    struct ListNode* reversed2 = reverseList(head2);
    assert(reversed2->val == 1 && reversed2->next == NULL);
    printf("Test Case 2 Passed: single element reversed\n");
    freeList(reversed2);

    // Test Case 3: Empty list
    struct ListNode* head3 = NULL;
    struct ListNode* reversed3 = reverseList(head3);
    assert(reversed3 == NULL);
    printf("Test Case 3 Passed: empty list reversed\n");

    printf("All local test cases passed!\n");
    return 0;
}