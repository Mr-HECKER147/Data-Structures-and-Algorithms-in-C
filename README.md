# Data Structures and Algorithms in C

A collection of fundamental data structures and algorithms implemented in C. This repository contains practical implementations with user-interactive programs.

## 📁 Contents

### 1. **Array Management** (`Array/`)

A comprehensive program for dynamic array operations including create, insert, delete, and display functionalities.

**Features:**

- Create arrays with user-defined size (max 50 elements)
- Insert elements at specific positions
- Delete elements by position
- Display current array contents

**Key Functions:**

- `write(int n)` - Initialize array with n elements
- `insert(int pos, int val)` - Insert value at position
- `deleteElement(int pos)` - Remove element at position
- `display()` - Print all array elements

**Usage:**

```
1. Run the program
2. Enter desired array size
3. Choose operations from the menu
4. Menu options: Insert, Delete, Display, Exit
```

---

### 2. **Binary Search** (`Binary_Search/`)

Efficient search algorithm for sorted arrays with O(log n) time complexity.

**Features:**

- Searches for elements in sorted arrays
- Returns the index of found elements
- Displays element location if found

**How It Works:**

1. Prompts for array size
2. Accepts sorted array elements (space or newline separated)
3. Requests target element to search
4. Displays the element and its index if found

**Algorithm Complexity:**

- Time Complexity: O(log n)
- Space Complexity: O(1)

**Important:** Requires a **sorted array** for correct results.

---

### 3. **Bubble Sort** (`Bubble_Sort/`)

Classic sorting algorithm that arranges elements in ascending order.

**Features:**

- Sorts unsorted arrays using bubble sort technique
- Displays original and sorted arrays
- Simple and easy-to-understand implementation

**How It Works:**

1. Prompts for array size
2. Accepts array elements (space or newline separated)
3. Displays original array
4. Sorts the array
5. Displays sorted array

**Algorithm Complexity:**

- Time Complexity: O(n²) average and worst case, O(n) best case
- Space Complexity: O(1)

---

## 🚀 Getting Started

### Prerequisites

- GCC compiler (or any C compiler)
- Basic knowledge of C programming

### Compilation and Execution

**For Array Management:**

```bash
gcc Array/ArrayFuncs.c -o array_program
./array_program
```

**For Binary Search:**

```bash
gcc Binary_Search/BinarySearch.c -o binary_search
./binary_search
```

**For Bubble Sort:**

```bash
gcc Bubble_Sort/BubbleSort.c -o bubble_sort
./bubble_sort
```

---

## 📝 Notes

- **Array Management**: Uses a fixed maximum size of 50 elements
- **Binary Search**: Input array must be sorted for correct functionality
- **Bubble Sort**: Works with any unsorted array
- All programs are interactive and prompt for user input
- Array positions are 0-indexed in the code (some outputs display 1-indexed for user clarity)

---

## 🔧 Program Features

| Program       | Input                      | Output                     | Time Complexity    |
| ------------- | -------------------------- | -------------------------- | ------------------ |
| Array Mgmt    | Size, Elements             | Inserted/Deleted arrays    | O(n) insert/delete |
| Binary Search | Size, Sorted Array, Target | Found index or "not found" | O(log n)           |
| Bubble Sort   | Size, Unsorted Array       | Original & Sorted arrays   | O(n²) average      |

---

## 📚 Learning Objectives

This repository demonstrates:

- Basic array operations and manipulation
- Divide-and-conquer algorithms (Binary Search)
- Sorting algorithms and optimization
- User-interactive C programs
- Proper input validation and error handling

---

## 💡 Future Improvements

- Add more sorting algorithms (Quick Sort, Merge Sort, etc.)
- Implement dynamic memory allocation for larger arrays
- Add input validation for all programs
- Include performance benchmarking
- Expand with more data structures (Linked Lists, Stacks, Queues, etc.)

---

## 📄 License

Feel free to use these implementations for learning purposes.

---

**Created:** Data Structures and Algorithms Learning Repository
