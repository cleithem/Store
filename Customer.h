#include "Person.h"
#include <iostream>
#include <vector>
using namespace std;

class Customer : public Person{
public:
  Customer();
  Customer(string in_name);
  vector <string> cart;
  void addToCart(string in_item);
  void checkout();
};

