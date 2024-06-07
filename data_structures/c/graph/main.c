#include <stdio.h>
#include "graph.h"

int main() {
    // Create a graph with 5 vertices
    int V = 5;
    Graph* graph = create_graph(V);

    // Add edges
    add_edge(graph, 0, 1);
    add_edge(graph, 0, 4);
    add_edge(graph, 1, 2);
    add_edge(graph, 1, 3);
    add_edge(graph, 1, 4);
    add_edge(graph, 2, 3);
    add_edge(graph, 3, 4);

    // Print the graph
    print_graph(graph);

    // Perform DFS
    printf("DFS starting from vertex 0:\n");
    DFS(graph, 0);

    printf("\n");

    // Perform BFS
    printf("BFS starting from vertex 0:\n");
    BFS(graph, 0);

    return 0;
}

