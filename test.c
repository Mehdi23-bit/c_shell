#include <stdio.h>
#include<stdlib.h>
int main() {
    int c;
    char * text;
    int size=100;
    text =(char*)malloc(sizeof(char)*size);
    int i=0;
    while (1)
    {
    c = getchar(); 
     if (c == '\n' || c == EOF) {
            break;
        }
        if(i>=size){
            size*=2;
            text=(char*)realloc(text,size*sizeof(char));
            if(text==NULL){
                perror("\033[31m Allocation Error : \033[0m");
            }
        }
    text[i]=c;
    i++;
    }
    text[i]='\n';
    printf("\n%s\n",text);
    
    

    free(text);

    

    return 0;
}
