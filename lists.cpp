#include<iostream>
#include<list>
#include<algorithm>
#include<conio.h>
using namespace std;

/* Below are the global Variable that are used in this script */

list <int> l1;
list <int>::iterator it;

void display(){
    for (it = l1.begin();it != l1.end(); it++){
        cout<<*it<<endl;
    }
}

void Manual_data(){
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(50);
}

void reverse(){
    l1.reverse();
}

void Del_element(){
    l1.pop_back();
}

int main(){
    Manual_data();
    display();
    cout<<"After Entering Manual Datas"<<endl;
    reverse();
    display();
    cout<<"After reversing the data in the list"<<endl;
    Del_element();
    display();
    cout<<"After deleting the data in the list"<<endl;
    // The deletion of the data will be always performed with the last element in the list //
getch();
return 0;
}