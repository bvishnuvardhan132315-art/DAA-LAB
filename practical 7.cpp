#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, amount;

    cout << "Enter number of coins: ";
    cin >> n;

    vector<int> coins(n);

    cout << "Enter coin values: ";
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    cout << "Enter amount: ";
    cin >> amount;

    // dp[i] = minimum number of coins needed to make i
    vector<int> dp(amount + 1, amount + 1);

    // coinUsed[i] = coin used to make amount i
    vector<int> coinUsed(amount + 1, -1);

    dp[0] = 0;

    // Dynamic Programming
    for (int i = 1; i <= amount; i++) {
        for (int coin : coins) {
            if (coin <= i && dp[i - coin] + 1 < dp[i]) {
                dp[i] = dp[i - coin] + 1;
                coinUsed[i] = coin;
            }
        }
    }

    // If change cannot be made
    if (dp[amount] == amount + 1) {
        cout << "Change cannot be made." << endl;
        return 0;
    }

    cout << "\nMinimum number of coins = " << dp[amount] << endl;

    // Display coins used
    cout << "Coins used: ";

    int current = amount;

    while (current > 0) {
        cout << coinUsed[current] << " ";
        current -= coinUsed[current];
    }

    cout << endl;

    return 0;
}
