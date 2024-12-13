#pragma once
#include <iostream>
#include <string>
#include "living-being.h"
using namespace std;

class Dog : public Animal {
public:
    virtual ~Dog();

    Dog(string firstName, double weight, string breed, bool isService);
    Dog();
    Dog(bool isService);

    bool getIsService();
    
    void setIsService(bool isService);

    void showInfo();

private:
    bool _isService; 
};

class Cat : public Animal {
public:
    virtual ~Cat();

    Cat(string firstName, double weight, string breed, string conduct);
    Cat();
    Cat(string conduct);

    string getConduct();
    
    void setConduct(string conduct);

    void showInfo();

private:
    string _conduct; 
};

class CatDog : public Dog, public Cat {
public:
    CatDog(string firstName, double weight, string breed, string conduct, bool isService, string dominant);
    CatDog();
    ~CatDog();

    string getDominant() ;
    void setDominant(string dominant);
    void showInfo() ;

private:
    string _dominant; 
};


