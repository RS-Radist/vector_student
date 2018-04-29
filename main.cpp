//1)Описать класс студент с полями ИМЯ, ФАМИЛИЯ,КУРС.  +
//2)Переопределелить с этого класса оператор вывода в поток +
//3)Написать функцию заполнения вектора из класса студент произвольными данными.+
//4)Написать функцию печати содержимого вектора +
//5)Отсортировать вектор по именам студентов по возрастанию+
//6)Отсортировать стабильно вектор по фамилиям студентов.+
//7)Поставить в первые три элемента вектора студентов самых младших курсов по возрастанию/ +
//8)После каждой операции выводить список студентов в выходной поток. +

#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include "Student.hpp"
using namespace std;

void Print(std::vector<Student>& temp)
{
    for(std::vector<Student>::iterator it=temp.begin();it<temp.end();it++)
    {
        cout<<*it<<endl;
    }
}
void Add(std::vector<Student>& temp)
{
    int x=0;
    do{
        Student* student;
        student=new Student;
        string _name;
        string _lastName;
        int _curs;
        cout<<"Enter the name\n";
        cin>>_name;
        cout<<"Enter the last name\n";
        cin>>_lastName;
        cout<<"Enter the curs\n";
        cin>>_curs;
        student->SetName(_name);
        student->SetLastName(_lastName);
        student->SetCurs(_curs);
        temp.push_back(*student);
        cout<<"You want replay-plz number one, else quit\n";
        cin>>x;
        delete student;
    }while(x==1);
}

int main()
{
    Student student("Ivan","Ivanovich",5);
    vector<Student> vector_student;
    Add(vector_student);
    student.ControlFuncriontSortName(vector_student);
    cout<<"Sort - Name\n";
    Print(vector_student);
    cout<<endl<<endl<<endl;
    cout<<"Sort - Last Name\n";
    student.ControlFuncriontSortLastName(vector_student);
    Print(vector_student);
    cout<<endl<<endl<<endl;
    cout<<"Sort - Curs\n";
    student.ControlFuncriontSortCurs(vector_student);
    Print(vector_student);
}
