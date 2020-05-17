#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"

#include <iostream>

using namespace std;

class Employee : public Person{
protected:
  double salary;
public:
  Employee();
  Employee(string in_name, double in_salary);
  void receivePaycheck();
  void logHours(double hours);

};

#endif
