#include<iostream>
using namespace std;
class Human{
  protected:
    string name;
    int age;
  public:
    Human(string name,int age){
      this->name=name;
      this->age=age;
    }
    void display(){
      cout<<name<<" "<<age<<" "<<endl;
    }
    void work(){
      cout<<"I am Working"<<endl;
    }
};
class Student:public Human{
  int roll_num,fees;
  public:
    Student(string name,int age,int roll_num,int fees):Human(name,age){
      this->roll_num=roll_num;
      this->fees=fees;
    }
    void display(){
      cout<<name<<" "<<age<<" "<<roll_num<<" "<<fees<<endl;
    }
};
class Teacher:public Human{
  int salary;
  public:
  Teacher(string name,int age,int salary):Human(name,age){
    this->salary=salary;
  }
  void display(){
    cout<<name<<" "<<age<<" "<<salary<<endl;
  }
};
int main(){
  Student A("Lucky",19,147,99);
  Teacher B("Mohit",23,99);
  A.display();
  B.display();
  return 0;
}