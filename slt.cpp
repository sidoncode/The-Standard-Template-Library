#include <iostream>
#include <conio.h>
#include <algorithm>
#include <math.h>
#include <cmath>

using namespace std;

/*int main(){
  //sorting algorithm
  //Here the number userdefined is 10
  //if it is not defined as 10 then we have to manually insert the number;
  //like- int a[]  ={1,5,16,32,6,8,26,46,26,246};{after this statement the "sizeof" operator will be encounter}
int a[10];
for(int i=0;i<10;i++){
    cin>> a[i];}
int n = sizeof(a) / sizeof(a[0]);
// here is the sorting fx begin
sort(a,a+n);
for(int i=0;i<10;i++){
    cout<< a[i];
}
getch();
return 0;
}*/
//g++ slt.cpp -o slt.exe //The Time-Complexity//

void count_the_digits(){
    int N;
    int Number_of_digits_N;
    cin>> N;
    Number_of_digits_N=floor(log10(N)) + 1;
    cout<<Number_of_digits_N<<endl;
}
void calc_gcd(){
    int x,y;
    int result;
    cin>>x>>y;
    result = __gcd(x, y);
    cout<<result<<endl;
}
//Avoid using strlen for the calculation of the string//
//below is the algorithm for the finding the length of the string.
//which is yet to be commited
inline void strlenfx(){
    string s = "Example";
    int i;
    int len;
    for(i=0;s[i];i++){

    }
}
namespace first{
    void func(){
        cout<<"The first func has been executed "<<endl;
    }
}
namespace second{
    void func(){
        cout<<"The second func has been executed "<<endl;
    }
}

namespace animal{
    void sample_func(){
        cout<<"Animal namespace has been executed"<<endl;        
    }
    namespace mammals{
        void sample_func(){
            cout<<"Mammals namespace has been executed"<<endl;
        }
    }
}
// to access members of namespace 2(Namespace mammals)
// using namespace namespace_name1::namespace_name2;


//Here name1 = animal ;; name2  = mammals


// to access members of namespace:name1
// using namespace namespace_name1;
// for this particular example we will do -- "using namespace animal::mammals;"

using namespace animal::mammals;
int main(){
    //calc_gcd();
    //strlenfx();
    //first::func(); //calling the first namespace with the first func(); with the scope resolution operator
    sample_func();

    getch();
    return 0;
}

//below is the example of the use of "and" operator which is the replacement of the "&&"
/* #include<iostream>

using namespace std;

int main(){
int a = 5;
if(a <2 and 10>a)
    cout<<"executed succesfully"<<endl;
getch();
return 0;
}*/
