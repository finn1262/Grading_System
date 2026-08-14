#include <iostream>

using namespace std;

int main()
{
    cout << "Activity 1" << endl;
    cout << "Grading System" << endl << endl;

    int sem1,sem2,sum,grade;




    cout << "What is your 1st Semester Grade? ";
    cin >> sem1;

    cout << "What is your 2nd Semester Grade? ";
    cin >> sem2;

    sum = sem1 + sem2;
    grade = sum / 2;

    cout << "Final Grade: " << grade << endl;
    return 0;
}
