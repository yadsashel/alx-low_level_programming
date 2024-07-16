# 0x1E. C - Search Algorithms

## Overview

This project covers various search algorithms implemented in C. Understanding search algorithms is fundamental for solving many problems in computer science and software engineering efficiently. The project includes examples and implementations of different search algorithms such as linear search and binary search.

## Table of Contents

- [Requirements](#requirements)
- [Project Structure](#project-structure)
- [Algorithms](#algorithms)
  - [Linear Search](#linear-search)
  - [Binary Search](#binary-search)
  - [Jump Search](#jump-search)
- [How to Run](#how-to-run)
- [Contributing](#contributing)
- [License](#license)

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All files will be interpreted/compiled on Ubuntu 20.04 LTS using `gcc`, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- You are allowed to use the standard library

## Project Structure

```plaintext
0x1E-search_algorithms/
├── 0-linear.c
├── 1-binary.c
├── 2-jump.c
├── search_algos.h
├── README.md
└── main.c
```

## Algorithms

### Linear Search

**Time Complexity:** O(n)

**Description:** Linear search is a simple search algorithm that checks every element in the list until the target value is found or the list ends.

**Implementation:**

```c
int linear_search(int *array, size_t size, int value);
```

**Example Usage:**

```c
int array[] = {10, 20, 30, 40, 50};
int result = linear_search(array, 5, 30); // returns index 2
```

### Binary Search

**Time Complexity:** O(log(n))

**Description:** Binary search is an efficient algorithm for finding an item from a sorted list of items by repeatedly dividing the search interval in half.

**Implementation:**

```c
int binary_search(int *array, size_t size, int value);
```

**Example Usage:**

```c
int array[] = {10, 20, 30, 40, 50};
int result = binary_search(array, 5, 30); // returns index 2
```

### Jump Search

**Time Complexity:** O(sqrt(n))

**Description:** Jump search is a search algorithm for ordered lists. It works by jumping ahead by fixed steps and then performing a linear search within the block where the target value might be.

**Implementation:**

```c
int jump_search(int *array, size_t size, int value);
```

**Example Usage:**

```c
int array[] = {10, 20, 30, 40, 50};
int result = jump_search(array, 5, 30); // returns index 2
```

## How to Run

1. Clone the repository:
    ```bash
    git clone https://github.com/YOUR_USERNAME/alx-low_level_programming.git
    cd alx-low_level_programming/0x1E-search_algorithms
    ```

2. Compile the code:
    ```bash
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o search_algos
    ```

3. Run the executable:
    ```bash
    ./search_algos
    ```

## Contributing

1. Fork the repository
2. Create a new branch (`git checkout -b feature-branch`)
3. Commit your changes (`git commit -am 'Add new feature'`)
4. Push to the branch (`git push origin feature-branch`)
5. Create a new Pull Request

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
```
