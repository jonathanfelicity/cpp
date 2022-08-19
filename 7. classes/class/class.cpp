#include <iostream>
#include <string>

using namespace std;

class Person{
    int age {0};
    public:
        int addOne(){
            return age++;
        }
};

int main(void){
    Person one;
    int y = one.addOne();
    cout << y;
    return 0;
}