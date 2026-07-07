# NENU-UTILITY-C_Programming-Language
Menu Utility. This is a c programming language project, you can run it on VS Code/ Code blocks/ any IDE that allows C. 
A menu-driven C program that lets the user choose between a few small utilities: printing an 
ASCII table, calculating the total resistance of a parallel circuit, and finding the length of a string. 


Features 

• A / B - Print a full ASCII table (DEC, HEX, CHAR) for values 0–255 
• C - Calculate total resistance of three resistors in parallel 
• D - Calculate the length of a user-input string (custom function, no strlen) 
• X - Exit the program 

How It Works 
The program runs in a loop, displaying a menu and reading a single character option via scanf. A 
switch statement handles each case: 
• Options A and B both print the ASCII table (currently duplicated logic) 
• Option C prompts for three resistor values (R1, R2, R3) and calculates the total resistance 
using the parallel resistance formula 
• Option D reads a string and passes it to a custom stringlenth() function that counts 
characters up to the null terminator 
• Any invalid input shows an error message and re-displays the menu 
Rtotal = 1 / (1/R1 + 1/R2 + 1/R3) 

Building 
gcc main.c -o menu_program 

Running 
./menu_program 
Follow the on-screen menu and enter the corresponding capital letter (A, B, C, D, or X) when 
prompted. 

Notes / Possible Improvements 
• Options A and B currently perform the exact same action — consider removing the 
duplication or giving B a distinct purpose 
• No input validation on resistor values (e.g. zero or negative numbers could cause division 
errors) 
• string_input is a fixed-size buffer (100 chars) with no bounds checking on scanf
