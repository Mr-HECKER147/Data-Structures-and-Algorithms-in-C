# Array Management Program

## Overview
This C program implements a simple dynamic array management system that allows users to create, insert, delete, and display elements in an array.

## Features
- **Create Array**: Initialize an array with user-defined size (max 50 elements)
- **Insert Element**: Add a new element at a specified position
- **Delete Element**: Remove an element from a specified position
- **Display Array**: View all current elements in the array

## Functions

### `void write(int n)`
Populates the array with initial elements from user input.
- **Parameter**: `n` - Number of elements to read
- **Validation**: Checks if size exceeds MAX_SIZE (50)

### `void insert(int pos, int val)`
Inserts a value at a specified position, shifting elements to the right.
- **Parameters**: 
    - `pos` - Position to insert (0-indexed)
    - `val` - Value to insert
- **Validation**: Ensures position is within valid range [0, n]

### `void deleteElement(int pos)`
Removes an element at a specified position, shifting elements to the left.
- **Parameter**: `pos` - Position to delete (0-indexed)
- **Validation**: Ensures position is within valid range [0, n-1]

### `void display()`
Outputs all array elements with the current array size.

### `int main()`
Main program loop with menu-driven interface for user interaction.

## Global Variables
- `int arr[MAX_SIZE]` - Array storage (max 50 elements)
- `int n` - Current number of elements in array

## Usage
1. Run the program
2. Enter desired array size
3. Enter array elements
4. Choose operations from the menu (Insert, Delete, Display, Exit)

## Constraints
- Maximum array size: 50 elements
- Array positions are 0-indexed