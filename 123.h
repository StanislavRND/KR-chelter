#pragma once
#include <iostream>
#include <string>
using namespace std;

class LivingBeing {
public:
    virtual ~LivingBeing();

    LivingBeing(string firstName);
    LivingBeing();

    string getFirstName();

    void setFirstName(string firstName);
    
    virtual void showInfo();
    
private:
    string _firstName; 
};

//-------------------------------------------------

class Employee : public LivingBeing {
public:
    ~Employee();

    Employee(string firstName, string surname, double salary);
    Employee();
    Employee(string surname, double salary);
    
    string getSurname();
    void setSurname(string surname);
    
    double getSalary();
    void setSalary(double salary);
    
    void showInfo();

private:
    string _surname;
    double _salary; 
};

//-------------------------------------------------

class Animal : public LivingBeing {
public:

    ~Animal();
    
    Animal(string firstName, double weight, string breed);
    Animal();
    Animal(double weight, string breed);
    
    double getWeight();
    void setWeight(double weight);
    
    string getBreed();
    void setBreed(string breed);
    
    void showInfo();

private:
    double _weight;
    string _breed;
};