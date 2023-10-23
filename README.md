# Linked_List
A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations.
In simple words, a linked list consists of nodes where each node contains a data field and a reference(link) to the next node in the list.
You have to start somewhere, so we give the address of the first node a special name called HEAD. 
Also, the last node in the linked list can be identified because its next portion points to NULL.
Linked lists can be of multiple types: singly, doubly, and circular linked list. In this article, we will focus on the singly linked list. 

# Representation of Linked List:
> A data item
> An address of another node
struct node
{
  int data;
  struct node *next;
};

# Experiment_1:
* Aim: Creation of linked list
* Theory: 
> A data item
> An address of another node

* Algorithm:
  Step 1: Start
  Step 2: Initialize a node
  Step 3: Assign its values
  Step 4: Display the list
  Step 5: Stop

* OUTPUT:
  1 0

# Experiment_2:
* Aim: Inserting new values at the beginning
* Theory: 
> Allocate memory for new node
> Store data
> Change next of new node to point to head
> Change head to point to recently created node

* Algorithm:
  Step 1: Start
  Step 2: Initialize a node
  Step 3: Assign its values
  Step 4: Change next of new node to point to head
  Step 5: Change head to point to recently created node
  Step 6: Display the list
  Step 7: Stop

* OUTPUT:
3->NULL
2->3->NULL
1->2->3->NULL

# Experiment_3:
* Aim: Basic operations like searching node, deleting nodes etc in linked list
* Theory: 

1. Delete from beginning
--> Point head to the second node

2. Delete from end
--> Traverse to second last element
--> Change its next pointer to null

3. Search an Element on a Linked List
--> Make head as the current node.
--> Run a loop until the current node is NULL because the last element points to NULL.
--> In each iteration, check if the key of the node is equal to item. If it the key matches the item, return true otherwise return false.

4. Sort Elements of a Linked List
--> Make the head as the current node and create another node index for later use.
--> If head is null, return.
--> Else, run a loop till the last node (i.e. NULL).
--> In each iteration, follow the following step 5-6.
--> Store the next node of current in index.
--> Check if the data of the current node is greater than the next node. If it is greater, swap current and index.

* Algorithm:
  Step 1: Start
  Step 2: Initialize a node
  Step 3: Assign its values
  Step 4: Create different functions for different operations
  Step 5: Display the outputs
  Step 6: Stop

* OUTPUT:
Linked list: 3 2 5 1 4 
After deleting an element: 2 5 1 4 
3 is not found
Sorted List: 1 2 4 5 

# Experiment_4:
* Aim: Create a menu using previous concepts 
* Algorithm: 
  Step 1: Start
  Step 2: Initialize a node
  Step 3: Assign its values
  Step 4: Create different functions for different operations
  Step 5: Display the outputs
  Step 6: Stop

* OUTPUT:
enter data for the first node :2
enter a number from the following options:
1. add data at beggining 
2.add data at end
3.Display
0. Exit
opt:1
enter data: 34
Status : Done

enter a number from the following options:
1. add data at beggining 
2.add data at end
3.Display
0. Exit
opt:3
data  34  self address  0xf666f0  next address  0xf65eb0
data  2  self address  0xf65eb0  next address  0

