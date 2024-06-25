#include<iostream>
using namespace std;
class Human{
  public:
    string name;
  void display(){
    cout<<"My name is "<<name<<endl;
  }

};
class Engineer:public virtual Human{
  public:
    string specialization;
  void work(){
    cout<<"I have specialization in "<<specialization<<endl;
  }
};
class Youtuber:public virtual Human{
  public:
    int subscriber;
  
  void content_creator(){
    cout<<"I have a subscriber base of "<<subscriber<<endl;
  }
};
class CodeTeacher:public Youtuber,public Engineer{
  public:
    int salary;

  CodeTeacher(string name,string specialization,int subscriber,int salary){
    this->name=name;
    this->specialization=specialization;
    this->subscriber=subscriber;
    this->salary=salary;
  } 

  void display(){
    cout<<name<<" "<<specialization<<" "<<subscriber<<" "<<salary<<endl;
  }
  
};
int main(){
  CodeTeacher A("Lucky","ECE",100,2000);
  Human H;
  H.name="Adarsh";
  H.display();
  A.display();
  return 0;
}