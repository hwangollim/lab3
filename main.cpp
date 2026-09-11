#include "student.h"
int main()
{
    using namespace std;
    using namespace hwanghyeonseo2593344;

    student s1{inputStudent()};
    student s2{inputStudent()};

    printStudent(s1);
    printStudent(s2);


    return 0;
}