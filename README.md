# FOCP-I C Programming Workspace

A personal workspace for Fundamentals of Computer Programming-I (FOCP-I), with C exercises organized by assignment and topic.

> This repository was prepared for my own coursework practice using a public reference repository. The original source and assignment structure are credited below. I am responsible for reviewing, testing, and understanding the code I submit.

## Topics

- C fundamentals, variables, data types, and input/output
- Arithmetic and expressions
- Conditional statements and `switch`
- Loops and basic number problems
- Problem solving, compiling, debugging, and testing

## Repository structure

```text
.
├── Assignment-1/       # Introductory calculations and input/output
├── Assignment-2/       # Conditions, validation, and calculator
├── Assignment-3/       # Additional practice solutions
├── loops_assignment/   # Loop-based exercises
├── README.md
└── .gitignore
```

## Requirements

- GCC (for example, MinGW-w64 on Windows)
- Visual Studio Code or another text editor
- Git (optional, for version control)

## Compile and run

Open a terminal in the folder containing a source file. For example:

```bash
gcc Assignment-1/Average.c -o average
```

On Windows, run:

```powershell
.verage.exe
```

On macOS/Linux, run:

```bash
./average
```

Compile one `.c` file at a time because each exercise usually has its own `main()` function.

## Changes made in this version

The following issues were corrected in the working copy:

- `Assignment-1/Average.c`: uses floating-point division so fractional averages are preserved; validates input.
- `Assignment-1/Division.c`: checks input and rejects a zero divisor before calculating quotient/remainder.
- `Assignment-2/Triangle_validator.c`: correctly checks for an angle equal to 90 degrees when classifying a right triangle.
- `Assignment-2/switch_calculator.c`: handles unknown operators, division/modulo by zero, and non-integer operands for modulo without printing an uninitialized result.
- `loops_assignment/prime_number_check.c`: correctly tests square factors, including perfect squares such as 4 and 9.

These are targeted fixes, not a guarantee that every program has been exhaustively tested. Review and test each exercise against your course requirements.



This working copy is intended for learning and coursework adaptation. Keep attribution where appropriate, follow your institution's academic-integrity rules, and make sure you can explain the code you submit.

## Learning workflow

1. Understand the problem statement.
2. Write or review the solution.
3. Compile with warnings enabled.
4. Test normal, boundary, and invalid inputs.
5. Record what you learned and commit your changes.

---

**Learn • Code • Debug • Improve**
