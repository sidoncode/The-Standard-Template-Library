#include<iostream>
#include<conio.h>
#include<algorithm>
#include<math.h>
#include<cmath>

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
inline void strlenfx(){
    string s = "Example";
    int i;
    int len;
    for(i=0;s[i];i++){
           
    }
}
int main(){
    //calc_gcd();
    strlenfx();
    getch();
    return 0;

}
