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
    void work(){
      cout<<"I am working!!"<<endl;
    }

};
class Student: public Human{
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
int main(){
  Student A("Rohit",19,147,99);
  A.display();
  return 0;
}