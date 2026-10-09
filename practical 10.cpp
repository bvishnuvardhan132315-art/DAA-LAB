#include <iostream>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v, w;
};

bool compare(Edge a, Edge b) {
    return a.w < b.w;
}

int parent[5];

int find(int x) {
    if (parent[x] == x)
        return x;
    return parent[x] = find(parent[x]);
}

int main() {
    int n = 4, m = 5;

    Edge e[] = {
        {0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };

    sort(e, e + m, compare);

    for (int i = 0; i < n; i++)
        parent[i] = i;

    int cost = 0, count = 0;

    cout << "Minimum Spanning Tree:\n";

    for (int i = 0; i < m && count < n - 1; i++) {
        int a = find(e[i].u);
        int b = find(e[i].v);

        if (a != b) {
            cout << e[i].u << " - " << e[i].v
                 << " : " << e[i].w << endl;

            parent[a] = b;
            cost += e[i].w;
            count++;
        }
    }

    cout << "Minimum Cost = " << cost << endl;

    return 0;
}
