#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numTrees(int n) {
        vector<int> G(n + 1);
        G[0] = 1;
        G[1] = 1;

        for (int i = 2; i <= n; ++i) {
            for (int j = 0; j < i; ++j) {
                G[i] += G[j] * G[i - j - 1];
            }
        }

        return G[n];
    }
};

int main() {
    Solution solution;

    // Example 1
    int n1 = 3;
    cout << "Input: n = " << n1 << endl;
    cout << "Output: " << solution.numTrees(n1) << endl;

    // Example 2
    int n2 = 1;
    cout << "Input: n = " << n2 << endl;
    cout << "Output: " << solution.numTrees(n2) << endl;

    return 0;
}
