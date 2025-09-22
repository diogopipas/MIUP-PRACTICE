#include <iostream>
using namespace std;

char numberToLetter(double average){
    if(average >= 90){
        return 'A';
    }
    else if(average >= 80){
        return 'B';
    }
    else if(average >= 70){
        return 'C';
    }
    else if(average >= 60){
        return 'D';
    }
    return 'F';
}


int main(){
    int gradeCount, grade, sum = 0;
    cout << "How many grades? (Between 1-5 grades) \n";
    cin >> gradeCount;
    while(gradeCount < 1 || gradeCount > 5){
        cout << "Invalid number of grades, try again\n";
        cin >> gradeCount;
    }
    for(int i = 0; i < gradeCount; i++){
        cout << "Grade " << i + 1 << ": ";
        cin >> grade;
        while(grade < 0 || grade > 100){
            cout << "Invalid grade, keep it between 0-100\n";
            cout << "Grade " << i + 1 << ": ";
            cin >> grade;
        }
        sum += grade;
    }
    double average = sum/gradeCount;
    cout << "Your average is: " << numberToLetter(average) << "\n";
    return 0;
}