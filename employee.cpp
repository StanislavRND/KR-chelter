#include "employee.h"


Shelter::~Shelter() {}

Shelter::Shelter(string firstName, string surname, double salary, int quantityAnimalsControl)
    : Employee(firstName, surname, salary), _quantityAnimalsControl(quantityAnimalsControl) {}

Shelter::Shelter() : Shelter("не определено", "не определено", 0.0, 0) {}

Shelter::Shelter(int quantityAnimalsControl) 
    : Employee("не определено", "не определено", 0.0), _quantityAnimalsControl(quantityAnimalsControl) {}

int Shelter::getQuantityAnimalsControl() {
    return _quantityAnimalsControl;
}

void Shelter::setQuantityAnimalsControl(int quantityAnimalsControl) {
    _quantityAnimalsControl = quantityAnimalsControl;
}

void Shelter::showInfo() {
    Employee::showInfo(); 
    cout << "Количество управляемых животных: " << _quantityAnimalsControl << endl;
}



Veterinarian::~Veterinarian() {}

Veterinarian::Veterinarian(string firstName, string surname, double salary, int quantityAnimalsCured)
    : Employee(firstName, surname, salary), _quantityAnimalsCured(quantityAnimalsCured) {}

Veterinarian::Veterinarian() : Veterinarian("не определено", "не определено", 0.0, 0) {}

Veterinarian::Veterinarian(int quantityAnimalsCured) 
    : Employee("не определено", "не определено", 0.0), _quantityAnimalsCured(quantityAnimalsCured) {}

int Veterinarian::getQuantityAnimalsCured() {
    return _quantityAnimalsCured;
}

void Veterinarian::setQuantityAnimalsCured(int quantityAnimalsCured) {
    _quantityAnimalsCured = quantityAnimalsCured;
}

void Veterinarian::showInfo() {
    Employee::showInfo();
    cout << "Количество вылеченных животных: " << _quantityAnimalsCured << endl;
}
