# Build Your Own X

A collection of educational projects implementing fundamental computer systems from scratch. This repository contains my journey through building core computing components to better understand how they work under the hood.

## Current Projects

### 1. Unix Shell Implementation

A functional Unix shell written in C that supports:

- Command execution with arguments
- I/O redirection (`>`, `<`, `>>`)
- Piping between commands (`|`)
- Background processes (`&`)
- Built-in commands (`cd`, `exit`, `help`, etc.)
- Environment variable expansion
- Tab completion
- Command history

**Key learning outcomes:**
- Process creation and management in Unix
- Signal handling
- Parsing and lexical analysis
- File descriptor manipulation

[View Unix Shell Code →](./unix-shell/)

### 2. Virtual Machine

A simple register-based virtual machine implemented in C with:

- Custom instruction set
- Memory management
- Register operations
- Basic arithmetic and logical operations
- Control flow instructions (jumps, conditionals)
- Stack implementation
- Function calls

**Key learning outcomes:**
- CPU architecture concepts
- Instruction execution cycle
- Memory addressing
- Program counter and instruction decoding

[View Virtual Machine Code →](./vm/)

## Roadmap

Future "Build Your Own X" projects I'm planning to implement:

- [ ] **Compiler/Interpreter**: Design a simple programming language and build a compiler or interpreter for it
- [ ] **Database**: Implement a small SQL or NoSQL database engine
- [ ] **Network Stack**: Create a simplified TCP/IP stack
- [ ] **Operating System**: Build a minimal operating system kernel
- [ ] **Web Server**: Implement an HTTP server from scratch

## Motivation

This project is inspired by the "Build Your Own X" philosophy of learning by implementing fundamental systems from scratch. By building these components myself, I aim to gain deeper insights into how computers work at various levels of abstraction.

## Building and Running

Each project has its own directory with specific build instructions. Generally, you can build projects with:

```bash
cd [project-directory]
make
```

## References and Resources

- [Operating Systems: Three Easy Pieces](https://pages.cs.wisc.edu/~remzi/OSTEP/)
- [Crafting Interpreters](https://craftinginterpreters.com/)
- [The C Programming Language (K&R)](https://en.wikipedia.org/wiki/The_C_Programming_Language)
- [Computer Systems: A Programmer's Perspective](https://csapp.cs.cmu.edu/)

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
