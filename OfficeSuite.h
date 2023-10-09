#ifndef OFFICESUITE_H
#define OFFICESUITE_H

#include "Software.h"
#include <iostream>
#include <string>
#include <vector> // Incluye la biblioteca para trabajar con matrices

using namespace std;

class OfficeSuite : public Software {
private:
    vector<vector<int>> matrix; // Declarar una matriz

public:
    OfficeSuite(string _name, string _dev, int _age, CircularListUser _list, int _price, vector<vector<int>> _matrix)
        : Software(_name, _dev, _age, _list, _price), matrix(_matrix) {
        // Inicializa la matriz en el constructor
    }
};

#endif