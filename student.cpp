#include "student.h"
namespace hwanghyeonseo2593344
{
    struct student
    {
        int id{}; //중괄호!!(소괄호X-함수의 선언으로 인식)
        char grade{};
    };
    student inputStudent()
    {

        student s{};
        std::cout<<"Enter student id: ";
        std::cin>>s.id;
        std::cout<<"Enter student grade: ";
        std::cin>>s.grade;
        return s;
    }
    void printStudent(const student &s) //pass-by-reference
    {
        std::cout<<"ID: "<<s.id<<std::endl;
        std::cout<<"GRADE"<<s.grade<<std::endl;
    }
}