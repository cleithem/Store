#include "Customer.h"

using namespace std;

Customer::Customer() {

}

Customer::Customer(string in_name){
  name = in_name;
  string cart = "Empty";
}

void Customer::addToCart(string in_item){
  
  cart.push_back(in_item);
  cout << "The contents of the cart are: " << endl;
  for (auto item : cart) {
    cout << item << endl;
  }
  cout << endl;
}
void Customer::checkout(){
  cout << "Thank you for shopping with us!" << endl;
}
