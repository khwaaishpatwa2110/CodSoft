# Tic Tac Toe 🎮

A classic two-player strategy game built in C++ — play against a smart computer opponent that tries to win, block you, and always takes the center when it can.

> **CodSoft Internship — Task 2**

---

## 📸 Demo

*<img width="311" height="409" alt="demo" src="https://github.com/user-attachments/assets/67fd728a-671d-4dfa-b9fb-448f931477a9" />*

*The board updates after every move — the computer thinks strategically, so don't leave an opening!*

---

## ✨ Features

- **Smart AI opponent** — the computer tries to win first, blocks your winning moves, grabs the center, and falls back to a random valid move.
- **Interactive numbered board** — positions 1–9 map directly to the grid, so picking your spot is intuitive.
- **Win & draw detection** — the game checks all rows, columns, and diagonals after every move and announces the result instantly.
- **Play again loop** — when a round ends you're asked if you want another game, no restart needed.

---

## 🧠 Concepts Used

| Concept | Details |
|---|---|
| 2D arrays | `char board[3][3]` stores the game state |
| Functions | Separate functions for display, move, win/draw checks, and AI |
| Control flow | `while` loop for the game cycle, `if-else` for turn and result logic |
| AI strategy | Win → Block → Center → Random fallback, evaluated each turn |
| Random numbers | `srand(time(0))` + `rand()` for the AI's random fallback move |

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
g++ tic_tac_toe.cpp -o tic_tac_toe
```

### Run

```bash
# Linux / macOS
./tic_tac_toe

# Windows
tic_tac_toe.exe
```

---

## 🕹️ How to Play

1. You are **X**, the computer is **O**.
2. The board shows numbers 1–9 indicating available positions:

```
 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9
```

3. Enter a number (1–9) to place your mark on that cell.
4. The computer responds immediately with its move.
5. First to get three in a row — horizontally, vertically, or diagonally — wins. If the board fills up with no winner, it's a draw.
6. At the end, choose `y` to play again or `n` to quit.

**Example session:**

```
 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9

Enter your move (1-9): 1

 X | 2 | 3
---|---|---
 4 | O | 6
---|---|---
 7 | 8 | 9

Computer chose: 5

Enter your move (1-9): 9
...
You win!

Play again? (y/n):
```

---

## 📁 Project Structure

```
CodSoft/
└── Task2_TicTacToe/
    └── tic_tac_toe.cpp   # Full game source
```

---

## 🔭 Possible Improvements

- Minimax algorithm for an unbeatable AI
- Two-player mode (human vs. human)
- Score tracking across multiple rounds
- Input validation to handle non-numeric entries gracefully

---

## 👤 Author

**Khwaaish Patwa**
[GitHub @khwaaishpatwa2110](https://github.com/khwaaishpatwa2110)

---

## 📄 License

This project is open source and available under the [MIT License](LICENSE).
