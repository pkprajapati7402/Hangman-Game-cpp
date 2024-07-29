# 🎮 Hangman Game

A simple command-line implementation of the classic Hangman game in C++. Guess the letters of a hidden word before running out of attempts!

## ✨ Features

- **Random Word Selection**: The game randomly selects a word from a predefined list.
- **User Interaction**: The game prompts the user for letter guesses and provides feedback on their progress.
- **Attempts Tracking**: The game tracks the number of incorrect guesses and limits the number of attempts.
- **Win/Loss Detection**: The game detects when the user has either successfully guessed the word or run out of attempts.

## 📋 Prerequisites

- C++ compiler (e.g., g++)

## ⚙️ Installation

1. **📥 Clone the repository:**

```bash
git clone https://github.com/pkprajapati7402/Hangman-Game.git
cd Hangman-Game
```

2. **🏗️ Build the project:**

```bash
g++ -o hangman main.cpp
```

3. **🚀 Run the Hangman Game:**

```bash
./hangman
```

## 🛠️ Usage

When you run the Hangman Game, you will see a simple menu:

```
Welcome to Hangman!
Word: _ _ _ _ _ _ _ _ _
Attempts left: 6
Guessed letters: 
Enter your guess: 
```

### 📝 Playing the Game

1. **Enter a Guess**: Type a letter and press Enter to guess a letter in the hidden word.
2. **Feedback**: The game will inform you if your guess was correct or incorrect.
3. **Continue Guessing**: Keep guessing letters until you either guess the entire word or run out of attempts.
4. **Winning**: If you guess the word correctly, the game will congratulate you.
5. **Losing**: If you run out of attempts, the game will reveal the hidden word.

## 🗂️ File Structure

- `main.cpp`: The main file containing the game logic.

## 🤝 Contributing

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Make your changes and commit them (`git commit -m 'Add new feature'`).
4. Push to the branch (`git push origin feature-branch`).
5. Create a new Pull Request.

## 📄 License

This project is licensed under the MIT License.

## 🙏 Acknowledgements

- Inspired by the classic Hangman game.

---

Feel free to update or customize this README as per your project's requirements.
