#include <stdio.h>
#include <stdlib.h>

#include "graph.h"

// Function to create a new adjacency list node
AdjListNode *create_Node(int dest) {
    AdjListNode *new_node = malloc(sizeof(AdjListNode));
    new_node->dest = dest;
    new_node->next = NULL;
    return new_node;
}

// Function to create a graph of given vertices
Graph *create_graph(int num_vertices) {
    Graph *new_graph = malloc(sizeof(Graph));
    new_graph->num_vertices = num_vertices;

    // Create an array of adjacency lists
    new_graph->array = calloc(num_vertices, sizeof(AdjList));
    if (new_graph->array == NULL) {
        free(new_graph->array);
        return NULL;
    }
    return new_graph;
}


// Function to add an edge to an undirected graph
void add_edge(Graph *graph, int src, int dest) {
    // Add an edge from src to dest
    AdjListNode *new_node = create_Node(dest);
    new_node->next = graph->array[src].head;
    graph->array[src].head = new_node;

    // Since graph is undirected, add an edge from dest to src also
    new_node = create_Node(src);
    new_node->next = graph->array[dest].head;
    graph->array[dest].head = new_node;
}

// Function to print the graph
void print_graph(Graph *graph) {
    for (int i = 0; i < graph->num_vertices; i++) {
        AdjListNode *crawl = graph->array[i].head;

        printf("src: [%i]", i);
        while (crawl) {
            printf(" -> %i", crawl->dest);
            crawl = crawl->next;
        }

        printf("\n");
    }
}

// Utility function for DFS
void DFS_util(Graph *graph, int node, bool visited[]) {
    visited[node] = true; // mark current node as visited
    printf("%i ", node);
    
    AdjListNode *current_node = graph->array[node].head;
    while (current_node != NULL) {
        int connected_node = current_node->dest;
        if (!visited[connected_node]) {
            DFS_util(graph, connected_node, visited);
        }
        
        current_node = current_node->next;
    }
}

// Function to perform DFS traversal
void DFS(Graph *graph, int start_node) {
    bool *visited = malloc(graph->num_vertices * sizeof(bool));
    // make all nodes false
    for (int i = 0; i < graph->num_vertices; i++) {
        visited[i] = false;
    }
    
    DFS_util(graph, start_node, visited);
    free(visited);
}

// Function to perform BS traversal
void BFS(Graph *graph, int start_node) {
    bool *visited = malloc(graph->num_vertices * sizeof(bool));
    // make all nodes false
    for(int i = 0; i < graph->num_vertices; i++) {
        visited[i] = false;
    }
    
    int *queue = malloc(graph->num_vertices * sizeof(int));
    int front = 0, rear = 0;
    
    visited[start_node] = true;
    queue[rear++] = start_node;

    while (front < rear) {
        int current_node = queue[front++];
        printf("%i ", current_node);
        
        AdjListNode *adj_list = graph->array[current_node].head;
        while (adj_list != NULL) {
            int connected_node = adj_list->dest;
            if(!visited[connected_node]) {
                visited[connected_node] = true;
                queue[rear++] = connected_node;
            }

            adj_list = adj_list->next;
        }
    }

    free(queue);
    free(visited);
}
