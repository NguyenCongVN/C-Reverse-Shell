#include <iostream>
#include<string>
#include <iomanip>
using namespace std;
struct STUDENT
{
   string code;
   string fullname;
   float attendance_score;
   float midtern_exam_score;
   float final_exam_score;
   float coure_grade;
};

void print_student(struct STUDENT student)
{
    cout << "Student code: " << student.code << "\n";
    cout << "Student fullname: " << student.fullname << "\n";
    cout << "Student attendance_score: "<< student.attendance_score << "\n";
    cout << "Student midtern_exam_score: " << student.midtern_exam_score << "\n";
    cout << "Student final_exam_score: " << student.final_exam_score << "\n";
    cout << "Student coure_grade: " << student.coure_grade << "\n";
}

int enter_list_student(int n , struct STUDENT students[])
{
    if(n < 1 || n > 100)
    {
        cout << "Hay chon so sinh vien trong khoan tu 1 den 100\n";
        return 1;
    }
    for (int i=0; i<n; i++)
    {
        cout<<"Enter the code of student "<<i+1<<": ";
        cin>>students[i].code;
        cin.ignore();
        cout<<"Name of student "<< i+1 <<": ";
        getline(std::cin,students[i].fullname);
        cout<<"Attendance score "<<i+1<<": ";
        while(true)
        {
            cin>>students[i].attendance_score;
            if(students[i].attendance_score < 0 || students[i].attendance_score > 10)
            {
                cout << "Error: score must be in range 0 to 10 ! Reenter:";
                continue;
            }
            break;
        }
        cout<<"Midterm "<<i+1<<": ";
        while(true)
        {
            cin>>students[i].midtern_exam_score;
            if(students[i].midtern_exam_score < 0 || students[i].midtern_exam_score > 10)
            {
                cout << "Error: score must be in range 0 to 10 ! Reenter:";
                continue;
            }
            break;
        }
        cout<<"Final  "<<i+1<<": ";
        while(true)
        {
            cin>>students[i].final_exam_score;
            if(students[i].final_exam_score < 0 || students[i].final_exam_score > 10)
            {
                cout << "Error: score must be in range 0 to 10 ! Reenter:";
                continue;
            }
            break;
        }
    }
}

void sort_students_by_full_name(struct STUDENT students[] , int number_student)
{
    for(int i = 0; i < number_student ; i++)
    {
        for(int j = 0 ; j < number_student ; j++)
        {
            if(students[i].fullname < students[j].fullname)
            {
                STUDENT temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

void cal(struct STUDENT students[], int N)
{
    for (int i=0; i<N; i++)
    {
        students[i].coure_grade = 0.1* students[i].attendance_score + 0.2 * students[i].midtern_exam_score + 0.7 * students[i].final_exam_score;
    }
}

void print_table(struct STUDENT students[])
{
    cout << "==================================================================================="
    cout << "|" << std::right << "Hi there!" << std::endl;
    std::cout << std::setw(20) << std::right << "shorter" << std::endl;
//    string array[] = ["code" , "fullname" , "attendance_score" , "midtern_exam_score"];
//    for (int temp = 1; temp <= 6; temp++) {
//        cout << "----";
//        cout << array[temp];
//    }
//    printf("\n");
}


int main() {

   struct STUDENT student = {"123" , "Le Van Phu" , 5 , 6 , 7 , 10};
   print_student(student);
   int n;

   struct STUDENT students[200];
//   while(true)
//   {
//       cout << "Nhap vao so luong sinh vien can them:";
//       cin >> n;
//       if(enter_list_student(n , students) != 1)
//        break;
//   }


   print_table(students);

//   for(int i = 0 ; i < n ; i++)
//   {
//       cout << "Student " << i + 1 << "\n";
//       print_student(students[i]);
//   }

//    sort_students_by_full_name(students , n);
//
//    for(int i = 0 ; i < n ; i++)
//    {
//       cout << "Student " << i + 1 << "\n";
//       print_student(students[i]);
//    }

//    cal(students , n);
//
//    for(int i = 0 ; i < n ; i++)
//    {
//       cout << "Student " << i + 1 << "\n";
//       print_student(students[i]);
//    }
}
