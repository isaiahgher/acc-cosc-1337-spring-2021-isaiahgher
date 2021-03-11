//cpp
#include "decision.h"
#include <iostream>

//Testing Grade with if statement
std::string get_letter_grade_using_if(int grade)
{
    std::string grade_printed = "";
    //Grade is an A
    if (grade >= 90 && grade <= 100)
    {
        grade_printed = "A";
        return grade_printed;
    }
    //Grade is a B
    else if (grade >= 80 && grade <= 89)
    {
        grade_printed = "B";
        return grade_printed;
    }
    //Grade is a C
    else if (grade >= 70 && grade <= 79)
    {
        grade_printed = "C";
        return grade_printed;
    }
    //Grade is a D
    else if (grade >= 60 && grade <= 69)
    {
        grade_printed = "D";
        return grade_printed;
    }
    //Grade is a F
    else if (grade >= 0 && grade <= 59)
    {
        grade_printed = "F";
        return grade_printed;
    }
    else
    {
        //Grade cannot be determine
        auto error_number = "Number entered cannot give Letter Grade";
        std::cout<< error_number;
        return  error_number;
    }
    return 0;
    
}

std::string get_letter_grade_using_switch(int grade)
{
    //Switch statement that takes a parameter and gives a case based on a range
    switch (grade)
    {
        case 90 ... 100:
            return "A";
            break;
        case 80 ... 89:
            return "B";
            break;
        case 70 ... 79:
            return "C";
            break;
        case 60 ... 69:
            return "D";
            break;
        case 0 ... 59:
            return "F";
            break;
        default:
            return "Number entered cannot give Letter Grade";
            break;
        



    }
}


bool is_even(int testNumber)
{
    int math = testNumber % 2;

    if (math == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}