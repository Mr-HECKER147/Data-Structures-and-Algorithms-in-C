
# Queue Implementation in C

A circular queue implementation using a fixed-size array.

## Features

- **Enqueue**: Add elements to the rear of the queue
- **Dequeue**: Remove elements from the front of the queue
- **Display**: View all queue elements
- **Circular implementation**: Efficiently reuses array space

## Configuration

- Maximum queue size: 5 (modify `MAX` constant to change)

## Operations

| Operation | Description |
|-----------|-------------|
| `enqueue(x)` | Add element x to queue |
| `dequeue()` | Remove and return front element |
| `display()` | Print all queue elements |
| `isEmpty()` | Check if queue is empty |
| `isFull()` | Check if queue is full |

## Usage

Compile and run:
```bash
gcc QueueFuncs.c -o queue
./queue
```

Follow the menu to enqueue, dequeue, display, or exit.
