# queue-and-binary-tree

## Course Project
### Objective/s:
At the end of this activity, you should be able to:
•	Traverse the data using a linear and nonlinear data structure using C++.
•	Demonstrate application of  a linear and nonlinear data structure 
•	Simulate implementation of a linear and nonlinear data structure. 

What to Prepare for the Activity:
-	Computer or Laptop
- Internet connection 
-	Access to online C++ simulator website 
https://www.onlinegdb.com/online_c++_compiler

Procedure:
-	Open the OnlineGDB  https://www.onlinegdb.com/online_c++_compiler
-	After loading the online simulator, you will find default C++ codes.
-	Erase all the codes of the main.cpp.  The screen need to be blank. See screen shot below.
 



### Create a C++ program to apply the learnings in different data structures.
-	The program should have a main menu that will prompt the user to enter a choice. 

 ```terminal
 Welcome to DS Runner. Please select a number for your desired data structure to run
1. Queues
2. Binary Trees
3. Exit the program
Enter Number: 
 ```

-	If the user enter number 1, the program will ask the user to enter the following options to run.
```terminal
Queue Menu
1. Enqueue
2. Dequeue
3. Display
4. Check front
5. Check rear
6. EXIT
Enter the Choice: 1

 ```

- If the user enter number 1, the program will ask the user to enter a number to be enqueued. Also the program should return to the menu of options of the queue data structure.
```terminal
Enter element to be enqueued: 10
Inserted -> 10


Queue OPERATIONS USING ARRAY
--------------------------------------------------------------
Queue Menu
1. Enqueue
2. Dequeue
3. Display
4. Check front
5. Check rear
6. EXIT
Enter the Choice: 
```

 

- If the user enter number 2, the program will display the dequeued element. Also the program should return to the menu of options of the queue data structure.
```terminal
Enter the Choice: 2
Dequeued value: 10


Queue OPERATIONS USING ARRAY
--------------------------------------------------------------
Queue Menu
1. Enqueue
2. Dequeue
3. Display
4. Check front
5. Check rear
6. EXIT
Enter the Choice: 
```

 


-	If the user enter number 3, the program will display the data elements in the queue. Also the program should return to the menu of options of the queue data structure.
```terminal
Enter the Choice: 3
Error: Queue is empty!


Queue OPERATIONS USING ARRAY
--------------------------------------------------------------
Queue Menu
1. Enqueue
2. Dequeue
3. Display
4. Check front
5. Check rear
6. EXIT
Enter the Choice: 
```
-	If the user enter number 4, the program will display the data element(s) in front of the queue. Also the program should return to the menu of options of the queue data structure.
```terminal
Enter the Choice: 4
Front element: Error: Queue is empty!
-1


Queue OPERATIONS USING ARRAY
--------------------------------------------------------------
Queue Menu
1. Enqueue
2. Dequeue
3. Display
4. Check front
5. Check rear
6. EXIT
Enter the Choice: 
```

-	If the user enter number 5, the program will display the data element(s) at the rear of the queue. Also the program should return to the menu of options of the queue data structure.
```terminal
Enter the Choice: 5
Rear element: Error: Queue is empty!
-1


Queue OPERATIONS USING ARRAY
--------------------------------------------------------------
Queue Menu
1. Enqueue
2. Dequeue
3. Display
4. Check front
5. Check rear
6. EXIT
Enter the Choice: 
```
-	If the user enter number 6, the program will exit the options in the queue data structure and return to the main menu of options of data structure
```terminal
Enter the Choice: 6
Welcome to DS Runner. Please select a number for your desired data structure to run
1. Queues
2. Binary Trees
3. Exit the program
Enter Number: 
```
-	At the main menu, if the user enter number 2 the program will ask the user to 
```terminal
Enter Number: 2
BINARY TREE OPTIONS: 
1. Insert element in the tree
2. Inorder Traversal
3. Preorder Traversal
4. Postorder Traversal
5. Exit
Enter your choice: 
```

-	If the user enter number 1, the program will ask the user to enter an element to be inserted in the binary tree. Also after insertion, the program should return to the menu of options of the binary tree.
```terminal
Enter your choice: 1
Enter a value to insert: 100
BINARY TREE OPTIONS: 
1. Insert element in the tree
2. Inorder Traversal
3. Preorder Traversal
4. Postorder Traversal
5. Exit
Enter your choice: 
```

-	If the user enter number 2, the program will display the inorder traversal of the binary tree.  Also after the display, the program should return to the menu of options of the binary tree.
```terminal
Enter your choice: 2
Inorder: 100 
BINARY TREE OPTIONS: 
1. Insert element in the tree
2. Inorder Traversal
3. Preorder Traversal
4. Postorder Traversal
5. Exit
Enter your choice: 
```
-	If the user enter number 3, the program will display the preorder traversal of the binary tree.  Also after the display, the program should return to the menu of options of the binary tree.
```terminal
Enter your choice: 3
Preorder: 100 
BINARY TREE OPTIONS: 
1. Insert element in the tree
2. Inorder Traversal
3. Preorder Traversal
4. Postorder Traversal
5. Exit
Enter your choice: 
```

-	If the user enter number 4, the program will display the postorder traversal of the binary tree.  Also after the display, the program should return to the menu of options of the binary tree.
```terminal
Enter your choice: 4
Postorder: 100 
BINARY TREE OPTIONS: 
1. Insert element in the tree
2. Inorder Traversal
3. Preorder Traversal
4. Postorder Traversal
5. Exit
Enter your choice: 
```

-	If the user enter number 5, the program will exit the binary tree menu of options and return to the main menu of options of the data structure.
```terminal
Enter your choice: 5
Welcome to DS Runner. Please select a number for your desired data structure to run
1. Queues
2. Binary Trees
3. Exit the program
Enter Number: 
```

-	In the main menu of options, if the user enter number 3 the program will exit and display a thank you message.
```terminal
Enter Number: 3
Thank you for using the program!

```
