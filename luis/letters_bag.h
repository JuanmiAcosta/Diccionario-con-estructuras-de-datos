#ifndef __LETTERS_BAG_H__
#define __LETTERS_BAG_H__

/**
 * @brief TDA Bag
 *
 * Este TDA almacena un conjunto de chars utilizado en el juego de letras.
 * La estructura de datos subyacente es una lista de chars.
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

using namespace std;
class LettersBag {
private:
    Bag <char> letters;
public:
    LettersBag();
    LettersBag(const LettersSet & letterSet);
    void insertLetter (const char & l);
    char extractLetter();
    vector<char> extractLetters(int num);
    void clear();
    unsigned  int size();
    LettersBag operator=(const LettersBag &cl);


};
#endif
