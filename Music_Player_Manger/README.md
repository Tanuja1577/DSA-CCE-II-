Music Playlist Manager Using Doubly Linked List

DSA CCE-2 Case Study | Academic Year 2026–27

1. Project Information
Project Title: Music Playlist Manager
Subject: Data Structures and Algorithms (DSA)
Course: S.Y. B.Tech – Electronics and Computer Engineering
Semester: III
Institute: Amrutvahini College of Engineering, Sangamner
Programming Language: C++
Data Structure: Doubly Linked List
IDE: Visual Studio Code
Version Control: Git and GitHub
2. Introduction

The Music Playlist Manager is a menu-driven C++ application that manages songs using a Doubly Linked List.

Each node stores the song title, artist name, a pointer to the previous song, and a pointer to the next song.

The application allows users to add and delete songs, display the playlist in forward and reverse order, play the current song, navigate to the next or previous song, play the complete playlist, and repeat all songs.

This project demonstrates the practical use of linked lists and pointer manipulation in a music player application.

3. Objectives
To understand the concept of a Doubly Linked List.
To implement insertion and deletion of nodes.
To perform forward and reverse traversal.
To implement next and previous song navigation.
To manage the currently selected song using a pointer.
To implement complete playlist playback and Repeat All.
To test the program under different conditions.
To understand dynamic memory allocation and pointer manipulation in C++.
To analyze the time complexity of different playlist operations.
4. Features
Add Song: Add a new song to the playlist.
Delete Song: Remove a song from the playlist.
Display Playlist: Display all songs in forward order.
Display in Reverse: Display songs from last to first.
Play Current Song: Display the currently selected song.
Next Song: Move to the next song in the playlist.
Previous Song: Move to the previous song in the playlist.
Play Complete Playlist: Traverse and display all songs sequentially.
Repeat All: Restart the playlist after reaching the last song.
Exit: Terminate the application.
5. Data Structure Used

A Doubly Linked List is a linear data structure in which each node contains data and two pointers: one pointing to the previous node and another pointing to the next node.

Node Structure

Each song node contains the following fields:

songTitle: Stores the title of the song.
artistName: Stores the artist's name.
prev: Points to the previous song.
next: Points to the next song.
Node Representation
text
NULL <-> [Song 1] <-> [Song 2] <-> [Song 3] <-> NULL


The first node is called the head, and the last node is called the tail. The prev and next pointers allow traversal in both directions.

A separate current-song pointer is used to track the song selected for playback.

6. Working of the Project
The program displays a menu of available operations.
The user selects an operation by entering the corresponding menu option.
When a song is added, a new node is created and linked to the playlist.
When a song is deleted, the corresponding node is removed and the links are updated.
Forward traversal displays songs from the first node to the last node.
Reverse traversal displays songs from the last node to the first node.
The current-song pointer is updated when the user selects the next or previous song.
Complete playlist playback processes all songs sequentially.
Repeat All restarts the playlist after the last song is reached.
The program continues until the user selects the exit option.
7. Algorithms
Add Song
Create a new node containing the song title and artist name.
If the playlist is empty, make the new node the head and tail.
Otherwise, link the new node after the current tail.
Update the tail pointer.
Initialize or update the current-song pointer when required.
Delete Song
Search for the song to be deleted.
If the song is not found, display an appropriate message.
Otherwise, update the previous and next nodes to bypass the target node.
Update the head or tail if the target node is at either end.
Update the current-song pointer if the deleted node was selected.
Release the memory allocated to the deleted node.
Next Song
Check whether the playlist is empty.
If a next node exists, move the current-song pointer to that node.
If the current song is the last song, either display an end-of-playlist message or restart from the first song when Repeat All is enabled.
Previous Song
Check whether the playlist is empty.
If a previous node exists, move the current-song pointer to that node.
Otherwise, display a message indicating that the current song is the first song.
Repeat All
Start from the first song.
Process each song in sequence.
When the last song is reached, return to the first song.
Continue repeating until the operation is stopped or the program exits, depending on the implementation.
8. Time Complexity Analysis

Let n represent the number of songs in the playlist.

Operation	Time Complexity
Add song at the end using a tail pointer	O(1)
Search for a song	O(n)
Delete a song by title	O(n)
Delete a known node	O(1)
Display playlist in forward order	O(n)
Display playlist in reverse order	O(n)
Move to the next song	O(1)
Move to the previous song	O(1)
Play the complete playlist	O(n)
9. Advantages
Supports forward and backward navigation.
Allows dynamic insertion and deletion of songs.
Does not require a fixed-size playlist.
Provides efficient navigation between adjacent songs.
Demonstrates the practical application of pointers and linked lists.
Supports playlist management without shifting elements as in an array.
10. Limitations
Requires additional memory for two pointers per node.
Searching and deleting a song by title require linear traversal.
Incorrect pointer updates may cause runtime errors.
Dynamic memory must be managed carefully to avoid memory leaks.
Actual audio playback requires additional audio libraries or system integration if not implemented separately.
11. Testing

The following test cases can be used to verify the application:

Test Case	Expected Result
Display an empty playlist	Display an appropriate empty-playlist message
Add the first song	Song is added successfully
Add multiple songs	Songs appear in the correct order
Display in forward order	Songs are displayed from first to last
Display in reverse order	Songs are displayed from last to first
Move to the next song	Current song advances when possible
Move to the previous song	Current song moves backward when possible
Delete the first song	Head pointer is updated correctly
Delete the last song	Tail pointer is updated correctly
Delete a song that does not exist	Appropriate error message is displayed
Delete the current song	Current-song pointer remains valid
Enable Repeat All	Playlist restarts after the last song
Exit the program	Application terminates properly
12. Future Enhancements
Integrate actual audio playback.
Add shuffle and repeat-one modes.
Store playlists in files for permanent storage.
Add song duration, album, and genre information.
Implement a graphical user interface.
Add sorting and filtering by title or artist.
Support multiple playlists.
Improve input validation and error handling.
13. Learning Outcomes

Through this project, the following concepts are demonstrated:

Implementation of a Doubly Linked List in C++.
Dynamic memory allocation and deallocation.
Pointer manipulation and node linking.
Insertion, deletion, and traversal operations.
Management of application state using pointers.
Implementation and testing of menu-driven applications.
Analysis of time complexity for common data structure operations.
14. Compilation and Execution
Prerequisites
A C++ compiler such as GCC.
Visual Studio Code.
The C/C++ extension for Visual Studio Code.
Compile the Program
bash
g++ main.cpp -o playlist

Run the Program

On Linux or macOS:

bash
./playlist


On Windows:

bash
playlist.exe


Ensure that the source filename matches the filename used in the compilation command.

15. Conclusion

The Music Playlist Manager demonstrates how a Doubly Linked List can be used to manage a music playlist efficiently. It implements fundamental operations such as insertion, deletion, traversal, and bidirectional navigation.

The project provides practical experience with C++ pointers, dynamic memory management, and data structure implementation. It also demonstrates how fundamental DSA concepts can be applied to a real-world playlist management system.

