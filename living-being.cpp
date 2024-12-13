#include "living-being.h"
#include <cmath>

LivingBeing::~LivingBeing() {}

LivingBeing::LivingBeing() : LivingBeing("не определено") {}

LivingBeing::LivingBeing(string firstName) : _firstName(firstName) {}

string LivingBeing::getFirstName() { return _firstName; }

void LivingBeing::setFirstName(string firstName) {
    this->_firstName = firstName;
}


void LivingBeing::showInfo() {
    cout << "Имя: " << _firstName << "\n";
}

//--------------------------------------------------------------------------------

Employee::~Employee() {}


Employee::Employee(string firstName, string surname, double salary)
    : LivingBeing(firstName), _surname(surname), _salary(salary) {}

Employee::Employee() : Employee("не определено", "не определено", 0.0) {}


Employee::Employee(string surname, double salary)
    : LivingBeing("не определено"), _surname(surname), _salary(salary) {}


string Employee::getSurname() {
    return _surname;
}

void Employee::setSurname(string surname) {
    this->_surname = surname;
}

double Employee::getSalary() {
    return _salary;
}

void Employee::setSalary(double salary) {
    this->_salary = salary; 
}

void Employee::showInfo() {
    LivingBeing::showInfo();
    cout << "Фамилия: " << _surname << endl;
    cout << "Зарплата: " << _salary << endl;
}

//--------------------------------------------------------------------------------


Animal::~Animal() {}

Animal::Animal(string firstName, double weight, string breed)
    : LivingBeing(firstName), _weight(weight), _breed(breed) {}

Animal::Animal() : Animal("не определено", 0.0, "не определено") {}


Animal::Animal(double weight, string breed)
    : _weight(weight), _breed(breed) {}


double Animal::getWeight() {
    return _weight;
}

void Animal::setWeight(double weight) {
    this->_weight = weight;
}

string Animal::getBreed() {
    return _breed;
}

void Animal::setBreed(string breed) {
    this->_breed = breed;
}


void Animal::showInfo() {
    LivingBeing::showInfo();
    cout << "Вес животного: " << _weight << " кг" << endl;
    cout << "Порода животного: " << _breed << endl;
}