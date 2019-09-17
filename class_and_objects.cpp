#include <iostream>
#include <conio.h>
#include <algorithm>

using namespace std;

class example{
private:
    int a;
public:
    /*example(){
        a = 5;
    }*/
    ~example(){
       a = 1;
    }
    void disp(){
        cout<< a<<endl;
    }
};

int main(){
    example e;
    e.disp();
    getch();
}