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

    }

    void add(const T &element) {
        v.push_back(T);
    }

    T get() {

    }

    void clear() {

    }

    unsigned int size() const {

    }

    bool empty() {

    }

    const Bag<T> operator=(const Bag<T> &cl) {

    }


};
#endif
