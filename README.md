# Grading System

A simple C++ console application that calculates a student's final grade by averaging two semester grades.

## Features
- Prompts for 1st semester grade
- Prompts for 2nd semester grade
- Computes and displays the final grade using integer average

## Tech Stack
- Language: C++
- Compiler: GCC (Code::Blocks project included)

## Project Structure
- `main.cpp` — program source code
- `Activity 1.cbp` — Code::Blocks project file
- `bin/` and `obj/` — build output directories

## How It Works
1. Enter the 1st semester grade.
2. Enter the 2nd semester grade.
3. The program adds both grades and divides by 2.
4. The final grade is printed to the console.

## Build and Run
Using g++:
```bash
g++ main.cpp -o grading_system
./grading_system
```

Using Code::Blocks:
1. Open `Activity 1.cbp`.
2. Build and run the project.

## Example
```text
Activity 1
Grading System

What is your 1st Semester Grade? 90
What is your 2nd Semester Grade? 95
Final Grade: 92
```
