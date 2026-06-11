# To-Do List Manager 📝
A clean command-line task manager built in C++ — add tasks, mark them done, and remove them whenever you need. Runs in a loop so your list stays active until you decide to exit.

> **CodSoft Internship — Task 3**

---

## 📸 Demo

*<img width="492" height="944" alt="to_do_list" src="https://github.com/user-attachments/assets/38e1ef22-f464-4ce0-90da-518470ac68af" />*

*The menu reappears after every action — just pick an option or press 5 to exit.*

---

## ✨ Features

- **Add tasks** — type in any task description and it gets appended to your list instantly.
- **View all tasks** — displays every task numbered with its current status (`Pending` or `Completed`).
- **Mark as completed** — enter a task number to flip its status to Completed.
- **Remove tasks** — delete a task by number; remaining tasks shift up to fill the gap.
- **Continuous loop** — the menu repeats after every action so you can manage your list without restarting.
- **Capacity guard** — gracefully handles the 100-task limit with a friendly message instead of overflow.
- **Invalid input handling** — out-of-range task numbers and unrecognised menu choices both print errors and loop back safely.

---

## 🧠 Concepts Used

| Concept | Details |
|---|---|
| Struct | `Task` struct bundles `description` (string) and `completed` (bool) into a single unit |
| Array of structs | Fixed-size `Task tasks[100]` array stores the entire list in memory |
| `do-while` loop | Keeps the menu running until the user explicitly chooses Exit |
| `switch` statement | Routes each menu choice to its corresponding case |
| `getline` | Reads full task descriptions including spaces after clearing the input buffer with `cin.ignore()` |
| Array shifting | Tasks are compacted on removal by shifting elements left — no gaps left behind |
| Ternary operator | `completed ? "Completed" : "Pending"` for inline status display |

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
g++ to_do_list.cpp -o to_do_list
```

### Run
```bash
# Linux / macOS
./to_do_list

# Windows
to_do_list.exe
```

---

## 🕹️ How to Use

1. The program displays a menu of five options.
2. Enter the number corresponding to your chosen action.
3. Follow the prompts — type a task description or enter a task number as needed.
4. The updated list and menu reappear for your next action.
5. Enter `5` at any time to exit.

**Example session:**
```
===== TO-DO LIST MANAGER =====
1. Add Task
2. View Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Enter your choice: 1
Enter task: Submit DSA assignment
Task added successfully!

===== TO-DO LIST MANAGER =====
Enter your choice: 1
Enter task: Push code to GitHub
Task added successfully!

===== TO-DO LIST MANAGER =====
Enter your choice: 2

----- TASK LIST -----
1. Submit DSA assignment [Pending]
2. Push code to GitHub [Pending]

===== TO-DO LIST MANAGER =====
Enter your choice: 3
Enter task number to mark as completed: 1
Task marked as completed!

===== TO-DO LIST MANAGER =====
Enter your choice: 2

----- TASK LIST -----
1. Submit DSA assignment [Completed]
2. Push code to GitHub [Pending]

===== TO-DO LIST MANAGER =====
Enter your choice: 4
Enter task number to remove: 1
Task removed successfully!

===== TO-DO LIST MANAGER =====
Enter your choice: 5
Exiting program...
```

---

## 📁 Project Structure

```
CodSoft/
└── Task3/
    └── to_do_list.cpp   # Full source
```

---

## 🔭 Possible Improvements

- Persist tasks to a file so the list survives between sessions
- Add task priorities (High / Medium / Low) for better organisation
- Support editing an existing task's description
- Filter view to show only Pending or only Completed tasks
- Dynamic memory allocation (`vector<Task>`) to remove the 100-task cap

---

## 👤 Author

**Khwaaish Patwa**
[GitHub @khwaaishpatwa2110](https://github.com/khwaaishpatwa2110)

---

## 📄 License

This project is open source and available under the [MIT License](LICENSE).
