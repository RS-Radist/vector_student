#include "Student.hpp"
class Student;
Student::Student()
{}
Student::Student(string _name,string _lastName,int _curs):name(_name),lastName(_lastName),curs(_curs)
{
}

std::ostream& operator << (std::ostream &s,Student& temp)
{
    s<<temp.name<<" | "<<temp.lastName<<" | "<<temp.curs<<endl<<"-----------------------------"<<endl;
    return s;
}

void Student::ControlFuncriontSortName(std::vector<Student>& temp)
{
    for (int i=0;i<temp.size();++i)
    {
        for (int j=0;j<temp.size()-1;++j)
        {
            if (temp[j].name[0]>temp[j+1].name[0])
            {
                Student * temps=new Student;
                *temps=temp[j];
                temp[j]=temp[j+1];
                temp[j+1]=*temps;
                delete temps;
            }
        }
    }
}
void Student::ControlFuncriontSortLastName(std::vector<Student>& temp)
{
    for (int i=0;i<temp.size();++i)
    {
        for (int j=0;j<temp.size()-1;++j)
        {
            if (temp[j].lastName[0]>temp[j+1].lastName[0])
            {
                Student * temps1=new Student;
                *temps1=temp[j];
                temp[j]=temp[j+1];
                temp[j+1]=*temps1;
                delete temps1;
            }
        }
    }
}
void Student::ControlFuncriontSortCurs(std::vector<Student>& temp)
{
    for (int i=0;i<temp.size();++i)
    {
        for (int j=0;j<temp.size();++j)
        {
            if(i<3)
            {
                if (temp[j].curs>temp[j+1].curs)
                {
                    Student * temps2=new Student;
                    *temps2=temp[j];
                    temp[j]=temp[j+1];
                    temp[j+1]=*temps2;
                    delete temps2;
                }
            }
        }
    }
}
//GET METHODS
string Student::GetName(){return name;}
string Student::GetLastName(){return lastName;}
int Student::GetCurs(){return curs;}
//SET METHODS
void Student::SetName(string _name)
{
    this->name=_name;
}
void Student::SetLastName(string _lastName)
{
    this->lastName=_lastName;
}
void Student::SetCurs(int _curs)
{
    this->curs=_curs;
}
