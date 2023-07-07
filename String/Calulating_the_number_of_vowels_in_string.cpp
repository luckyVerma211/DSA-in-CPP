#include<iostream>
using namespace std;
int main(){
    char name[40];
    int vow=0;
    cout<<"Enter the string:";
    cin>>name;
    for(int i=0;name[i]!='\0';i++){
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
            vow++;
        if(name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U')
            vow++;
    }
    cout<<"The number of vowels in the string is:"<<vow<<endl;
    return 0;
}