#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 100

struct Vertex {
    int value;
    struct Vertex* next;
};

struct Vertex* createVertex(int value) {
    struct Vertex* newVertex = 
      (struct Vertex*)malloc(sizeof(struct Vertex));
    newVertex->value = value;
    newVertex->next = NULL;
    return newVertex;
}

void connectNodes(struct Vertex* graph[], int src, int dest) {
    struct Vertex* newVertex = createVertex(dest);
    newVertex->next = graph[src];
    graph[src] = newVertex;
  
   
    newVertex = createVertex(src);
    newVertex->next = graph[dest];
    graph[dest] = newVertex;
}

void performBFS(struct Vertex* graph[], int totalVertices, 
                int startVertex, int visited[]) {

    int queue[MAX_NODES];
    int front = 0, rear = 0;


    visited[startVertex] = 1;
    queue[rear++] = startVertex;

   
    while (front != rear) {
      
        int currentVertex = queue[front++];
        printf("%d ", currentVertex);


        struct Vertex* temp = graph[currentVertex];
        while (temp != NULL) {
            int adjacentVertex = temp->value;
            if (!visited[adjacentVertex]) {
                visited[adjacentVertex] = 1;
                queue[rear++] = adjacentVertex;
            }
            temp = temp->next;
        }
    }
}

int main() {

    int totalVertices = 5;

    struct Vertex* graph[totalVertices];
    for (int i = 0; i < totalVertices; ++i)
        graph[i] = NULL;

  
    connectNodes(graph, 0, 1);
    connectNodes(graph, 0, 2);
    connectNodes(graph, 1, 3);
    connectNodes(graph, 1, 4);
    connectNodes(graph, 2, 4);

    int visited[totalVertices];
    for (int i = 0; i < totalVertices; ++i)
        visited[i] = 0;

   
    printf("Breadth First Search "
           "starting from vertex 0: ");
    performBFS(graph, totalVertices, 0, visited);

    return 0;
}
