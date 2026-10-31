Campus Navigation System Using Graphs

Project Description

The Campus Navigation System is a C++ project that helps users find the shortest path between different locations on a college campus.

It uses a Graph data structure and Dijkstra's Algorithm to calculate the shortest distance between two locations.

Objectives

- To understand the concept of Graphs.
- To find the shortest path between two locations.
- To calculate the minimum distance between campus locations.
- To implement Dijkstra's Algorithm using C++.

Technologies Used

- Programming Language: C++
- Data Structure: Graph
- Algorithm: Dijkstra's Algorithm
- Compiler: VS Code / C++ Compiler

Campus Locations

The project includes five campus locations:

Number| Location
0| Gate
1| College
2| Library
3| Lab
4| Canteen

Features

1. Display all campus locations.
2. Select starting and destination locations.
3. Find the shortest path between two locations.
4. Display the shortest distance in metres.
5. Check invalid location numbers.
6. Exit the program.

Working of the Project

1. The campus locations are represented as vertices of a graph.
2. The distances between locations are represented using an adjacency matrix.
3. The user selects the starting and destination locations.
4. Dijkstra's Algorithm calculates the shortest path.
5. The program displays the shortest route and total distance.

How to Run the Project

1. Download or clone this repository.

2. Open the project folder in VS Code.

3. Open the C++ source code file.

4. Compile the program using:
   
   "g++ main.cpp -o campus"

5. Run the program:
   
   "./campus"

Sample Output

Input:

- Starting Location: Gate (0)
- Destination Location: Canteen (4)

Output:

Shortest Path: Gate -> College -> Library -> Canteen

Distance: 330 metres

Applications

- College campus navigation.
- Finding the shortest route between buildings.
- Understanding graph-based pathfinding.
- Basic route planning systems.

Conclusion

The Campus Navigation System successfully finds the shortest path between different campus locations using Graphs and Dijkstra's Algorithm. This project helps in understanding graph implementation and shortest path finding in C++.

---

Project: Campus Navigation System Using Graphs
Language: C++
Algorithm: Dijkstra's Algorithm