#include<iostream>
using namespace std;
class Person{
  protected:
    string name;
    int age;
  public:
    void introduce(){
      cout<<"Hello my name is: "<<name<<endl;
    }
};
class Employee: public Person{
  protected:
    int salary;
  public:
    void monthly_salary(){
      cout<<"My monthly salary is: "<<salary<<endl;
    }
};
class Manager: public Employee{
  public:
    string dept;
  Manager(string name,int age,int salary,string dept){
    this->name=name;
    this->age=age;
    this->salary=salary;
    this->dept=dept;
  }
  void work(){
    cout<<"I am leading the department "<<dept<<endl;
  }  
};
int main(){
  Manager M("Lucky",19,2000,"Finance");
  M.introduce();
  M.monthly_salary();
  M.work();
  return 0;
}