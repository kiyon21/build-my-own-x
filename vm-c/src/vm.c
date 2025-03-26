#include <stdio.h>
#include <stdint.h>
#include <signal.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/termios.h>
#include <sys/mman.h>
#include "data_structures/Stack.h"
#include "vm.h"

/* Define the actual variables */
uint16_t memory[MEMORY_MAX];  /* 65536 locations */
uint16_t reg[R_COUNT]; /* Array of registers */

int main(){
 
	return 0;

}


