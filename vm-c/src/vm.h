#ifndef VM_H
#define VM_H

#include <stdint.h>

/*
 * Memory
 * LC-3 has 65536 memory locations 
 * 2 bytes per memory location, 16 bits, 2^16 = 65536
 * Shifting 1 to the left 16 times is the same as multiplying by 2^16
 */
#define MEMORY_MAX (1 << 16)

/*
 * Registers
 * LC-3 has 8 general-purpose registers
 * R_PC is the program counter
 * R_COND is the condition code
 * R_COUNT is the number of registers
 * Storing the registers in an array makes it easier to access them
 */
enum {
    R_R0 = 0, /* General-purpose registers */
    R_R1,
    R_R2,
    R_R3,
    R_R4,
    R_R5,
    R_R6,
    R_R7,
    R_PC, /* Program Counter */
    R_COND, /* Condition Code */
    R_COUNT /* Number of registers */
};

/*
* Instruction Set
* LC-3 has 16 instructions
* Each instruction is 2 bytes
* The first byte is the opcode
* The second byte is the destination register
* The third byte is the source register
* The fourth byte is the immediate value
*/
enum {
    OP_BR = 0, /* Branch */
    OP_ADD, /* Add */
    OP_LD, /* Load */
    OP_ST, /* Store */
    OP_JSR, /* Jump Register */
    OP_AND, /* AND */
    OP_LDR, /* Load Register */
    OP_STR, /* Store Register */
    OP_RTI, /* Return from Interrupt */
    OP_NOT, /* NOT */
    OP_LDI, /* Load Indirect */
    OP_STI, /* Store Indirect */
    OP_JMP, /* Jump */
    OP_RES, /* Reserved (unused) */
    OP_LEA, /* Load Effective Address */
    OP_TRAP, /* Execute Trap */
};

/*Condition Flags*/
enum {
    FL_POS = 1 << 0, /* Positive */
    FL_ZRO = 1 << 1, /* Zero */
    FL_NEG = 1 << 2, /* Negative */
};


/* External declarations */
extern uint16_t memory[MEMORY_MAX];  /* 65536 locations */
extern uint16_t reg[R_COUNT]; /* Array of registers */

#endif /* VM_H */ 