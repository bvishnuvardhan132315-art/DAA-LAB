#include <iostream>
using namespace std;

int main() {
    int n, W;
    cin >> n >> W;

    int wt[n], val[n];
    for (int i = 0; i < n; i++)
        cin >> wt[i] >> val[i];

    int dp[W + 1] = {0};

    for (int i = 0; i < n; i++)
        for (int w = W; w >= wt[i]; w--)
            dp[w] = max(dp[w], val[i] + dp[w - wt[i]]);

    cout << "Maximum value = " << dp[W];

    return 0;
}
