#include <iostream>
#include <conio.h>
#include <algorithm>

using namespace std;

/*class example{
private:
    int a;
public:
    ~example(){
        int a = 5;
        cout<<"The Value of a is"<<a<<endl;
    }
    void disp(){
        cout<<"The Value of a is"<<a<<endl;
    }
};*/

//Here the example of the destructor which destroys itself when the data is passed.
//so the a = 3 is the garbage value which is displayed

class example{
private:
    int a,b;
public:
    example(){
        a = 5;
        b = 10;
    }
    void disp(){
        cout<< a<<endl<< b<<endl;
    }
};
/* The redeclaration of the datatype will not be there (in the constructor part) */

                                                            /*
    below is the application of the scope resolution operator
                                                            */


class demo{
    private:
        int a,b;
    public:
    demo(){
        
    }

};


int main(){
    example e;
    //e.~example();
    cout<<"Below is the executed fx of disp();"<<endl;
    e.disp();
    getch();
return 0;
}