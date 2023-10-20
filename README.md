# Monty Bytecode Interpreter

## Overview

This project is a Monty bytecode interpreter written in C. The Monty language is a stack-based programming language where you execute operations on a stack. The interpreter reads Monty bytecode files and performs the specified operations on a stack.

## Getting Started

To compile and run the Monty interpreter, you can use the following commands:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=c89 -o monty *.c
./monty bytecode_file.m
