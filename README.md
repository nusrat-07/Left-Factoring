# Left Factoring in Compiler Design

## Overview
This project implements the **Left Factoring** algorithm in C++. Left Factoring is a grammar transformation technique used in Compiler Design to convert a non-deterministic grammar into a deterministic grammar by removing common prefixes from productions.

## Objective
- Understand the concept of Left Factoring.
- Identify common prefixes in grammar productions.
- Convert non-deterministic grammar into deterministic grammar.
- Implement the Left Factoring algorithm using C++.

## Features
- Takes grammar production as user input.
- Detects the common prefix.
- Generates the left-factored grammar.
- Displays the transformed grammar.

## Technologies Used
- C++
- Visual Studio Code
- Git & GitHub

## Sample Input
```
Enter Production : A->abcd|abef
```

## Sample Output
```
A->abX
X->cd|ef
```

## Algorithm
1. Read the grammar production from the user.
2. Split the production into two parts using `|`.
3. Compare both productions character by character.
4. Find the common prefix.
5. Create a new non-terminal (`X`).
6. Move the remaining parts to the new production.
7. Display the left-factored grammar.

## Project Structure
```
Left-Factoring/
│── main.cpp
│── README.md
```

## How to Run

Compile:
```bash
g++ main.cpp -o leftfactoring
```

Run:
```bash
./leftfactoring
```

## Author
**Nusrat Jahan**

Department of Computer Science and Engineering (CSE)

Bangladesh University of Business and Technology (BUBT)

## License
This project is created for educational purposes.
