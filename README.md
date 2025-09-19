# 🖥️ Mini Shell
## Description

This project is a custom shell implementation in C that mimics the basic behavior of Unix shells.
It allows users to run system commands, handle arguments, and even execute custom programs that I developed (pwd, echo, cp, and mv).
The shell is built from scratch using system calls like fork(), execve(), and wait().

## Features

⚙️ Command Execution: Run built-in commands and external programs.

📂 Argument Parsing: Supports multiple arguments (e.g., cp file1 file2).

⌨️ Custom Prompt: Displays a simple shell prompt for user interaction.

🚦 Signal Handling: Handles signals like Ctrl+C and Ctrl+D.

🌍 Environment Support: Uses execve() and execvp() with environment variables.

🛠️ System Calls: Implemented using low-level system calls (fork, execve, wait, getcwd, etc.).

📝 Custom Commands: Developed my own versions of:

pwd (using getcwd())

echo (using syscalls functions)

cp

mv

## Technologies Used

C programming language

Linux system calls (fork, execve, wait, getcwd,write,read and open )

GCC compiler

## How It Works

The shell displays a prompt and waits for user input.

Input is parsed using strtok() to split commands and arguments.

The shell creates a child process using fork().

In the child, the command is executed using execve() or execvp().

The parent process waits for the child to finish using wait().

The cycle repeats until the user types exit.
## Author

👨‍💻 Developed by **Elfadili**, embedded engineer student passionate about systems programming Linux, and low-level C development.

