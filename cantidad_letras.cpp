//
// Created by Asus on 07/11/2022.
//
#include<iostream>
#include<fstream>
#include "letters_set.h"
#include "bag.h"
#include "dictionary.h"

using namespace std;
/*
bool existe (map<char, LetterInfo> letras,char letra){
    bool existe=true;

    map<char,LetterInfo>::iterator it;

    it=letras.find(letra);

    if (it == letras.end())
        existe=false;

    return existe;
}*/

int main(int argc, char *argv[]){

    if (argc != 3){
        cerr << "\nError en el nº de argumentos";
        cerr << "\nUso: " << argv[0] << " filename, palabra";
        exit(1);
    }

    Dictionary diccionario;
    std::ifstream file(argv[1]);
    file>>diccionario;

    std::ifstream file2(argv[2]);
    LettersSet lettersSet;
    string aux;
    getline(file2,aux);
    file2>>lettersSet;

    int num1=0;
    float num2=0;
    cout<<"Letra\tFAbs.\tFrel."<<endl;

    num2=diccionario.getTotalLetters();

    for( LettersSet::iterator it=lettersSet.begin();it!=lettersSet.end();it++){
            num1 = diccionario.getOcurrences((*it).first);
            cout << (*it).first << "\t" << num1 << "\t" << num1 / num2 << endl;
    }

    return(0);
}


