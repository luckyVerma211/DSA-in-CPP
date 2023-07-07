#include<iostream>
using namespace std;
int main(){
    char text[40];
    int i,j,n;
    cout<<"Enter the string:";
    cin>>text;
    for(n=0;text[n]!='\0';n++);
    for(i=0,j=n-1;i<j;i++,j--){
        if(text[i]==text[j])
            continue;
        else
            break;
    }
    if(i>=j)
        cout<<text<<" is a Palindrome!!"<<endl;
    else
        cout<<text<<" is not a Palindrome!!"<<endl;
    return 0;
}