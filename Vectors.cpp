#include<iostream>
#include<conio.h>
#include<algorithm>
#include<vector>
 
using namespace std;

int main(){
    vector <int> v1;
    int k;
    for(int i = 0;i<2;i++){
        cin>> k;
        v1.push_back(k);
    }
while(!v1.empty()){
    cout<<v1;
}

getch();
return 0;
}