*This project has been created as part of the 42 curriculum by rlabbaou*

## **ft_printf**

## **Description**

This project recreates a simplified version of the standard C function printf.

Printf allows you to print text and values (like numbers or words) in a structured way. For example:

- printf("Hello %s, you are %d years old", "Roua", 25);

The goal of this project is to rebuild that behavior from scratch in order to better understand:

- How C handles flexible inputs
- How to interpret instructions inside a string
- How to organize code in a clean and logical structure

**Supported conversions:**

- %c → character
- %s → string
- %d / %i → signed integer
- %u → unsigned integer
- %x / %X → hexadecimal
- %p → memory address
- %% → percent symbol

*The function returns the total number of characters printed.*

## How It Works

- The function reads the format string (the text inside quotes) from left to right.
- Normal characters are printed directly.
- When % is found, the program understands that a value must be inserted at that position.
- The character after % tells the program what type of value to print next.

Example: **"Age: %d"**

The program:
- Prints Age:
- Sees %d
- Takes the next number provided
- Prints it
- Continues

Everything is processed step by step in order.

## *INSTRUCTIONS*

This project builds a static library called libftprintf.a.

A static library is a compiled collection of files that can later
be linked to another C program so that you can use the ft_printf
function inside your own projects.

- To compile the project and create the library, run the command:
**make**

This command compiles all source files into object files and then
groups them into the final library. If there are compilation errors,
the process stops and displays the problem.

- To remove only the compiled object files, run:
**make clean**

- To remove both the object files and the generated library, run:
**make fclean**

- To completely rebuild the project from scratch, run:
**make re**

- To use ft_printf in another program:

**Include the header file ft_printf.h in your C file.**

- Compile your program and link it with the library using:
**cc main.c -L. -lftprintf**

The -L. option tells the compiler to look for the library in the
current directory, and -lftprintf links the library to your program.

After compilation, you can execute your program normally.

## *RESOURCES*

This project was completed using:

- Peer-to-peer discussions
- YouTube educational video:
https://www.youtube.com/watch?v=oDC208zvsdg
- C programming documentation and websites:
https://www.geeksforgeeks.org/c/printf-in-c/
- man printf
- The official 42 subject

## *AI USAGE DISCLOSURE*

AI was used only to understand concepts such as:
- Variadic functions
- Format string logic
- Project structuring

AI was also used to help structure this README file.

*AI was not used for writing, correcting, or generating any part
of the project code. All implementation and debugging were
completed independently.*

## **Algorithm & Data Structure (Detailed Explanation)**

The chosen algorithm is based on a simple reading approach. The program scans the format string character by character. When it encounters normal text, it prints it immediately. When it encounters %, it switches to interpretation mode and determines which type of value must be printed next.

To handle the fact that ft_printf can receive an unknown number of arguments, and that those arguments can also be of unknown type, the project uses **variadic functions**. Variadic functions allow the program to accept flexible input without knowing in advance how many values will be passed.

The format string acts as a guide. It tells the program:
- How many arguments to expect
- What type each argument is
- In which order they should be printed

Arguments are then processed one by one in sequence.

No complex data structures were required. The implementation relies only on:

- The format string as an instruction guide
- A mechanism to access each argument in order
- Small helper functions to print each type
