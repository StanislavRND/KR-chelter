#include <iostream>
#include "123.h"
using namespace std;

int main() {
    LivingBeing person("Иван");

    Employee employee("Алексей", "Петров", 50000.0);
    cout << "Информация о сотруднике:" << endl;
    employee.showInfo();
    cout << endl;

    Animal animal("Барсик", 5.5, "Сибирская кошка");
    cout << "Информация о животном:" << endl;
    animal.showInfo();
    cout << endl;

    return 0;
}