## citizen-code #

##Citizen records Management System (C Program)##

A simple menu-driven Citizen Management System written in C.
This program allows users to store, manage, and view citizen records efficiently using structures and arrays.

##Abstract##

The Citizen Management System is a basic C application designed to manage details of citizens such as their ID, name, age, address, and occupation.
It uses structures to organize citizen-related information and stores them inside an in-memory array.

The user can add new citizen records, view all stored records, and maintain the data through a simple text-based menu interface.

##Features##

Add new citizen details

Store multiple citizen records (up to 100)

View all stored citizen details

Menu-driven program

Uses struct for clean data organization

Simple terminal-based interface



*** Technical Requirements ***(Same Style)



###1. System Overview###


The Citizen Management System allows a user to:

Add citizen information

View all stored citizen records

All data is stored in memory only (RAM) and gets erased when the program closes.



##2. Language & Compilation Requirements###


Language Standard: C99 or later

Compiler: GCC / Clang
-Wall -Wextra

Files: Single .c file



##3. In-Memory Data Requirements##



A fixed-size array stores up to 100 citizen entries

A counter keeps track of the number of saved citizens

No file handling used

** ##4. Program Flow Requirements##



##4.1 Menu System##


The program displays:

Add Citizen

View All Citizens

Exit 

<img width="453" height="182" alt="Screenshot 2025-11-27 143514" src="https://github.com/user-attachments/assets/9dfcb93f-a707-4781-8d4a-424156ba54e3" />


Input is handled using scanf.

##4.2 Adding a Citizen Entry##

User enters:

Citizen ID

Name

Age

Address

Occupation

Data is stored in the next available array position.

<img width="352" height="162" alt="Screenshot 2025-11-27 143829" src="https://github.com/user-attachments/assets/77d05706-ae54-4a5f-97dd-e676d22a27a0" />


##4.3 Viewing Citizen Records##

<img width="401" height="168" alt="Screenshot 2025-11-27 143907" src="https://github.com/user-attachments/assets/bea08f91-7773-47d9-b73a-5811ba0138e2" />


4.4 exit




<img width="281" height="84" alt="Screenshot 2025-11-27 144058" src="https://github.com/user-attachments/assets/23e4ddb2-60d7-424b-8cb1-7d61948961a2" />



Runtime Requirements

Terminal-based execution

Uses standard I/O
Recommended GCC flags:
