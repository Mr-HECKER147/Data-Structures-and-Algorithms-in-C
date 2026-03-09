# Circular Queue in C++

A simple menu-driven **circular** queue implementation in C++ using a fixed-size array. [file:1]

## Features

- Fixed-size circular queue with capacity `SIZE = 5`. [file:1]  
- Operations: enqueue, dequeue, display, check full/empty. [file:1]  
- Uses global `items[]`, `front`, and `rear` indices to manage the queue. [file:1]  
- Text-based menu in `main()` for interactive console usage. [file:1]  

## File Structure

- `queue.cpp` — circular queue implementation and menu-driven `main()` function. [file:1]

## Core Functions

- `bool isFull()`  
  Returns `true` when the queue has no free slots based on circular index logic. [file:1]

- `bool isEmpty()`  
  Returns `true` when `front == -1`, meaning the queue has no elements. [file:1]

- `void enQueue(int element)`  
  Inserts an element at `rear` if the queue is not full, then updates `rear` circularly. [file:1]

- `int deQueue()`  
  Removes and returns the element at `front`, updating `front` circularly or resetting both indices when the last element is removed. [file:1]

- `void display()`  
  Prints the `front` and `rear` indices and all current elements from `front` to `rear` in logical order. [file:1]

## Build and Run

```bash
g++ queue.cpp -o queue
./queue
```