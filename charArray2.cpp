#include<iostream>
using namespace std;
int main(){
    char name[1000];
    cout<<"Enter your name : ";
    int i=0;
    while(1){
        cin name[i];
        if(name[i] = '#')break;
        i++;
    }
    i=0;
    cout<<"The name you have just enterd is "<<endl;

    while(name[i]!='#'){
        cout<<name[i];
    }
}
