#include <iostream>
//#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <iterator>
#include <conio.h>

using namespace std;

//below is the func of the manually insert of the element in the map

void Manually_insert(void){
    map<int,int> m1;
    m1.insert({1,2});
    m1.insert({3,4});   
    m1.insert({5,6});   
    m1.insert({7,8});   
    m1.insert({9,10});    
    m1.insert({11,12});    
    m1.insert({13,14});   
    m1.insert({14,15});   
}
void disply_map(){
    map<int,int> m1;
    map<int,int> ::iterator l;
    while(!m1.end()){
        cout<<l->first<<endl<<l->second;
    }
}
int main(){
    Manually_insert();
    disply_map();
}
int Automatic_algo(){
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