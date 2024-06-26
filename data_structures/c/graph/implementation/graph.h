// From chatgpt
#ifndef GRAPH_H
#define GRAPH_H

#include <stdbool.h>

// Node structure for adjacency list
typedef struct AdjListNode {
    int dest;
    struct AdjListNode* next;
} AdjListNode;

// Adjacency list structure
typedef struct AdjList {
    struct AdjListNode *head;
} AdjList;

// Graph structure
typedef struct Graph {
    int num_vertices;
    struct AdjList* array;
} Graph;

// Function prototypes
Graph* create_graph(int num_vertices);
void add_edge(Graph* graph, int src, int dest);
void print_graph(Graph* graph);
void DFS(Graph* graph, int start_vertex);
void BFS(Graph* graph, int start_vertex);

#endif
