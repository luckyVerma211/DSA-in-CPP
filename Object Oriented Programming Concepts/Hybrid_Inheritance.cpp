#include<iostream>
using namespace std;
class Student{
  public:
    void print(){
      cout<<"I am Student\n";
    }
};
class Male{
  public:
    void Male_print(){
      cout<<"I am Male\n";
    }
};
class Female{
  public:
    void Female_print(){
      cout<<"I am Female\n";
    }
};
class Boy:public Student,public Male{
  public:
    void Boy_print(){
      cout<<"I am Boy\n";
    }
};
class Girl:public Student,public Female{
  public:
    void Girl_print(){
      cout<<"I am Girl\n";
    }
};
int main(){
  Girl G;
  G.Girl_print();
  G.print();
  Boy B;
  B.Male_print();
  return 0;
}