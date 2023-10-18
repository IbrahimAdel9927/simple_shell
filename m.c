#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX_COMMAND_LENGTH 100

int main(void) {
    char command[MAX_COMMAND_LENGTH];
    char prompt[] = "simple_shell> ";
    
    while (1) {
        printf("%s", prompt);
        
        if (fgets(command, sizeof(command), stdin) == NULL) {
            printf("\n");
            break;
        }
        
        // Remove the newline character at the end of the command
        command[strcspn(command, "\n")] = '\0';
        
        pid_t pid = fork();
        
        if (pid < 0) {
            perror("fork");
            exit(EXIT_FAILURE);
        } else if (pid == 0) {
            // Child process
            execlp(command, command, NULL);
            
            // If the above line is executed, it means the command is not found
            printf("Command not found: %s\n", command);
            exit(EXIT_FAILURE);
        } else {
            // Parent process
            wait(NULL);
        }
    }
    
    return 0;
}
