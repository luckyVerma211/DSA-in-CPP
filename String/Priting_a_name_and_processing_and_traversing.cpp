#include<iostream>
using namespace std;
int main(){
    char a[20];
    cout<<"Enter the name:";
    cin>>a;
    cout<<"Hello "<<a<<endl;
    for(int i=0;a[i]!='\0';i++)
        cout<<a[i]<<endl;
    return 0;
}