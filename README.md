# Truth Table Evaluator

This project evaluates truth table entries for a given boolean expression using C++. The program allows users to input values for variables and computes results based on predefined boolean expressions.

## Description

This program includes functions to solve specific boolean expressions:

- `Solve1`: Evaluates the expression `!(A || B)`
- `Solve2`: Evaluates the expression `!A && !B`
- `Solve3`: Evaluates the expression `(A || B) && !C`
- `Solve4`: Evaluates the expression `!(A || (!B && C))`

The program displays a truth table based on these expressions and allows users to input variable values (`A`, `B`, `C`) to see the results. The truth table is updated and displayed after each computation.

## Features

- Evaluate boolean expressions with up to three variables.
- Display truth table for expressions using AND (`*`), OR (`+`), and NOT/NEGATION (`~`) operators.
- Supports expressions with up to 5 literals and evaluates based on priority.

## How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/Mozeb-Ahmed-Khan/Truth-Table-Creation.git

2. Navigate to the project directory:
   ```bash
   cd Truth-Table-Creation
   
3. Compile the C++ program:
   ```bash
   g++ src/Source.cpp -o truth_table_evaluator

4. Run the executable:
   ```bash
   ./truth_table_evaluator

5. Follow the on-screen instructions to input values for variables A, B, and C. The program will display the truth table and results for the expressions.

   
