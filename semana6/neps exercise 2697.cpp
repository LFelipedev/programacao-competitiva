#include <iostream>
#include <stdio.h> //para fun��o gets
#include <stdlib.h> //para fun��o malloc

using namespace std;

int main(){

    char *frase;
    char *caracteres;
    frase = (char*)malloc(sizeof(char)+1);
    caracteres = (char*)malloc(sizeof(char)+1);
    gets(frase);
    gets(caracteres);

    for(int i=0; frase != "\0"; i++){

    }

    return 0;
}
