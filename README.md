# CodSoft C++ Internship 🖥️

A collection of C++ projects built during the **CodSoft C++ Programming Internship**. Each task focuses on core programming concepts — from game logic and AI to user input handling and arithmetic operations.

> **Intern:** Khwaaish Patwa &nbsp;|&nbsp; **Language:** C++ &nbsp;|&nbsp; **Internship:** CodSoft

---

## 📁 Repository Structure

```
CodSoft/
├── Task1/   →   Number Guessing Game
├── Task2/   →   Tic Tac Toe
└── Task3/   →   Simple Calculator
```

---

## 🗂️ Tasks Overview

### Task 1 — Number Guessing Game 🎮

Guess a randomly generated number between 1 and 100 within 5 attempts. The game gives "Too high!" or "Too low!" feedback after every guess.

**Key concepts:** Random number generation, `while` loop, `if-else` logic
**Source:** [`Task1/number_guessing.cpp`](Task1/number_guessing.cpp)

---

### Task 2 — Tic Tac Toe 🎮

Classic 3×3 Tic Tac Toe against a smart AI opponent. The computer tries to win, blocks your winning moves, takes the center when available, and falls back to a random valid move.

**Key concepts:** 2D arrays, functions, win/draw detection, AI strategy
**Source:** [`Task2/tic_tac_toe.cpp`](Task2/tic_tac_toe.cpp)

---

### Task 3 — Simple Calculator 🧮

A menu-driven calculator that performs addition, subtraction, multiplication, and division in a continuous loop. Handles division by zero gracefully and re-prompts after every calculation.

**Key concepts:** Functions, `do-while` loop, `switch` statement, error handling
**Source:** [`Task3/simple_calculator.cpp`](Task3/simple_calculator.cpp)

---

## 🚀 Getting Started

### Prerequisites

- A C++ compiler: `g++` (GCC), `clang++`, or MSVC
- A terminal / command prompt

### Clone the repository

```bash
git clone https://github.com/khwaaishpatwa2110/CodSoft.git
cd CodSoft
```

### Compile & run any task

```bash
# Example: Task 1
g++ Task1/number_guessing.cpp -o number_guessing
./number_guessing

# Example: Task 2
g++ Task2/tic_tac_toe.cpp -o tic_tac_toe
./tic_tac_toe

# Example: Task 3
g++ Task3/simple_calculator.cpp -o simple_calculator
./simple_calculator
```

> On Windows, replace `./program` with `program.exe`

---

## 🧠 Concepts Covered

| Concept | Tasks |
|---|---|
| Standard I/O (`cin` / `cout`) | 1, 2, 3 |
| Loops (`while`, `do-while`) | 1, 2, 3 |
| Conditionals (`if-else`, `switch`) | 1, 2, 3 |
| Functions & modular design | 2, 3 |
| Arrays (1D & 2D) | 2 |
| Random number generation | 1, 2 |
| AI / game logic | 2 |
| Error handling | 3 |

---

## 👤 Author

**Khwaaish Patwa**
[GitHub @khwaaishpatwa2110](https://github.com/khwaaishpatwa2110)

---

## 📄 License

This project is open source and available under the [MIT License](LICENSE).
