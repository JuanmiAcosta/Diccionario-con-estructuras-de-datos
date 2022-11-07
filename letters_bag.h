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

using namespace std;

template <class T>
class Bag {
private:
    /**
      @brief Es el vector interno de la clase. Con el podremos acceder a las repeticiones y puntaje de las letras.
    **/
    vector<T> v;

public:

    Bag() {

    }

    Bag(const Bag<T> &other) {
        (*this) = other;
    }

    void add(const T &element) {
        v.push_back(element);
    }

    T get() {
        int aux;
        srand(time(NULL));
        aux=rand()%v.size();
        return v.at(aux);
    }

    void clear() {
        v.clear();
    }

    unsigned int size() const {
        return v.size();
    }

    bool empty() {
        return v.empty();
    }

    const Bag<T> operator=(const Bag<T> &cl) {
        v.clear();
        v=cl.v;
    }


};
#endif
