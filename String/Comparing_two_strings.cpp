#include<iostream>
using namespace std;
int main(){
    char str1[40],str2[40];
    int n1=0,n2=0,n=0;
    cout<<"Enter the first string:";
    cin>>str1;
    cout<<"Enter the second string:";
    cin>>str2;
    for(n1=0;str1[n1]!='\0';n1++);
    for(n2=0;str2[n2]!='\0';n2++);
    if(n1!=n2)
        cout<<"The strings are not equal!!"<<endl;
    else{
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(i==j){
                    if(str1[i]==str2[j])
                        n++;
                    else
                        break;
                }        
            }
        }
        if(n==n1 || n==n2)
            cout<<"The strings are equal!!"<<endl;
        else
            cout<<"The strings are not equal!!"<<endl;
    }
    return 0;
}
