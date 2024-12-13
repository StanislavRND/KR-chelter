#include "animal.h" 


Dog::~Dog() {}

Dog::Dog(string firstName, double weight, string breed, bool isService)
    : Animal(firstName, weight, breed), _isService(isService) {}

Dog::Dog() : Dog("не определено", 0.0, "не определено", false) {}

Dog::Dog(bool isService) : Animal("не определено", 0.0, "не определено"), _isService(isService) {}

bool Dog::getIsService() {
    return _isService;
}

void Dog::setIsService(bool isService) {
    _isService = isService;
}

void Dog::showInfo() {
    Animal::showInfo();
    cout << "Является служебной собакой: " << (_isService ? "Да" : "Нет") << endl;
}


Cat::~Cat() {}

Cat::Cat(string firstName, double weight, string breed, string conduct)
    : Animal(firstName, weight, breed), _conduct(conduct) {}

Cat::Cat() : Cat("не определено", 0.0, "не определено", "не определено") {}

Cat::Cat(string conduct) : Animal("не определено", 0.0, "не определено"), _conduct(conduct) {}

string Cat::getConduct() {
    return _conduct;
}

void Cat::setConduct(string conduct) {
    _conduct = conduct;
}

void Cat::showInfo() {
    Animal::showInfo();
    cout << "Поведение: " << _conduct << endl;
}


CatDog::CatDog(string firstName, double weight, string breed, string conduct, bool isService, string dominant)
    : Dog(firstName, weight, breed, isService), Cat(firstName, weight, breed, conduct), _dominant(dominant) {}

CatDog::CatDog() : CatDog("не определено", 0.0, "не определено", "не определено", false, "не определено") {}

CatDog::~CatDog() {}

string CatDog::getDominant() {
    return _dominant;
}

void CatDog::setDominant(string dominant) {
    _dominant = dominant;
}

void CatDog::showInfo() {
    cout << "Имя: " << Dog::getFirstName() << endl; 
    cout << "Вес животного: " << Dog::getWeight() << " кг" << endl; 
    cout << "Порода животного: " << Dog::getBreed() << endl; 
    cout << "Является служебной собакой: " << (getIsService() ? "Да" : "Нет") << endl; 
    cout << "Поведение: " << Cat::getConduct() << endl; 
    cout << "Доминирующее поведение: " << _dominant << endl;
}
