#ifndef Student_hpp
#define Student_hpp
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    string lastName;
    int curs;
public:
    Student();
    Student(string _name,string _lastName,int _curs);
    void ControlFuncriontSortName(std::vector<Student>& temp);
    void ControlFuncriontSortLastName(std::vector<Student>& temp);
    void ControlFuncriontSortCurs(std::vector<Student>& temp);
    friend ostream& operator << (ostream &s, Student & st);
    //GET METHODS
    string GetName();
    string GetLastName();
    int GetCurs();
    //SET METHODS
    void SetName(string _name);
    void SetLastName(string _lastName);
    void SetCurs(int _curs);
};
#endif /* Student_hpp */
