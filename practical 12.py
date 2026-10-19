
from itertools import permutations

# Distance matrix
graph = [
    [0, 10, 15, 20],
    [10, 0, 35, 25],
    [15, 35, 0, 30],
    [20, 25, 30, 0]
]

n = len(graph)
cities = list(range(1, n))

min_cost = float('inf')
best_path = []

# Try all possible routes
for route in permutations(cities):
    path = [0] + list(route) + [0]
    cost = 0

    for i in range(len(path) - 1):
        cost += graph[path[i]][path[i + 1]]

    if cost < min_cost:
        min_cost = cost
        best_path = path

print("Shortest Route:", " -> ".join(map(str, best_path)))
print("Minimum Cost:", min_cost)
