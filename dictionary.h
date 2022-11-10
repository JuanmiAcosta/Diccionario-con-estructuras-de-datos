#ifndef __DICTIONARY_H__
#define __DICTIONARY_H__

/**
 * @brief TDA Dictionary
 * @details Almacena las palabras de un fichero de texto y permite iterar sobre ellas
 *
 */
#include <iostream>
#include <stack>
#include <set>
#include <vector>
#include <map>
#include <string>
#include<algorithm>
#include "bag.h"
#include "letters_set.h"
#include "letters_bag.h"

using namespace std;

class Dictionary {
private:
    set <string> words;
public:
    Dictionary();
    Dictionary(const Dictionary & other);
    bool exists(const string & val)const;
    bool insert(const string &val);
    bool erase (const string & val);
    void clear();
    bool empty();
    unsigned int size();
    int getOcurrences(const char c);
    int getTotalLetters();
    vector<string> wordsOfLength(int length);

    friend ostream& operator << (ostream &os, const Dictionary &cl); //Lo declaramos friend para poder acceder a los atributos de la clase

    friend istream& operator >>(istream &is, Dictionary &cl);
};
#endif