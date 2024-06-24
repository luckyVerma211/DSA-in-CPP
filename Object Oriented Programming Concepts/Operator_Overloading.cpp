#include<iostream>
using namespace std;
class Complex{
  int real,img;
  public:
    Complex(){};
    Complex(int real,int img){
      this->real=real;
      this->img=img;
    };
    void display(){
      cout<<real<<"+i"<<img<<endl;
    }
    Complex operator +(Complex &C){
      Complex ans;
      ans.real=real+C.real;
      ans.img=img+C.img;
      return ans;
    }
    Complex operator -(Complex &C){
      Complex ans;
      ans.real=real-C.real;
      ans.img=img-C.img;
      return ans;
    }
};
int main(){
  Complex A(3,2);
  Complex B(4,6);
  Complex C=A+B;
  C.display();
  Complex D=B-A;
  D.display();
  return 0;
}