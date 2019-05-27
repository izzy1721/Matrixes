#include "library.h"

void printInstructions()
{
    std::cout << "Commands:\n"
              << "Q: Quit Program\n"
              << "S: Subtract two matrices\n"
              << "A: Add two matrices\n"
              << "P: Print Commands List\n";
} //end of printInstructions()

int main()
{
    std::cout << "WELCOME TO BASIC MATRIX CALCULATOR APP!\n";
    char buffer[300];
    char *input;

    printf("Command to do: \n");
    //get line of input
    input = fgets(buffer, 300, stdin);

    //User Interface
    while (input != NULL)
    {
        //get the input from the user
        char *command;
        command = strtok(input, " \n\t");
        //if no command is given
        if (command == NULL)
        {
            printf("\n");
            printf("No command given\n");
        }
        //if user wants to quit early
        else if (strcmp(command, "Q") == 0)
        {
            printf("\n\nGoodbye...\n\n");
            exit(1);
        }
        else if (strcmp(command, "S") == 0)
        {
            doSubtraction();
        }
        else if (strcmp(command, "A") == 0)
        {
            doAddition();
        }
        //get next line of input
        printf("\nCommand to do: \n");
        input = fgets(buffer, 300, stdin);
    }

    return 0;
} //end of main()
