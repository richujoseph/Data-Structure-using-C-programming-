
# Data Structures in C

This repository contains implementations of various data structures and algorithms in C. The focus is on fundamental concepts that are essential for understanding data organization and manipulation.

## Table of Contents

- [Linear Search](#linear-search)
- [Binary Search](#binary-search)
- [Circular Queue](#circular-queue)
- [Queue](#queue)
- [Stack using Array](#stack-using-array)
- [Polynomial Addition](#polynomial-addition)
- [Infix to Postfix Conversion](#infix-to-postfix-conversion)
- [Linked List](#linked-list)
- [Polynomial Addition using Linked List](#polynomial-addition-using-linked-list)
- [Sparse Matrix](#sparse-matrix)
- [Binarytree](#binary-tree)
- [Sorting Algorithms](#sorting-algorithms)
  - [Quick Sort](#quick-sort)
  - [Insertion Sort](#insertion-sort)
  - [Selection Sort](#selection-sort)
  - [Merge Sort](#merge-sort)

## Linear Search

### Description
Linear search is a simple algorithm that checks every element in a list until the desired element is found or the list ends.

### Implementation
- File: `linear_search.c`

## Binary Search

### Description
Binary search is a more efficient algorithm that finds the position of a target value within a sorted array by repeatedly dividing the search interval in half.

### Implementation
- File: `binary_search.c`

## Circular Queue

### Description
A circular queue is a linear data structure that follows the FIFO (First In First Out) principle, but the last position is connected back to the first position to make a circle.

### Implementation
- File: `circular_queue.c`

## Queue

### Description
A queue is a linear data structure that follows the FIFO principle, where elements are added from the rear and removed from the front.

### Implementation
- File: `queue.c`
## Stack using Array

### Description
A stack is a linear data structure that follows the LIFO (Last In First Out) principle, where elements are added and removed from the top.

### Implementation
- File: `stack_array.c`

## Polynomial Addition

### Description
This algorithm adds two polynomials represented as arrays.

### Implementation
- File: `polynomial_addition.c`
## Infix to Postfix Conversion

### Description
This algorithm converts infix expressions (like `A + B`) to postfix expressions (like `AB+`) using a stack.

### Implementation
- File: `infix_to_postfix.c`

## Linked List

### Description
A linked list is a linear data structure where elements are stored in nodes, and each node points to the next node in the sequence.

### Implementation
- File: `linked_list.c`

## Polynomial Addition using Linked List

### Description
This algorithm adds two polynomials represented as linked lists.

### Implementation
- File: `polynomial_addition_linked_list.c`

## Sparse Matrix

### Description
A sparse matrix is a matrix in which most of the elements are zero. Efficient storage methods are used to save space.

### Implementation
- File: `sparse_matrix.c`
  
## Binary Tree

### Description
A binary tree is a hierarchical data structure in which each node has at most two children, referred to as the left child and the right child. This data structure is widely used in various applications, including searching, sorting, and hierarchical data representation.

### Implementation
The binary tree is implemented in C. The program allows users to create a binary tree interactively and perform various tree traversals (preorder, inorder, and postorder).

- File: `binary_tree.c`


  ## Sorting Algorithms

### Description
Sorting algorithms are methods for arranging the elements of a list or array in a specific order. Below are some common sorting algorithms:

#### Quick Sort
- **Description**: Quick sort is a divide-and-conquer algorithm that selects a 'pivot' element and partitions the array into two sub-arrays.
- **Implementation**: 
  - File: `quick_sort.c`

#### Insertion Sort
- **Description**: Insertion sort builds a sorted array one element at a time by repeatedly taking an element from the unsorted portion and inserting it into the correct position.
- **Implementation**: 
  - File: `insertion_sort.c`

#### Selection Sort
- **Description**: Selection sort divides the input list into two parts: a sorted and an unsorted part, and repeatedly selects the smallest (or largest) element from the unsorted part and moves it to the sorted part.
- **Implementation**: 
  - File: `selection_sort.c`

#### Merge Sort
- **Description**: Merge sort is a divide-and-conquer algorithm that divides the array into two halves, recursively sorts each half, and then merges the two sorted halves back together. It is efficient for large datasets and has a time complexity of O(n log n).
- **Implementation**: 
  - File: `merge_sort.c`

## Getting Started

To compile and run the code:

 # Clone the repository:
  ```bash
   git clone https://github.com/richujoseph/repository-name.git
# Compile the program
gcc -o program_name source_file.c

# Run the executable
./program_name
