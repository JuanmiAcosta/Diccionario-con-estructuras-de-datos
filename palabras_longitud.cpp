//
// Created by Asus on 07/11/2022.
//
#include<iostream>
#include<fstream>
#include "letters_set.h"
#include "bag.h"
#include "letters_bag.h"
#include "dictionary.h"

using namespace std;

int main(int argc, char *argv[]){

    if (argc != 3){
        cerr << "\nError en el nº de argumentos";
        cerr << "\nUso: " << argv[0] << " filename, palabra";
        exit(1);
    }

    Dictionary diccionario;
    std::ifstream file(argv[1]);
    string archivo=argv[0];
    int longitud=atoi(argv[2]);
    cout <<"Palabras de longitud "<<longitud<<endl;
    file>>diccionario;
    vector<string> v=diccionario.wordsOfLength(longitud);
    for(int i=0;i<v.size();i++){
        cout <<v[i]<<endl;
    }
    return(0);
}
