#include <iostream>
#include <vector>
#include "Student.h"

using namespace std;

int main() {

    vector<Student> students;
    string names[5] = {"Kowalski", "Nowak", "Morawiecki", "Duda", "Gniecki"};
    int numbers[5] = {1000, 1001, 1002, 1003, 1004};
    float grade[5] = {3.0, 3.2, 4.5, 6.25, 5};


    for (int i = 0; i < 5; ++i) {
        students.emplace_back(names[i], numbers[i], grade[i]);
    }

    sort(students.begin(), students.end(), [](const Student& a, const Student& b){
        return a.getName() < b.getName();
    });


    cout << "Sortowanie wedlug nazwiska:" << endl;

    for (int i = 0; i < students.size(); ++i) {
        cout << students[i].getName() << " " << students[i].getNumber() << endl;
    }

    sort(students.begin(), students.end(), [](const Student& a, const Student& b){
        return a.getNumber() < b.getNumber();
    });

    cout << endl << endl << "Sortowanie wedlug numeru albumu" << endl;

    for (int i = 0; i < students.size(); ++i) {
        cout << students[i].getName() << " " << students[i].getNumber() << endl;
    }

    sort(students.begin(), students.end(), [](const Student& a, const Student& b){
        return a.getGrade() > b.getGrade();
    });

    cout << endl << endl << "Sortowanie wedlug sredniej ocen" << endl;

    for (int i = 0; i < students.size(); ++i) {
        cout << students[i].getName() << " " << students[i].getGrade() << endl;
    }

    return 0;
}
