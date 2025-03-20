
#include <stdio.h>
#include <stdbool.h>
#include "data_structures/Stack.h"

// InstructionSet enum

typedef enum {
	PSH,
	ADD,
	POP,
	SET,
	HLT
} InstructionSet;

// sample program
const int program[] = {
	PSH, 5,
	PSH, 6, 
	ADD, 
	POP,
	HLT
};

int ip = 0; // instruction pointer

int running = true; // flag for running program

StackNode *stack = NULL; // initialize an empty stack

// fetch's the next instruction
int fetch_instruction(){
	return program[ip];
}


void evaluate_instruction(int instr){
    switch(instr){
        case HLT:
            running = false;
            break;
        case PSH:
            push(&stack, program[++ip]);
            break;
        case ADD:
            
            
    }

}

int main(){
    
    while(running){
        eval(fetch_instruction());
        ip++; //increment IP 
    }	
    
 
	return 0;

}


