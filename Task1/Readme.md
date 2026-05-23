# Number Guessing Game 🎮

A simple yet addictive command-line game built in C++ — guess a randomly generated number between 1 and 100 before your 5 chances run out.

> **CodSoft Internship — Task 1**

---

## 📸 Demo

<img width="306" height="408" alt="Gameplay demo" src="https://github.com/user-attachments/assets/ba650844-b915-4e36-96eb-738455c203aa" />

*The game gives you live feedback after every guess — "Too high!" or "Too low!" — so you can home in on the answer.*

---

## ✨ Features

- **Fresh every round** — a new secret number is generated each time you play using `rand()` seeded with the current time.
- **5-chance limit** — you get exactly five attempts, so every guess counts.
- **Instant feedback** — the game tells you whether to guess higher or lower after each attempt.
- **Clean game-over screen** — if you run out of guesses, the correct answer is revealed.

---

## 🧠 Concepts Used

| Concept | Details |
|---|---|
| Standard I/O | `cin` / `cout` for all player interaction |
| Control flow | `while` loop for the game cycle, `if-else` for guess logic |
| Random numbers | `srand(time(0))` seeds the generator; `rand() % 100 + 1` picks the target |

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
g++ number_guessing.cpp -o number_guessing
```

### Run

```bash
# Linux / macOS
./number_guessing

# Windows
number_guessing.exe
```

---

## 🕹️ How to Play

1. The game secretly picks a number between **1 and 100**.
2. You have **5 attempts** to guess it.
3. After each guess you'll see one of three messages:
   - `Too high!` — guess lower next time
   - `Too low!` — guess higher next time
   - `Correct! You guessed the number.` — you win!
4. If all 5 chances are used up, the correct number is shown and the game ends.

**Example session:**

```
Guess the number between 1 and 100
You have 5 chances.

Enter your guess: 50
Too high!
Remaining chances: 4

Enter your guess: 25
Too low!
Remaining chances: 3

Enter your guess: 37
Correct! You guessed the number.
```

---

## 📁 Project Structure

```
CodSoft/
└── Task1_NumberGuessing/
    └── number_guessing.cpp   # Full game source
```

---

## 🔭 Possible Improvements

- Difficulty modes (Easy = 10 attempts, Hard = 3 attempts)
- Score tracking across multiple rounds
- Input validation to handle non-numeric entries gracefully
- A replay prompt after each game

---

## 👤 Author

**Khwaaish Patwa**
[GitHub @khwaaishpatwa2110](https://github.com/khwaaishpatwa2110)

---

## 📄 License

This project is open source and available under the [MIT License](LICENSE).
