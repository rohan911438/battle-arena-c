# 🧠 Battle Arena – C RPG Game (Player vs AI)

A terminal-based, turn-based RPG game written in **C**, where a player engages in combat against an AI-controlled enemy. This project emphasizes clean architecture, modular design, and simple AI logic in pure C.

![License](https://img.shields.io/badge/License-MIT-blue.svg)

---

## 🚀 Features

- ⚔️ **Turn-Based Combat** – Attack, Defend, Heal mechanics
- 🤖 **Enemy AI** – Simple decision-making logic
- 🧱 **Modular Structure** – Cleanly separated `.c` and `.h` files
- 🛠️ **Makefile Support** – Easily build the entire project
- 🧪 **Cross-Platform** – Works on Windows, Linux, and macOS

---

## 🧱 File Structure
```bash

battle-arena-c/
├── main.c # Entry point, game loop
├── player.c/.h # Player mechanics and stats
├── enemy_ai.c/.h # AI logic for enemy actions
├── combat.c/.h # Turn resolution and damage calculation
├── include/ # Header files
├── Makefile # Build script
├── .gitignore # Ignore binaries
├── LICENSE # Project license (MIT)
└── README.md # Project overview and usage

```

---

## ⚙️ Build & Run Instructions

### 🧰 Requirements
- GCC Compiler
- Make (optional, for convenience)

### 🛠️ Build with Make

```bash
make
---

### 🔧 Or Compile Manually
```bash
gcc -Iinclude main.c player.c enemy_ai.c combat.c -o rpg.exe

```

### ▶️ Run the Game
```bash
rpg.exe        # On Windows
./rpg          # On Linux/macOS

```
### 🧠 AI Logic
The AI evaluates:

Its own health

Player health

Probability of attack or healing

It behaves aggressively when you're low, and defensively when it's hurt.

### 📜 License
This project is licensed under the MIT License.
You are free to use, modify, and distribute this project with attribution.

### 🤝 Contributions
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

### 🔗 Author
Developed by Rohan Kumar
GitHub: rohan911438


## 🎥 Demo Video

Watch the gameplay demo of the Battle Arena Game in C:

[![Watch the video](https://img.youtube.com/vi/Hw1krkC7aYg/0.jpg)](https://youtu.be/Hw1krkC7aYg)










