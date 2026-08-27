
#include <iostream>
using namespace std;

int main() {
    int n = 5, W = 9;
    int weight[] = {5, 4, 2, 3, 6};
    int value[] = {10, 11, 2, 3, 9};

    int dp[10] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = W; j >= weight[i]; j--) {
            dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);

        }
    }

    cout << "Maximum Value = " << dp[W];

    return 0;
}

