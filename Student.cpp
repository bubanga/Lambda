#include "Student.h"

Student::Student(string _name, int _number, float _grade) {
    this->name = _name;
    this->number = _number;
    this->grade = _grade;
}

const string &Student::getName() const {
    return this->name;
}

int Student::getNumber() const {
    return this->number;
}

float Student::getGrade() const {
    return this->grade;
}


