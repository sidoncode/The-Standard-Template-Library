#include<iostream>
#include<conio.h>
#include<algorithm>
#include<math.h>
#include<cmath>
using namespace std;
/*int main(){
  //sorting algorithm
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
//g++ slt.cpp -o slt.exe
int main(void){
    int N;
    int Number_of_digits_N;
    cin>> N;
    Number_of_digits_N=floor(log10(N)) + 1;  
    cout<<Number_of_digits_N<<endl;
getch();
return 0;

}