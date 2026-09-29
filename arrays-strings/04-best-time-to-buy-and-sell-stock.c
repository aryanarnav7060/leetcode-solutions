#include <stdio.h>
#include <stdlib.h>

int maxProfit(int* prices, int pricesSize) {
    if (pricesSize < 2) return 0;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else {
            int profit = prices[i] - minPrice;
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
    }

    return maxProfit;
}

int main(void) {
    // Test Case 1: Standard case with profit
    int prices1[] = {7, 1, 5, 3, 6, 4};
    int size1 = 6;
    int profit1 = maxProfit(prices1, size1);
    assert(profit1 == 5);
    printf("Test Case 1 Passed: max profit = %d (buy at 1, sell at 6)\n", profit1);

    // Test Case 2: No profit possible (decreasing prices)
    int prices2[] = {7, 6, 4, 3, 1};
    int size2 = 5;
    int profit2 = maxProfit(prices2, size2);
    assert(profit2 == 0);
    printf("Test Case 2 Passed: max profit = %d (no transaction)\n", profit2);

    // Test Case 3: Edge case - single price
    int prices3[] = {5};
    int size3 = 1;
    int profit3 = maxProfit(prices3, size3);
    assert(profit3 == 0);
    printf("Test Case 3 Passed: max profit = %d (single price)\n", profit3);

    printf("All local test cases passed!\n");
    return 0;
}