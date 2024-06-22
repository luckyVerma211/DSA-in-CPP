#include<iostream>
using namespace std;
class Customer{
  string name;
  int *data;

  public:
    Customer(){
      name="Amiteshwar";
      cout<<"Constructor call:"<<name<<endl;
    }
    Customer(string name){
      this->name=name;
      cout<<"Constructor: "<<name<<endl;
    }
    ~Customer(){ 
      cout<<"Destructor: "<<name<<endl;
    }
};
int main(){
  Customer A("Lucky"),B("Aman"),C("Anurag");
  Customer *D= new Customer;
  delete D;
  return 0;
}