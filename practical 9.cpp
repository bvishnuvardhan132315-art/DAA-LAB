#include <iostream>
using namespace std;

int main()
{
    int n = 7;

    int graph[7][7] = {
        { 0, 3, 0, 0, 0, 0, 0},
        { 3, 0, 1, 3, 1, 0, 4},
        { 0, 1, 0, 4, 0, 0, 0},
        { 0, 3, 4, 0, 2, 9, 0},
        { 0, 1, 0, 2, 0, 0, 0},
        { 0, 0, 0, 9, 0, 0, 7},
        { 0, 4, 0, 0, 0, 7, 0},
    };

    int visited[7] = {0};
    int total = 0;

    visited[0] = 1;

    cout << "MST Path:\n";

    for (int edge = 0; edge < n - 1; edge++)
    {
        int min = 9999;
        int x = -1, y = -1;

        for (int i = 0; i < n; i++)
        {
            if (visited[i])
            {
                for (int j = 0; j < n; j++)
                {
                    if (!visited[j] && graph[i][j] != 0 &&
                        graph[i][j] < min)
                    {
                        min = graph[i][j];
                        x = i;
                        y = j;
                    }
                }
            }
        }

        cout << x << " -> " << y
             << "  Weight = " << min << endl;

        total = total + min;
        visited[y] = 1;
    }

    cout << "\nTotal Weight = " << total << endl;

    return 0;
}

