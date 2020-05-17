#include "Employee.h"
#include <iostream>

using namespace std;

class Manager : public Employee {
private:
  int managedEmployees;
public:
  Manager(string in_name, double in_salary, 
    int in_managedEmployees);
  void openStore();
  void holdMeeting();
};
