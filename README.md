## Linked-Lists-Related-Functions-Library


#### About 
This is a small library that contains 6 linked lists related functions I implemented in order to practice Data Structures. 

Programming language used: <p align="left"> <a href="https://www.cprogramming.com/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg" alt="c" width="40" height="40"/> </a> </p>

#### How to use?
Import this library, and then include it to your program file using: `#include "linkedlist.h"`

#### Implemented functions
 
| Function | How it works |
| ----------- | ----------- |
| createNode() | Takes an integer as argument which is representing the value of the node, creates a   new node and returns its memory adress. |
| printNodeValue() | Takes a pointer to the head of the linkedlist and prints all nodes values. | 
| createNodeFirst() | Takes both the head of the linked list as pointer and the new node value, then creates a new node at the beginning of the list and returns its memory adress ( to be assigned manually to the head pointer ).|
| create_at_end() | Takes both the head of the linked list as pointer and the new node value and creates a new node at the end of the list without returning anything.|
| get_last_node() | Takes a pointer to the head of the list and returns the memory adress of the last node. |
| create_array() | Takes a pointer to the head of the list, converts the nodes values to an array ( dynamically allocated memory ). |


