#include "Manager.h"
#include <iostream>

using namespace std;

Manager::Manager(string in_name, double in_salary, int in_managedEmployees) {
    name = in_name;
    salary = in_salary;
    managedEmployees = in_managedEmployees;
}

void Manager::openStore() {
  cout << name << " opened the store!" << endl;
}
