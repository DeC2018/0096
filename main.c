#include <stdio.h>

// Function to calculate the number of unique BSTs
int numTrees(int n) {
    long sol = 1;
    for (int i = 0; i < n; ++i) {
        sol = sol * 2 * (2 * i + 1) / (i + 2);
    }
    return (int)sol;
}

int main() {
    // Example 1
    int n1 = 3;
    printf("Input: n = %d\n", n1);
    printf("Output: %d\n", numTrees(n1));

    // Example 2
    int n2 = 1;
    printf("Input: n = %d\n", n2);
    printf("Output: %d\n", numTrees(n2));

    return 0;
}
