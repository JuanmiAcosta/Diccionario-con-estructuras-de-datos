//
// Created by Asus on 07/11/2022.
//
#include<iostream>
#include<fstream>
#include "letters_set.h"

using namespace std;

int main(int argc, char *argv[]){

    if (argc != 2){
        cerr << "Error en el nº de argumentos";
        exit(1);
    }

    string filename=argv[1];
    string palabra=argv[2];

    LettersSet Letras(filename);

    cout << "La puntuacion de la palabra " << palabra << " es " << Letras.getScore(palabra);

    return(0);
}




