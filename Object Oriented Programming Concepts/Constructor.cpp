#include<iostream>
using namespace std;
class Customer{
  string name;
  int acc_no;
  int balance;
  int *roi;

  public:
    Customer(){  //Default Constructor
      cout<<"Constructor is called\n";
      name="Rohit";
      acc_no=101234;
      balance=5000;
      roi=new int[100];
    }
    Customer(string name,int acc_no,int balance){ //Parametrized Constructor
      this->name=name;
      this->acc_no=acc_no;
      this->balance=balance;
    }
    //Constructor Overloading
    Customer(string a,int b){
      name=a;
      acc_no=b;
      balance=100;
    }
    //Inline Constructor
    /*inline Customer(string a,int b,int c):name(a),acc_no(b),balance(c){}*/
    //Copy Constructor
    Customer(Customer &D){
      name=D.name;
      acc_no=D.acc_no;
      balance=D.balance;
    }
    void display(){
      cout<<name<<" "<<acc_no<<" "<<balance<<endl;
    }
    //Destructor
    ~Customer(){
      cout<<"Destructor is called\n";
    }
}; 
int main(){
  Customer A("Amiteshwar",101230,3000),B("Lucky",101235,2000),C("Adarsh",101225);
  Customer D(A);
  A.display();
  B.display();
  C.display();
  D.display();
  Customer E;
  E=B;
  E.display();
  return 0;
}
