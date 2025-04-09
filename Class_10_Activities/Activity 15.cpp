#include <stdio.h>
#include <limits.h>

#define V 4

int min(int a, int b) {
	return(a < b) ? a : b;
}

int tsp(int graph[V][V], int visited[], int currPos, int n, int count, int cost, int minCost) {
	if (count == n && graph[currPos][0]) {
		minCost = min(minCost, cost + graph[currPos][0]);
		return minCost;
	}
	for (int i = 0; i < n; i++) {
		if (visited[i] == 0 && graph[currPos][i]) {
			visited[i] = 1;
			minCost = tsp(graph, visited, i, n, count + 1, cost + graph[currPos][i], minCost);
			visited = 0;
		}
	}
	return minCost;
}

int solveTSP(int graph[V][V], int n) {
	int visited[V];
	for (int i = 0; i < n; i++) {
		visited[i] = 0;
	}
	visited[0] = 1;
	return tsp(graph, visited, 0, n, 1, 0, INT_MAX);
}

int main() {
	int graph[V][V] = {{0, 10, 15, 20},
					   {10, 0, 35, 25},
					   {15, 35, 0, 30},
					   {20, 25, 30, 0}};
					   
	printf("Minimum distace for TSP: %d\n", solveTSP(graph, V));
	
	return 0;
}
