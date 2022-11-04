#include "letters_set.h"

LettersSet & LettersSet::operator= (const LettersSet &cl){
     this->letters = cl.letters;
}

map<char, LetterInfo> LettersSet::getLetters(){
    return this->letters;
}

LettersSet::LettersSet(){}

LettersSet::LettersSet( const LettersSet &other){
    (*this) = other;
}

bool LettersSet::insert (const pair< char, LetterInfo> & val){
    bool exito=false;
    if (this->getLetters().at(val.first).repetitions == 0){
        letters.insert(val);
        exito=true;
    }else if(this->getLetters().at(val.first).repetitions > 0){
        this->getLetters().at(val.first).repetitions++;
    }
    return exito;
}

bool LettersSet::erase (const char & key){
    bool exito=false;
    map<char,LetterInfo>::iterator it;
    it=this->letters.find('key'); //Hacemos un iterador de map para buscar la key y borrarla si está en el map
    if (it != this->letters.end()){
        this->letters.erase(it);
        exito=true;
    }
    return exito;
}

void LettersSet::clear(){
    this->letters.clear();
}

bool LettersSet::empty() const{
    return (this->letters.empty());
}

unsigned int LettersSet::size() const{
    return (this->letters.size());
}

int LettersSet::getScore (string word){
    int suma=0;
    for (int i=0; i<word.size(); i++){
        suma+=this->letters.at(i).score;
    }
    return suma;
}

LetterInfo& LettersSet::operator [] (const char &val){
    return this->letters['val'];
}

ostream& operator << (ostream &os, const LettersSet &cl){
    map<char,LetterInfo>::iterator it;
    LettersSet map_aux(cl);

    for (it=map_aux.getLetters().begin() ; it!=map_aux.getLetters().end(); ++it){
        os << "\nLa letra " << it->first << " está " << it->second.repetitions << " veces repetida, y tiene punt. de " << it->second.score;
    }
    return os;
}
/*
istream& operator >>(istream &is, LettersSet &cl){
    const int letras=27;
    char Letra = 0;
    int Cantidad=0, Puntos=0;

    for (int i=0; i<letras; i++){
        // A ver cómo se hace esto xd
    }
}
 */