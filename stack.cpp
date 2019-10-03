#include<iostream>
#include<conio.h>
#include<stack>

using namespace std;

stack <int> s1;

void show_stack(){
    while(!s1.empty()){
        cout<< s1.top()<<endl;
        s1.pop();
    }
}

void inserting_element(){
    int data;
    for(int i = 0;i<10;i++){
        cin>> data;
        s1.push(data);
    }
}


int main(){
    inserting_element();
    cout<<"Below is the displaying of the data"<<endl;
    show_stack();
getch();
return 0;
}
