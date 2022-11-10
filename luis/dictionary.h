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

    /**
      @brief Constructor por defecto.
      @post Crea un diccionario vacío.
    **/
    Dictionary();

    /**
      @brief Constructor de copia.
      @param other otro Diccionario,el cual inicializamos nuestro Diccionario con el pasado por parámetro.
      @post Crea una copia exacta de otro objeto tipo Diccionario.
    **/
    Dictionary(const Dictionary & other);

    /**
      @brief Booleano que comprueba si una palabra está en nuestro diccionario.
      @param val String con la palabra que queremos comprobar si está presente en nuestro diccionario.
      @return True si la palabra se encuentra en nuestro diccionario, false en caso contrario.
    **/
    bool exists(const string & val)const;

    /**
      @brief Inserta una palabra en el diccionario.
      @param val String con la palabra a insertar en el diccionario.
      @post Inserta una palabra en el diccionario.
      @return True si la inserción ha sido correcta, si la palabra no estaba en el diccionario previamente devuelve true, en caso contrario false.
    **/
    bool insert(const string &val);

    /**
      @brief Elimina una palabra del diccionario.
      @param val String con la palabra a borrar del diccionario.
      @post Borra una palabra del diccionario.
      @return True si se ha borrado correctamente, en caso contrario false.
    **/
    bool erase (const string & val);

    /**
      @brief Limpia el diccionario. Elimina todas las palabras del diccionario.
      @post Elimina todas las palabras del diccionario y deja el diccionario vacío.
    **/
    void clear();

    /**
      @brief Booleano que comprueba si el diccionario está vacía o no.
      @return True si el diccionario está vacía, False si no.
    **/
    bool empty();

    /**
      @brief Devuelve el número de palabras del diccionario.
      @return Devuelve un unsigned int con el número de palabras en el diccionario.
    **/
    unsigned int size();

    /**
      @brief Comprueba cuantas veces aparece una letra en todas las palabras del diccionario.
      @param c Carácter a comprobar en el diccionario.
      @return Devuelve un entero con el número de veces que se repite el carácter pasado por parámetro en el diccionario.
    **/
    int getOcurrences(const char c);

    /**
      @brief Cuenta todas las letras del diccionario.
      @return Devuelve un entero con el número de letras del diccionario.
    **/
    int getTotalLetters();

    /**
      @brief Mete en un vector de palabras, todas las palabras del diccionario con longitud igual al valor pasado como parámetro.
      @param length Longitud de las palabras a buscar en el diccionario.
      @return Vector de palabras con todas las palabras de tamaño igual a @param length dentro del diccionario.
    **/
    vector<string> wordsOfLength(int length);

    /**
      @brief Sobrecarga del operador de de salida.
      @param os flujo de datos.
      @param cl Diccionario a sacar por la salida estándar
      @post Se van sacando todas las palabras del diccionario.
    **/
    friend ostream& operator << (ostream &os, const Dictionary &cl); //Lo declaramos friend para poder acceder a los atributos de la clase

    /**
      @brief Sobrecarga del operador de entrada.
      @param is flujop de datos.
      @param cl Diccionario en el que insertar los datos.
      @post Se le van metiendo los datos del fichero al Diccionario.
    **/
    friend istream& operator >>(istream &is, Dictionary &cl);
};
#endif
