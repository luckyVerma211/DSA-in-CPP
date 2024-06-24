#include<iostream>
using namespace std;
class Area{
  public:
    int calculateArea(int r){ //Area of circle
      return 3.14*r*r;
    }
    int calculateArea(int l,int b){ //Area of Rectangle
      return l*b;
    }
};
int main(){
  Area A;
  cout<<A.calculateArea(7)<<endl;
  cout<<A.calculateArea(10,9)<<endl;
  return 0;
}