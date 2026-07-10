# Stack-Based RPN Calculator

A lightweight, interactive command-line **Reverse Polish Notation (RPN)** calculator implemented in C++. This project utilizes standard template library (STL) containers—specifically `std::vector` for expression storage and `std::stack` for token evaluation—to process math expressions step-by-step.

It features interactive command-line inputs, comprehensive input validation, and safe division checks, making it a great learning project for understanding stack-based algorithms.

---

## 🚀 Features

*   **Interactive Expression Builder:** Input your operands and operators one-by-one through a simple CLI menu, then evaluate the entire sequence at once.
*   **Reverse Polish Notation (RPN):** Evaluates postfix expressions, eliminating the need for parentheses to define operator precedence.
*   **Robust Error Handling:**
    *   Detects and warns about division-by-zero errors.
    *   Validates operands using strict conversion (`std::stoi`) and catches non-numeric tokens.
    *   Validates operator usage, ensuring there are enough operands on the stack before attempting an operation.
*   **Supported Operators:** Addition (`+`), Subtraction (`-`), Multiplication (`*`), and Division (`/`).

---

## 🧠 How Reverse Polish Notation (RPN) Works

In RPN, operators follow their operands. For example, instead of writing `(3 + 4) * 5` (infix notation), you write:

```text
3 4 + 5 *
