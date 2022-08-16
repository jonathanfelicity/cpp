#include <iostream>

using namespace std;

string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
int main(void){
    const unsigned int day {3};
    switch(day){
        case 1:
            cout << days[0];
        break;

        case 2:
            cout << days[1];
        break;

        case 3:
            cout << days[2];
        break;

        case 4:
            cout << days[3];
        break;


        case 5:
            cout << days[4];
        break;

        case 6:
            cout << days[5];
        break;

        case 7:
            cout << days[6];
        break;

        default:
            cout << "Invalid day of the week";
    }
    return 0;
}