#include "letters_bag.h"
LettersBag::LettersBag(){

}
LettersBag::LettersBag(const LettersSet & letterSet) {
    (*this) = letterSet;
}
void LettersBag::insertLetter (const char & l) {
    this->letters.add(l);
}
char LettersBag::extractLetter() {
    return this->letters.get();
}
vector<char> LettersBag::extractLetters(int num) {
    vector<char> aux;
    for(int i=0;i<num;i++){
        aux.push_back(this->letters.get());
    }
    return aux;
}
void LettersBag::clear() {
    this->letters.clear();
}
unsigned  int LettersBag::size() {
    return this->letters.size();
}
LettersBag LettersBag::operator=(const LettersBag &cl) {
    this->letters=cl.letters;
    return (*this);
}