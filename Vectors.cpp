#include <iostream>
#include <conio.h>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

//below is the function of displaying the vector using iterators
void vector_disp(){
    vector <int> v1;
    for(int i=0;i<5;i++){
        v1.push_back(i);
    }
    vector<int>::iterator it; 
    for(it = v1.begin(); it !=v1.end();it++){
        cout << *it << endl;
    }
}
// iterator are the pointer type variable which point the address of the element to the respective container
// vector, maps, set.. are some examples of the container
int main(){
    vector_disp();
    getch();
    return 0;
}


