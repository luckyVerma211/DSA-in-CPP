#include<iostream>
using namespace std;
int main(){
    char name[40];
    int count=0;
    cout<<"Enter the string:";
    cin>>name;
    for(int i=0;name[i]!='\0';i++)
        count++;
    cout<<"The length of the string is:"<<count<<endl;
    return 0;
}