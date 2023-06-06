#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int clss;
    char section;
    int marks_math;
    int marks_eng;
};
int main()
{
    int n;
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].clss >> students[i].section >> students[i].marks_math >> students[i].marks_eng;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << students[i].name << " " << students[i].clss << " " << students[i].section << " " << students[i].marks_math << " " << students[i].marks_eng << endl;
    }
    return 0;
}
