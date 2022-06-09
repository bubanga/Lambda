#ifndef LAMBDA_STUDENT_H
#define LAMBDA_STUDENT_H

#include <iostream>

using namespace std;

class Student {
private:
    string name;
    int number;
    float grade;

public:
    Student(string _name, int _number, float _grade);

    const string &getName() const;

    int getNumber() const;

    float getGrade() const;
};


#endif //LAMBDA_STUDENT_H
