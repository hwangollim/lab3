#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

namespace hwanghyeonseo2593344
{
    struct student
    {
        int id{}; //중괄호!!(소괄호X-함수의 선언으로 인식)
        char grade{};
    };
    student inputStudent();
    
    void printStudent(const student &s); //pass-by-reference
}