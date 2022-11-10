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
    file>>diccionario;

    std::ifstream file2(argv[2]);
    LettersSet lettersSet;

    file2>>lettersSet;
    map<char, LetterInfo> letras=lettersSet.getLetters();
    map<char, LetterInfo>:: iterator it;
    int num1=0;
    int num2=0;
    cout<<"Letra "<<"FAbs. "<<"Frel. "<<endl;
    for( it=letras.begin();it!=letras.end();it++){
        int num1;float num2;
        num1=diccionario.getOcurrences((*it).first);
        num2=diccionario.getTotalLetters();
        cout<<(*it).first<<" "<<num1<<" "<<num1/num2<<endl;
    }
    return(0);
}




