#include <iostream>
#include "living-being.h"
#include "animal.h"
#include "employee.h"
using namespace std;

int main() {
    LivingBeing person("Иван");

    Dog dog("Рекс", 30.0, "Немецкая овчарка", true);
    cout << "Информация о собаке:" << endl;
    dog.showInfo();
    cout << endl;

    Cat cat("Мурка", 4.0, "Персидская кошка", "игривая");
    cout << "Информация о кошке:" << endl;
    cat.showInfo();
    cout << endl;

    CatDog catDog("Котопес", 5.0, "Смешанная", "ленивый", true, "кот");
    cout << "Информация о котопсе:" << endl;
    catDog.showInfo();
    cout << endl;
    
    Shelter shelterManager("Мария", "Сидорова", 100000.0, 50);
    cout << "Информация о управляющем приютом:" << endl;
    shelterManager.showInfo();
    cout << endl;

    Veterinarian veterinarian("Дмитрий", "Смирнов", 60000.0, 20);
    cout << "Информация о ветеринаре:" << endl;
    veterinarian.showInfo();

    return 0;
}