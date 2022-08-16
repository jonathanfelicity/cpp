#include <iostream>
#include <string>

using namespace std;

string sayHello(string name){
    return "Hello " + name;
}


int main(void){

    string msg = sayHello("John");
    cout << msg;
    return 0;
}