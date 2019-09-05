#include <iostream>
#include <algorithm>
#include <map>
#include <iterator>
#include <conio.h>

using namespace std;

int main(){

map <int,int> m1;
map<int,int> ::iterator l;
for(int i=0; i<10;i++){
    int k1,k2;
    cout<<"Enter the first element of the map"<<endl;
    cin>>k1;
    cout<<"Enter the 2nd element of the map"<<endl;
    cin>> k2;
    m1.insert(pair<int,int>(k1,k2));
}
// l->first = this will access the value of the first "int" datatype
// l->second = this will access the value of the second "int" datatype
for(l = m1.begin(); l!= m1.end();l++)
    {cout<<'\t'<<l->first<<'\t'<<l->second<<endl;}

getch();
return 0;
}