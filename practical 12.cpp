
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n = 4;

    int graph[4][4] = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int cities[] = {1, 2, 3};
    int minCost = INT_MAX;
    int bestPath[4];

    do {
        int cost = 0;
        int current = 0;

        for (int i = 0; i < n - 1; i++) {
            cost += graph[current][cities[i]];
            current = cities[i];
        }

        cost += graph[current][0];

        if (cost < minCost) {
            minCost = cost;

            bestPath[0] = 0;
            for (int i = 0; i < n - 1; i++) {
                bestPath[i + 1] = cities[i];
            }
        }

    } while (next_permutation(cities, cities + n - 1));

    cout << "Shortest Route: ";
    for (int i = 0; i < n; i++) {
        cout << bestPath[i] << " -> ";
    }
    cout << "0" << endl;

    cout << "Minimum Cost: " << minCost << endl;

    return 0;
}

       
