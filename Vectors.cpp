#include <iostream>
#include <conio.h>
#include <algorithm> //for the upperbound and lower bound
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
void Upper_lower(){
    vector <int> v1;
    for(int i = 0;i<5;i++){
        v1.push_back(i);
    }
    vector<int> ::iterator upper,lower;
    lower = lower_bound(v1.begin(),v1.end(),4);
    upper = upper_bound(v1.begin(),v1.end(),4);
    cout<< "The lower bound at the position 4 is "<<(lower-v1.begin());
    cout<<endl;
    cout<<"The upper bound at the position 4 is"<<(upper - v1.begin());
}

// iterator are the pointer type variable which point the address of the element to the respective container
// vector, maps, set.. are some examples of the container
int main(){
    //vector_disp();
    Upper_lower();
    getch();
    return 0;
}


