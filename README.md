# 🎯 Number Guessing Game — C++

A beginner-friendly console-based game built in C++ where the computer randomly selects a number and the player tries to guess it within a limited number of attempts. The game provides helpful hints like **"Too High"** or **"Too Low"** after every guess.

---

## 📌 About the Project

This project was built to practice and demonstrate core C++ programming concepts. It is a simple yet complete game that includes random number generation, user input handling, conditional logic, and loop control — all using basic coding techniques.

---

## 🚀 Features

- 🔢 Random number generated between **1 and 100** every round
- 💡 Hints after each guess — *Too High* or *Too Low*
- ⏱️ Limited to **7 attempts** per round
- 🔁 Option to **play again** after each round
- 📊 Tracks and displays the number of attempts taken
- 🛡️ Reveals the secret number if all attempts are used

---

## 🛠️ Concepts Used

| Concept | Usage |
|---|---|
| Variables & Data Types | `int`, `char` for game state |
| Random Numbers | `rand()`, `srand(time(0))` |
| Conditional Statements | `if / else if / else` for hint logic |
| Loops | `while` loop for repeated guessing |
| Loop Control | `break` on correct guess |
| Input / Output | `cin` and `cout` for interaction |

---

## 📁 Project Structure

```
number-guessing-game/
│
└── number_guess.cpp     ← Single source file (all logic inside main)
```

---

## 🎮 Sample Gameplay

```
================================
   NUMBER GUESSING GAME
================================

Guess a number between 1 and 100: 50
Too HIGH! Try a lower number.
Attempts left: 6

Guess a number between 1 and 100: 25
Too LOW! Try a higher number.
Attempts left: 5

Guess a number between 1 and 100: 37
*** Correct! You guessed it! ***
You took 3 attempt(s).

Play again? (y/n):
```

---

## 🧠 What I Learned

- How to use `rand()` and `srand()` for random number generation in C++
- Controlling program flow using `while` loops and `break`
- Taking and validating user input with `cin`
- Building a complete mini-project using only basic C++ concepts

