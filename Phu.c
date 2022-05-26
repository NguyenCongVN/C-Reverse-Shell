#include <iostream.h>
using namespace std;
struct STUDENT
{
   char code[10];
   char fullname[100];
   float attendance_score;
   float midtern_exam_score;
   float final_exam_score;
   float coure_grade;
};

void print_student(struct STUDENT student)
{
    cout << "Student code: " << student.code << "\n";
    cout << "Student fullname: " << student.fullname << "\n";
    cout << "Student attendance_score: << student.attendance_score << "\n";
    cout << "Student midtern_exam_score: " << student.midtern_exam_score << "\n";
    cout << "Student final_exam_score: " << student.final_exam_score << "\n";
    cout << "Student coure_grade: " << student.coure_grade << "\n";
}

void enter_list_student(int n)
{
    if(n < 1 || n )
    struct STUDENT students[n];
    for(int i =0 ; i < n ; i++)
    {

    }
}

int main() {

   struct STUDENT student = {"123" , "Le Van Phu" , 5 , 6 , 7 , 10};
   print_student(student);
}
