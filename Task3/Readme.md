# Simple Calculator 🧮

A straightforward command-line calculator built in C++ — pick an operation, enter two numbers, and get your result instantly. Runs in a loop so you can calculate as many times as you like without restarting.

> **CodSoft Internship — Task 3**

---

## 📸 Demo

*<img width="352" height="398" alt="ezgif com-crop (1)" src="https://github.com/user-attachments/assets/f9ee3094-17fb-4813-985c-73029854f175" />*

*The menu reappears after every calculation — just pick an operation or press 5 to exit.*

---

## ✨ Features

- **Four core operations** — addition, subtraction, multiplication, and division all handled through dedicated functions.
- **Continuous loop** — the menu repeats after every calculation so you can chain operations without restarting.
- **Smart input flow** — numbers are only requested when an operation (1–4) is chosen; selecting Exit skips the number prompt entirely.
- **Division by zero guard** — entering zero as the divisor prints a friendly error instead of crashing.
- **Invalid input handling** — unrecognised choices fall through to a default error message and the menu reappears.

---

## 🧠 Concepts Used

| Concept | Details |
|---|---|
| Functions | Separate `add()`, `subtract()`, `multiply()`, `divide()` for clean separation of logic |
| `do-while` loop | Keeps the menu running until the user explicitly chooses Exit |
| `switch` statement | Routes the user's choice to the correct operation |
| Conditional input | Numbers are prompted only when a valid operation is selected |
| Error handling | `divide()` checks for `b == 0` before performing division |

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

### Compile

```bash
g++ simple_calculator.cpp -o simple_calculator
```

### Run

```bash
# Linux / macOS
./simple_calculator

# Windows
simple_calculator.exe
```

---

## 🕹️ How to Use

1. The program displays a menu of operations.
2. Enter the number corresponding to your chosen operation.
3. Enter your two numbers when prompted.
4. The result is printed and the menu reappears for another calculation.
5. Enter `5` at any time to exit.

**Example session:**

```
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit
Enter your choice: 1
Enter 1st number: 12
Enter 2nd number: 8
Sum: 20

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit
Enter your choice: 4
Enter 1st number: 10
Enter 2nd number: 0
Error: Division by zero
Division: 0

1. Addition
...
Enter your choice: 5
Exiting program...
```

---

## 📁 Project Structure

```
CodSoft/
└── Task3_SimpleCalculator/
    └── simple_calculator.cpp   # Full source
```

---

## 🔭 Possible Improvements

- Support floating-point numbers (`double` instead of `int`) for decimal results
- Add modulus and exponentiation operations
- Input validation to reject non-numeric entries gracefully
- Display a running history of past calculations

---

## 👤 Author

**Khwaaish Patwa**
[GitHub @khwaaishpatwa2110](https://github.com/khwaaishpatwa2110)

---

## 📄 License

This project is open source and available under the [MIT License](LICENSE).
