#include <iostream>
#include <string>


using namespace std;

class Person{
    private:
        string name;
        int age;
        bool isGood;

    public:
        Person(string name){
            name = name;

           cout << "Constructor running...";
        }
    
    
    ~Person(){
        cout << "Destructor ran.......";
    }
};

int main(void){
    Person x("jonathan felicity");
    return 0;
}