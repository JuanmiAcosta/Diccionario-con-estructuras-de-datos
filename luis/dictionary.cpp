#include "dictionary.h"

Dictionary::Dictionary(){

}
Dictionary::Dictionary(const Dictionary & other) {
    (*this) = other;
}
bool Dictionary::exists(const string & val)const {
    return this->words.find(val)!=words.end();
}
bool Dictionary::insert(const string &val) {
    bool ret=true;
    if(exists(val)){
        ret=false;
    }
    this->words.insert(val);
    return ret;
}
bool Dictionary::erase (const string & val) {
    bool ret=true;
    set<string>::iterator it=this->words.find(val);
    if(it!=this->words.end()){
        this->words.erase(it);
    }else{
        ret=false;
    }
    return ret;

}
void Dictionary::clear() {
    this->words.clear();
}
bool Dictionary::empty() {
    return this->words.empty();
}
unsigned int Dictionary::size() {
    return this->words.size();
}
int Dictionary::getOcurrences(const char c) {
    int num=0;
    set<string>::iterator it;

    for(it=this->words.begin();it!=this->words.end();++it){

        for (char (i) : (*it))
            if (i == tolower(c))
                num++;
    }
    return num;
}
int Dictionary::getTotalLetters() {
    int num=0;
    set<string>::iterator it;
    for(it=this->words.begin();it!=this->words.end();++it){
        num+=(*it).size();
    }
    return num;
}
vector<string> Dictionary::wordsOfLength(int length) {
    vector<string> ret;
    set<string>::iterator it;
    for(it=this->words.begin();it!=this->words.end();++it){
        if((*it).size()==length){
            ret.push_back((*it));
        }
    }
    return ret;

}

ostream& operator << (ostream &os, const Dictionary &cl) {
    set<string>::iterator it;
    Dictionary aux(cl);
    for (it=aux.words.begin() ; it!=aux.words.end(); ++it){
        os << (*it) <<endl;
    }
    return os;
}

istream& operator >>(istream &is, Dictionary &cl) {
    string cadena;
    while (is){
        is>>cadena;
        cl.insert(cadena);
    }
    return is;
}
