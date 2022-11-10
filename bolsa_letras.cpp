//
// Created by Asus on 07/11/2022.
//
#include<iostream>
#include<fstream>
#include "letters_set.h"
#include "bag.h"
#include "letters_bag.h"

using namespace std;

int main(int argc, char *argv[]){

    if (argc != 2){
        cerr << "\nError en el nº de argumentos";
        cerr << "\nUso: " << argv[0] << " filename, palabra";
        exit(1);
    }

    LettersSet Letras(argv[1]); // hay que cambiar los parametros , los de ahora son para probar
    LettersBag BolsaLetras;
    map<char, LetterInfo> mapLetras=Letras.getLetters();
    map<char, LetterInfo>::iterator it;
    for (it=mapLetras.begin(); it!=mapLetras.end(); ++it){
        for(int i=0;i<(*it).second.repetitions;i++){
            BolsaLetras.insertLetter((*it).first);
        }
    }

    vector<char> v=BolsaLetras.extractLetters(BolsaLetras.size());

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<endl;
    }

    return(0);
}

