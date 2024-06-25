#include<iostream>
using namespace std;
class Engineer{
  public:
    string specialization;
  Engineer(){
    cout<<"Engineer"<<endl;
  }
  void work(){
    cout<<"I have specialization in "<<specialization<<endl;
  }
};
class Youtuber{
  public:
    int subscriber;
  Youtuber(){
    cout<<"Youtuber"<<endl;
  }
  void content_creator(){
    cout<<"I have a subscriber base of "<<subscriber<<endl;
  }
};
class CodeTeacher:public Youtuber,public Engineer{
  public:
    string name;
  CodeTeacher(){
    cout<<"CodeTeacher"<<endl;
  }
  CodeTeacher(string name,string specialization,int subscriber){
    this->name=name;
    this->specialization=specialization;
    this->subscriber=subscriber;
  } 
  void showcase(){
    cout<<"My name is "<<name<<endl;
    work();
    content_creator();
  }
};
int main(){
  CodeTeacher A;
  return 0;
}