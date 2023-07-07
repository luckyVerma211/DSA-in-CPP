#include<iostream>
using namespace std;
int main(){
    char name[40];
    cout<<"Enter the string:";
    cin>>name;
    for(int i=0;name[i]!='\0';i++){
        if(name[i]>='a' && name[i]<='z')
            name[i]-=32;
        else if(name[i]>='A' && name[i]<='Z')
            name[i]+=32;
    }
    cout<<"The result is:"<<name<<endl;
    return 0;
}