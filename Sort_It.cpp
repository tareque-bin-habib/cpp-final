#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int marks_math;
    int marks_eng;
    int marks_total;
};

bool compare(Student first, Student second)
{
    if (first.marks_total != second.marks_total)
    {
        return first.marks_total > second.marks_total;
    }
    else
    {
        return first.id < second.id;
    }
}
int main()
{
    int n;
    cin >> n;

    Student students[100];

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id >> students[i].marks_math >> students[i].marks_eng;
        students[i].marks_total = students[i].marks_math + students[i].marks_eng;
    }

    sort(students, students + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << " " << students[i].marks_math << " " << students[i].marks_eng << endl;
    }

    return 0;
}
