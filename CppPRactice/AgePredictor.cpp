#include <iostream>
using namespace std;

int main(){
    string name;
    int age;
    cout << "Insert your name: \n";
    cin >> name;
    cout << "Insert your age: \n";
    cin >> age;
    cout << "Hi " << name << "! You will turn " << age+1 << " next year.\n";
    return 0;
}