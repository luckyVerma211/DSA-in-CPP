#include<iostream>
using namespace std;
class Human{
  private:
    string Category;
  protected:
    string name;
    int age,weight;
};
class Student: private Human{
  private:
    int roll_num,fees;
  public:
    Student(string name,int age,int roll_num,int weight){
      this->name=name;
      this->age=age;
      this->roll_num=roll_num;
      this->weight=weight;
    }
    void display(){
      cout<<name<<" "<<age<<" "<<roll_num<<" "<<weight<<endl;
    }
};
int main(){
  Student A("Lucky",19,147,55);
  A.display();
  return 0;
}