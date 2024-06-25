#include<iostream>
using namespace std;
class Customer{
  string name;
  int acc_num,balance;
  static int total_customer;
  static int total_balance;
  public:
    
    Customer(string name,int acc_num,int balance){
      this->name=name;
      this->acc_num=acc_num;
      this->balance=balance;
      total_customer+=1;
      total_balance+=balance;
    }
    //Static Member Function
    static void access_static(){
      cout<<"Total Customer: "<<total_customer<<endl;
      cout<<"Total Amount:"<<total_balance<<endl;
    }
    void deposit(int amount){
      if(amount>0){
        balance+=amount;
        total_balance+=amount;
      }
    }
    void withdraw(int amount){
      if(amount<=balance && amount>0){
        balance-=amount;
        total_balance-=amount;
      }
    }
    void display(){
      cout<<name<<" "<<acc_num<<" "<<balance<<" "<<total_customer<<endl;
    }
    void display_total(){
      cout<<"Total Customer: "<<total_customer;
    }
};
int Customer::total_customer=0;
int Customer::total_balance=0;
int main(){
  Customer A("Lucky",12035,1000);
  //A.display();

  Customer B("Adarsh",12038,1500);
  //B.display();

  Customer C("Anish",12045,2500);
  //C.display();
  
  //Directly accessing static memeber
  //Customer::total_customer=10;

  Customer::access_static();
  A.deposit(900);
  Customer::access_static();
  B.withdraw(500);
  Customer::access_static();
  //A.display_total();
  return 0;
}