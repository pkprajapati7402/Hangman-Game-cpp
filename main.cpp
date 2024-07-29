#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>

const std::vector<std::string> WORDS = {
    "programming", "hangman", "challenge", "openai", "computer", "language"
};

void displayGameState(const std::string& word, const std::string& guessed, int attempts) {
    std::cout << "\nWord: ";
    for (char c : word) {
        if (guessed.find(c) != std::string::npos) {
            std::cout << c << ' ';
        } else {
            std::cout << "_ ";
        }
    }
    std::cout << "\nAttempts left: " << attempts << "\n";
    std::cout << "Guessed letters: " << guessed << "\n";
}

bool isWordGuessed(const std::string& word, const std::string& guessed) {
    for (char c : word) {
        if (guessed.find(c) == std::string::npos) {
            return false;
        }
    }
    return true;
}

char getUserGuess(const std::string& guessed) {
    char guess;
    std::cout << "Enter your guess: ";
    std::cin >> guess;
    guess = std::tolower(guess);
    while (guessed.find(guess) != std::string::npos) {
        std::cout << "You already guessed '" << guess << "'. Try another letter: ";
        std::cin >> guess;
        guess = std::tolower(guess);
    }
    return guess;
}

int main() {
    std::srand(std::time(0));
    std::string word = WORDS[std::rand() % WORDS.size()];
    std::string guessed;
    int attempts = 6;

    std::cout << "Welcome to Hangman!\n";

    while (attempts > 0 && !isWordGuessed(word, guessed)) {
        displayGameState(word, guessed, attempts);
        char guess = getUserGuess(guessed);

        if (word.find(guess) != std::string::npos) {
            std::cout << "Good guess!\n";
        } else {
            std::cout << "Incorrect guess.\n";
            attempts--;
        }
        guessed += guess;
    }

    if (isWordGuessed(word, guessed)) {
        std::cout << "\nCongratulations! You guessed the word: " << word << "\n";
    } else {
        std::cout << "\nYou've run out of attempts. The word was: " << word << "\n";
    }

    return 0;
}
