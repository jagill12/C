#include <stdio.h>
#include <stdbool.h>

#define MAX_VERTICES 100

bool visited[MAX_VERTICES];
int graph[MAX_VERTICES][MAX_VERTICES];
int path[MAX_VERTICES];
int pathLength = 0;

bool dfs(int src, int dest, int vertices) {
	visited[src] = true;
	path[pathLength++] = src;
	
	if (src == dest)
		return true;
		
	for (int i = 0; i < vertices; i++) {
		if (graph[src][i] && !visited[i]) {
			if (dfs(i, dest, vertices))
				return true;
		}
	}
	
	pathLength--;
	visited[src] = false;
	return false;
}

void initializeVisited(int vertices) {
	for (int i = 0; i < vertices; i++)
		visited[i] = false;
}

int main() {
	int vertices, edges;
	printf("Enter the number of vertices and edges: ");
	scanf("%d %d", &vertices, &edges);
	
	for (int i = 0; i < vertices; i++) {
		for (int j = 0; j < vertices; j++) {
			graph[i][j] = 0;
		}
	}
	
	printf("Enter the edges (format: vertex1 vertex2):\n");
	for (int i = 0; i < edges; i++) {
		int u, v;
		scanf("%d %d", &u, &v);
		graph[u][v] = graph[v][u] = 1;
	}
	
	int src, dest;
	printf("Enter source and destination vertices: ");
	scanf("%d %d", &src, &dest);
	
	initializeVisited(vertices);
	pathLength = 0;
	
	if (dfs(src, dest, vertices)) {
		printf("Path found: ");
		for (int i = 0; i < pathLength; i++) {
			printf("%d ", path[i]);
		}
		printf("\n");
	} else {
		printf("Path not found.\n");
	}
	return 0;
}
