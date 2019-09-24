#include<iostream>
#include<algorithm>
#include<conio.h>

using namespace std;

class demo{
    private:

    public:
    demo(){
        cout<<"Constructor is Called\n";
    }
    ~demo(){
        cout<<"Destructor is Called\n";
    }
};

int main(){
     
cout<<"executed\n";
demo d1; // The line which constructor has been called.
//when the object is created the constructor is called automatically
cout<<endl;
cout<<"executed\n";

getch();
return 0;
}