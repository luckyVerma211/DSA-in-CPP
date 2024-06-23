#include<iostream>
using namespace std;
class Customer{
  string name;
  int balance,age;

  public:
    Customer(string name,int balance,int age){
      this->name=name;
      this->balance=balance;
      this->age=age;
    }
    void deposit(int amount){
      if(amount>0)
        balance+=amount;
      else
        cout<<"Invalid Amount!!"<<endl;
    }
    void display(){
      cout<<"NAME: "<<name<<endl;
      cout<<"BALNACE: "<<balance<<endl;
      if(age>=18 && age<=100)
        cout<<"AGE: "<<age<<endl;
      else  
        cout<<"Invalid age!!"<<endl;
    }
};

int main(){
  Customer A("Lucky",1000,19);
  A.display();
  Customer B("Adarsh",2000,10);
  B.display();
  A.deposit(-100);
  return 0;
}