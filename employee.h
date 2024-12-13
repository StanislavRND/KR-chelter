#pragma once
#include <iostream>
#include <string>
#include "living-being.h"
using namespace std;

class Shelter : public Employee {
public:
    virtual ~Shelter();

    Shelter(string firstName, string surname, double salary, int quantityAnimalsControl);
    Shelter();
    Shelter(int quantityAnimalsControl);

    int getQuantityAnimalsControl();
    
    void setQuantityAnimalsControl(int quantityAnimalsControl);

    void showInfo();

private:
    int _quantityAnimalsControl; 
};

class Veterinarian : public Employee {
public:
    virtual ~Veterinarian();

    Veterinarian(string firstName, string surname, double salary, int quantityAnimalsCured);
    Veterinarian();
    Veterinarian(int quantityAnimalsCured);

    int getQuantityAnimalsCured();
    
    void setQuantityAnimalsCured(int quantityAnimalsCured);

    void showInfo();

private:
    int _quantityAnimalsCured; 
};




