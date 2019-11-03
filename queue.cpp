#include<iostream>
#include<conio.h>
#include<algorithm>
#include<queue>
#include<string>
#include<stddef.h>

using namespace std;



//Below are the global variable of the code
queue <int> q;

void Show_queue(){
    while (!q.empty()){
        /* code */
        cout<<q.front()<<endl;
    }
}

void enqueue(){
    int data;
    for(int i = 0;i<10;i++){
        cin>>data;
        q.push(data);
    }
}


void dequeue(){
    q.pop();
}

int main(){
    enqueue();


}
