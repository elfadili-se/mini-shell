Mini Shell

A simple command-line shell program written in C, designed to mimic basic Unix shell functionality.
Featuress
Command Execution: Run external programs and built-in commands like pwd, echo, exit, cd, cp, and mv.

Argument Parsing: Accepts multiple arguments for commands (e.g., cp file1 file2).

Custom Prompt: Displays a customizable prompt to the user.

Environment Variables: Supports basic environment variable handling.

System Calls: Uses system calls such as fork(), execve(), wait(), and getcwd() to implement shell functionality.

Files


mini_shell.c: The main shell program.

pwd.c: Implements the pwd command .

echo.c: Implements the echo command.

cp.c: Implements the cp command.

mv.c: Implements the mv command.
