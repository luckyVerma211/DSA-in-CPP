#include<iostream>
using namespace std;
int main(){
    char a[50],b[50],c[50];
    int k=0;
    cout<<"Enter the first string:";
    cin>>a;
    cout<<"Enter the second string:";
    cin>>b;
    for(int i=0;a[i]!='\0';i++)
        c[k++]=a[i];
    c[k++]=' ';
    for(int i=0;b[i]!='\0';i++)
        c[k++]=b[i];
    c[k]='\0';
    cout<<"The string after concatenation is:"<<c<<endl;
    return 0;
}