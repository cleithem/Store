#include "Employee.h"

Employee::Employee() {
  
}

Employee::Employee(string in_name, double in_salary) {
  name = in_name;
  salary = in_salary;
}

void Employee::receivePaycheck() {
  cout << name << " received " << salary << endl;
}
