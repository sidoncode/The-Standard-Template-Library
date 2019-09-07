#include <iostream>
#include <conio.h>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

//below is the fx of displaying the vector using iterators
void vector_disp(){
    vector <int> v1;
    for(int i=0;i<5;i++){
        v1.push_back(i);
    }
    vector<int>::iterator it; 
    for(it = v1.begin(); it !=v1.end();it++) {
        cout << *it << endl;
    }
}


int main(){
    vector_disp();
    getch();
    return 0;
}