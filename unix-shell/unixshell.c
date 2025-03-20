#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <signal.h>


char **get_input(char *input){

    int curr_cap = 8;
    char **command = malloc(8*sizeof(char*)); // array of tokens 
    char *seperator = " ";
    char *parsed;

    int index = 0;

    if(!command){
        perror("Malloc failed");
        exit(1);
    }


    // get first token
    parsed = strtok(input, seperator);

    while(parsed != NULL){
        // if more then 8 words, realloc memory
        if(index >= curr_cap - 1){
            curr_cap *= 2;
            command = realloc(command, curr_cap*sizeof(char*));
            if(!command){
                perror("Malloc failed");
                exit(1);
            }
        }
        command[index] = parsed;
        index++;

        // get next token
        parsed = strtok(NULL, seperator);
    }

    command[index] = NULL;

    return command;
}

int cd(char *path){
    return chdir(path);
}


int main() {
    char **command;
    char *input;
    pid_t child_pid;
    int stat_loc;

    signal(SIGINT, SIG_IGN);

    while(1){
        input = readline("unixsh> ");
        command = get_input(input);

        child_pid = fork();

        if(child_pid < 0){
            //child process couldnt be created
            printf("Child process not created..\n");
            exit(1);

        } else if(child_pid == 0){
            //check if cd command
            if(strcmp(command[0], "cd") == 0){
                if(cd(command[1]) < 0){
                    perror(command[1]);
                }
                continue;
            }
            if(execvp(command[0], command) < 0){
                perror(command[0]);
                exit(1);
            }
            printf("FAILED\n");
        } else {
            waitpid(child_pid, &stat_loc, WUNTRACED);
        }
        free(input);
        free(command);
        
    }

    return 0;
}

