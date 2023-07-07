#include<iostream>
using namespace std;
int main(){
    char name[50],upper[50],lower[50],title[50],sentence[50],toggle[50];
    cout<<"Enter the string (assuming underscore(_) as delimiter):";
    cin>>name;
    cout<<endl;
    for(int i=0;name[i]!='\0';i++){
        if(name[i]>='a' && name[i]<='z')
            upper[i]=name[i]-32;
        else
            upper[i]=name[i];
    }
    cout<<"The uppercase of string is:"<<upper<<endl;
    cout<<endl;
    for(int i=0;name[i]!='\0';i++){
        if(name[i]>='A' && name[i]<='Z')
            lower[i]=name[i]+32;
        else
            lower[i]=name[i];
    }
    cout<<"The lowercase of string is:"<<lower<<endl;
    cout<<endl;
    for(int i=0;name[i]!='\0';i++){
        if(i==0){
            if(name[i]>='a' && name[i]<='z')
                sentence[i]=name[i]-32;
            else
                continue;
        }
        else if(name[i]>='A' && name[i]<='Z')
            sentence[i]=name[i]+32;
        else
            sentence[i]=name[i];
    }
    cout<<"The sentencecase of string is:"<<sentence<<endl;
    cout<<endl;
    for(int i=0;name[i]!='\0';i++){
        if(name[i]>='a' && name[i]<='z')
            toggle[i]=name[i]-32;
        else if(name[i]>='A' && name[i]<='Z')
            toggle[i]=name[i]+32;
        else
            toggle[i]=name[i];
    }
    cout<<"The togglecase is:"<<toggle<<endl;
    cout<<endl;
    for(int i=0;name[i]!='\0';i++){
        if(i==0){
            if(name[i]>='a' && name[i]<='z')
                title[i]=name[i]-32;
            else
                continue;
        }
        else if(name[i]>='A' && name[i]<='Z'){
            if(name[i]!='_')
                title[i]=name[i]+32;
        }
        else if(name[i-1]=='_' && name[i]>='a' && name[i]<='z')
            title[i]=name[i]-32;
        else
            title[i]=name[i];
    }
    cout<<"The titlecase is:"<<title<<endl;
    return 0;
}