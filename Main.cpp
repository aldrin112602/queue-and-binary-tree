#include <iostream>

using namespace std;

int const MAX_SIZE = 100; // Maximum size of the queue

// Binary tree node class
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Binary tree class
class BinaryTree
{
private:
    Node *root;

    // Recursive function to insert a value in the binary tree
    void insert(Node *&node, int value)
    {
        if (node == nullptr)
        {
            node = new Node(value);
        }
        else if (value < node->data)
        {
            insert(node->left, value);
        }
        else if (value > node->data)
        {
            insert(node->right, value);
        }
        // Don't insert if value is already in the tree
    }

    // Recursive function to perform inorder traversal of the binary tree
    void inorder(Node *node)
    {
        if (node != nullptr)
        {
            inorder(node->left);
            cout << node->data << " ";
            inorder(node->right);
        }
    }

    // Recursive function to perform preorder traversal of the binary tree
    void preorder(Node *node)
    {
        if (node != nullptr)
        {
            cout << node->data << " ";
            preorder(node->left);
            preorder(node->right);
        }
    }

    // Recursive function to perform postorder traversal of the binary tree
    void postorder(Node *node)
    {
        if (node != nullptr)
        {
            postorder(node->left);
            postorder(node->right);
            cout << node->data << " ";
        }
    }

public:
    // Constructor
    BinaryTree()
    {
        root = nullptr;
    }

    // Function to insert a value in the binary tree
    void insert(int value)
    {
        insert(root, value);
    }

    // Function to perform inorder traversal of the binary tree
    void inorder()
    {
        inorder(root);
        cout << endl;
    }

    // Function to perform preorder traversal of the binary tree
    void preorder()
    {
        preorder(root);
        cout << endl;
    }

    // Function to perform postorder traversal of the binary tree
    void postorder()
    {
        postorder(root);
        cout << endl;
    }
};

// Queue class
class Queue
{
private:
    int front;          // Index of the front element
    int rear;           // Index of the rear element
    int data[MAX_SIZE]; // Array to store the queue elements

public:
    // Constructor
    Queue()
    {
        front = 0;
        rear = -1;
    }

    // Function to check if the queue is full
    bool isFull()
    {
        return rear == MAX_SIZE - 1;
    }

    // Function to check if the queue is empty
    bool isEmpty()
    {
        return rear < front;
    }

    // Function to enqueue an element
    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "Error: Queue is full!" << endl;
            return;
        }

        data[++rear] = value;
    }

    // Function to dequeue an element
    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Error: Queue is empty!" << endl;
            return -1;
        }

        return data[front++];
    }

    // Function to display the elements of the queue
    void display()
    {
        if (isEmpty())
        {
            cout << "Error: Queue is empty!" << endl;
            return;
        }

        cout << "Queue: ";
        for (int i = front; i <= rear; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    // Function to get the front element of the queue
    int frontElement()
    {
        if (isEmpty())
        {
            cout << "Error: Queue is empty!" << endl;
            return -1;
        }

        return data[front];
    }

    // Function to get the rear element of the queue
    int rearElement()
    {
        if (isEmpty())
        {
            cout << "Error: Queue is empty!" << endl;
            return -1;
        }

        return data[rear];
    }
};

// Main function
int main()
{
    // Create a queue and a binary tree
    Queue q;
    BinaryTree bt;

    // Main menu loop
    while (true)
    {
        // Display main menu
        cout << "Welcome to DS Runner. Please select a number for your desired data structure to run" << endl;
        cout << "1. Queues" << endl;
        cout << "2. Binary Trees" << endl;
        cout << "3. Exit the program" << endl;

        // Get user's choice
        int choice;
        cout << "Enter Number: ";
        cin >> choice;

        // Queue operations
        if (choice == 1)
        {
            // Queue menu loop
            while (true)
            {
                // Display queue menu
                // cout << "Enter the size of Queue: ";
                // cin >> MAX_SIZE;

                cout << "\n\nQueue OPERATIONS USING ARRAY" << endl;
                cout << "--------------------------------------------------------------" << endl;
                cout << "Queue Menu" << endl;
                cout << "1. Enqueue" << endl;
                cout << "2. Dequeue" << endl;
                cout << "3. Display" << endl;
                cout << "4. Check front" << endl;
                cout << "5. Check rear" << endl;
                cout << "6. EXIT" << endl;

                // Get user's choice
                cout << "Enter the Choice: ";
                cin >> choice;

                // Enqueue
                if (choice == 1)
                {
                    int value;
                    cout << "\n\nEnter element to be enqueued: ";
                    cin >> value;
                    q.enqueue(value);
                    cout << "\n\nInserted -> " << value << endl;
                }
                // Dequeue
                else if (choice == 2)
                {
                    cout << "Dequeued value: " << q.dequeue() << endl;
                }
                // Display
                else if (choice == 3)
                {
                    q.display();
                }
                // Front element
                else if (choice == 4)
                {
                    cout << "Front element: " << q.frontElement() << endl;
                }
                // Rear element
                else if (choice == 5)
                {
                    cout << "Rear element: " << q.rearElement() << endl;
                }
                // Return to main menu
                else if (choice == 6)
                {
                    break;
                }
                // Invalid choice
                else
                {
                    cout << "Invalid choice!" << endl;
                }
            }
        }
        // Binary tree operations
        else if (choice == 2)
        {
            // Binary tree menu loop
            while (true)
            {
                // Display binary tree menu
                cout << "BINARY TREE OPTIONS: " << endl;
                cout << "1. Insert element in the tree" << endl;
                cout << "2. Inorder Traversal" << endl;
                cout << "3. Preorder Traversal" << endl;
                cout << "4. Postorder Traversal" << endl;
                cout << "5. Exit" << endl;

                // Get user's choice
                cout << "Enter your choice: ";
                cin >> choice;
                // Insert
                if (choice == 1)
                {
                    int value;
                    cout << "Enter a value to insert: ";
                    cin >> value;
                    bt.insert(value);
                }
                // Inorder traversal
                else if (choice == 2)
                {
                    cout << "Inorder: ";
                    bt.inorder();
                }
                // Preorder traversal
                else if (choice == 3)
                {
                    cout << "Preorder: ";
                    bt.preorder();
                }
                // Postorder traversal
                else if (choice == 4)
                {
                    cout << "Postorder: ";
                    bt.postorder();
                }
                // Return to main menu
                else if (choice == 5)
                {
                    break;
                }
                // Invalid choice
                else
                {
                    cout << "Invalid choice!" << endl;
                }
            }
        }
        // Exit
        else if (choice == 3)
        {
            break;
        }
        // Invalid choice
        else
        {
            cout << "Invalid choice!" << endl;
        }
    }

    cout << "Thank you for using the program!" << endl;

    return 0;
}
