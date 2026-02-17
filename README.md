C++ Console Applications – Internship Projects

Overview

This repository contains two C++ console-based applications developed as part of my internship work. These projects demonstrate fundamental programming logic, user interaction, and Object-Oriented Programming (OOP) concepts through practical implementations.

Projects Included

1️⃣ Number Guessing Game (C++)

Description

A simple C++ console application where the computer randomly selects a number between 1 and 100. The player attempts to guess the number, and the program provides hints indicating whether the guess is too high or too low until the correct number is found.

Features

Generates random numbers between 1 and 100
Provides hints (Too High / Too Low)
Tracks number of attempts
Runs until the correct guess is made

Technologies Used

Language: C++
Standard Libraries: <iostream> <cstdlib> <ctime>

How to Run

   g++ guessing_game.cpp -o guessing_game./guessing_game

Sample Output

=== Number Guessing Game ===
I have selected a number between 1 and 100.
Enter your guess: 50
Too low! Try again.

2️⃣ ATM Simulation (C++ – OOP Based)

Description

A console-based ATM Simulation system developed using Object-Oriented Programming principles. The program allows users to check their account balance, deposit money, and withdraw funds through a menu-driven interface.
This project demonstrates encapsulation, abstraction, and separation of concerns by organizing logic into classes.

Features

Check account balance
Deposit money
Withdraw money with balance validation
Prevents invalid transactions
Menu-driven interface
OOP-based structure

Technologies Used

Language: C++
Libraries: <iostream>

How It Works

The ATM class manages account balance and transactions.
The ATMController class handles user interaction and menu display.
The program continues running until the user chooses to exit.

How to Run

g++ atm_simulation.cpp -o atm
./atm

Sample Output

====== ATM MENU ======
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
Enter your choice:

Learning Outcomes

Understanding random number generation in C++
Implementing loop-based interactive programs
Applying Object-Oriented Programming concepts
Designing menu-driven systems
Validating user input
Writing modular and structured C++ code

Author

Minahil
BSCS Student | Internship Project
