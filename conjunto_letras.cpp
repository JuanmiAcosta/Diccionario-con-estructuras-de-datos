//
// Created by Asus on 07/11/2022.
//
#include<iostream>
#include<fstream>
#include "letters_set.h"

using namespace std;

int main(int argc, char *argv[]){

    if (argc != 3){
        cerr << "\nError en el nº de argumentos";
        cerr << "\nUso: " << argv[0] << " filename, palabra";
        exit(1);
    }

    string palabra=argv[2];

    LettersSet Letras(argv[1]);

    cout << "La puntuacion de la palabra " << palabra << " es " << Letras.getScore(palabra);

    return(0);
}




