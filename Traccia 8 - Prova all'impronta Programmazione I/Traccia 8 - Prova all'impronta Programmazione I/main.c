//
//  main.c
//  Traccia 8 - Prova all'impronta Programmazione I
//
//  Created by Roberto Vecchio on 11/02/2019.
//  Copyright © 2019 Roberto Vecchio. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int wordWithThreeLetters(char *);

int main(int argc, const char * argv[]) {
    int numbers_of_three;
    char phrase[50];
    
    printf("inserisci la frase");
    fgets(phrase, 4096, stdin);
    
    numbers_of_three  = wordWithThreeLetters(phrase);
    printf("three = %d", numbers_of_three);
    
    return 0;
}

int wordWithThreeLetters(char *word){
    int i = 0;
    char separators[] = {' ','\0','\t','\n'};
    char *token = strtok(word, separators);
    while (token != NULL) {
        if (strlen(token) == 3) {
            i++;
        }
        token = strtok(NULL," \n");
    }
    return i;
}


