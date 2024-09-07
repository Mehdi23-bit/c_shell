#include <stdio.h>
#include <stdlib.h>
int main() {
    #ifdef _WIN32
        system("start cmd.exe /k \"./your_shell_program.exe\"");
    
    #elif __linux__
        system("gnome-terminal -- ./main");
   
    #endif
    return 0;
}