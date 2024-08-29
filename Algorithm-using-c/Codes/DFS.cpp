#include <stdio.h>
#include <stdlib.h>


struct GraphNode {
    int destination;
    struct GraphNode* next;
};


struct AdjList {
    struct GraphNode* head;
};


struct GraphNode* createGraphNode(int destination) {
    struct GraphNode* newNode = (struct GraphNode*)malloc(sizeof(struct GraphNode));
    newNode->destination = destination;
    newNode->next = NULL;
    return newNode;
}


void addGraphEdge(struct AdjList adjacencyList[], int start, int end) {

    struct GraphNode* newNode = createGraphNode(end);
    newNode->next = adjacencyList[start].head;
    adjacencyList[start].head = newNode;


    newNode = createGraphNode(start);
    newNode->next = adjacencyList[end].head;
    adjacencyList[end].head = newNode;
}


void performDFS(struct AdjList adjacencyList[], int visited[], int current) {

    visited[current] = 1;


    printf("%d ", current);


    struct GraphNode* iterator = adjacencyList[current].head;
    while (iterator != NULL) {
        int neighbor = iterator->destination;
        if (!visited[neighbor]) {
            performDFS(adjacencyList, visited, neighbor);
        }
        iterator = iterator->next;
    }
}

void depthFirstSearch(struct AdjList adjacencyList[], int totalVertices, int startVertex) {

    int visited[totalVertices];
    for (int i = 0; i < totalVertices; i++) {
        visited[i] = 0;
    }

    performDFS(adjacencyList, visited, startVertex);
}

int main() {
    int totalVertices = 5;


    struct AdjList adjacencyList[totalVertices];


    for (int i = 0; i < totalVertices; i++) {
        adjacencyList[i].head = NULL;
    }
    
    int edgeCount = 5;
  
    int edgeList[][2] = {{1, 2}, {1, 0}, {2, 0}, {2, 3}, {2, 4}};


    for (int i = 0; i < edgeCount; i++) {
        addGraphEdge(adjacencyList, edgeList[i][0], edgeList[i][1]);
    }

    int startVertex = 1; 
    printf("DFS traversal starting from vertex: %d\n", startVertex);
    depthFirstSearch(adjacencyList, totalVertices, startVertex);

    return 0;
}
