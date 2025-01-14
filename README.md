# Hack Recursive Function Stack Overflow

This repository demonstrates a common error in recursive functions written in Hack: stack overflow errors. The `bug.hh` file contains a recursive factorial function that lacks proper handling for negative inputs, leading to infinite recursion and a stack overflow.

The solution, provided in `bugSolution.hh`, adds input validation to prevent the stack overflow.  The solution checks for negative input, throwing an exception for improper use.