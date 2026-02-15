# Ludo-Game-CPP
A classic Ludo Game developed in C++ using OOP principles

This project represents the implementation of the classic board game **Ludo**, developed in C++ Builder. The main goal of the application is to demonstrate and practically apply the fundamental concepts of **Object-Oriented Programming (OOP)**: Encapsulation, Inheritance, Polymorphism, and the decoupling of the game logic from the Graphical User Interface (GUI).

## Main Features
* **Local Multiplayer:** Support for 2 or 4 players.
* **Complete Ludo Mechanics:** Leaving the base (requires rolling a 6), moving along the circular path, capturing opponent pawns, and entering the winning zone.
* **Strict Move Validation:** A centralized algorithm that prevents out-of-bounds moves, overlapping own pawns ("towers"), and illegal actions.
* **Interactive GUI:** Real-time visual feedback, dynamically generated pawns, and informative messages guiding the user's turn.

## OOP Concepts Implemented
* **Modular Architecture:** Clear separation between the core logic classes (`Joc`, `Tabla`, `Casuta`, `Pion`, `Jucator`) and the user interface forms (`TfJoc`, `TfSetup`).
* **Inheritance and Polymorphism:** Utilizing an abstract base class `Joc` from which `JocLocal` derives (along with a prepared structure for a future `JocRetea` / Network Game).
* **Encapsulation:** Protecting the internal game state and exposing it strictly through `get/set` methods and specific validation functions.
* **Memory Management:** Dynamic allocation and clean destruction of both visual and logical components upon every game restart.

## How to Run the Project
1. Clone this repository to your local machine.
2. Open the `.cbproj` file using the **RAD Studio / C++ Builder** IDE.
3. Compile and run the application (Run -> Run or press F9).

*Note: The complete project documentation (.pdf format) is also included in this repository.*

## Author
* **Elena-Teodora Puia** - OOP Logic Development, GUI Implementation, and Documentation.
