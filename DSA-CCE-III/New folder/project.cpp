#include <iostream>
#include <string>
using namespace std;
#define N 5
#define INF 9999
class Campus {
public:
string places[N] = {
"Gate", "College", "Library",
"Lab", "Canteen"
};
int graph[N][N] = {
{0, 100, INF, INF, INF},
{100, 0, 150, 120, INF},
{INF, 150, 0, INF, 80},
{INF, 120, INF, 0, 180},
{INF, INF, 80, 180, 0}
};
void display() {
cout << "\nCampus Locations:\n";
for (int i = 0; i < N; i++)
cout << i << ". " << places[i] << endl;
}
void shortestPath(int start, int end) {
int dist[N], visited[N] = {0};
int parent[N];
for (int i = 0; i < N; i++) {
dist[i] = INF;
parent[i] = -1;
}
dist[start] = 0;
for (int count = 0; count < N; count++) {
int u = -1;
for (int i = 0; i < N; i++)
if (!visited[i] &&
(u == -1 || dist[i] < dist[u]))
u = i;
if (u == -1 || dist[u] == INF)
break;
visited[u] = 1;
for (int v = 0; v < N; v++) {
if (graph[u][v] != INF &&
graph[u][v] > 0 &&
dist[u] + graph[u][v] < dist[v]) {
dist[v] = dist[u] + graph[u][v];
parent[v] = u;
}
}
}
if (dist[end] == INF) {
cout << "No route found.\n";
return;
}
int path[N], count = 0;
for (int v = end; v != -1; v = parent[v])
path[count++] = v;
cout << "\nShortest Path: ";
for (int i = count - 1; i >= 0; i--) {
cout << places[path[i]];
if (i > 0) cout << " -> ";
}
cout << "\nDistance: " << dist[end] << " metres\n";
}
};
int main() {
Campus c;
int choice, start, end;
do {
cout << "\n--- CAMPUS NAVIGATION ---\n";
cout << "1. Display Locations\n";
cout << "2. Find Shortest Path\n";
cout << "0. Exit\n";
cout << "Enter choice: ";
cin >> choice;
switch (choice) {
case 1:
c.display();
break;
case 2:
c.display();
cout << "Enter starting location number: ";
cin >> start;
cout << "Enter destination number: ";
cin >> end;
if (start >= 0 && start < N &&
end >= 0 && end < N)
c.shortestPath(start, end);
else
cout << "Invalid location number.\n";
break;
case 0:
cout << "Thank you!\n";
break;
default:
cout << "Invalid choice.\n";
}
} while (choice != 0);
return 0;
}
