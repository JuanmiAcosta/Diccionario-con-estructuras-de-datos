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

    LettersSet Letras(argv[1]); // hay que cambiar los parametros , los de ahora son para probar

/*
    LetterInfo rep_score;
    rep_score.repetitions=2;
    rep_score.score=2;

    LettersSet Letras;

    pair <char,LetterInfo> h;
    h.first='h';
    h.second=rep_score;
    pair <char,LetterInfo> o;
    o.first='o';
    o.second=rep_score;
    pair <char,LetterInfo> l;
    l.first='l';
    l.second=rep_score;
    pair <char,LetterInfo> a;
    a.first='a';
    a.second=rep_score;

    Letras.insert(h); // me esta fallando el insert
    Letras.insert(o);
    Letras.insert(l);
    Letras.insert(a);
*/

    cout << "\nLettersSet creado\n";

    cout << "La puntuacion de la palabra " << palabra << " es " << Letras.getScore(palabra);

    return(0);
}




