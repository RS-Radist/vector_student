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

int main()
{
    Student student("Ivan","Ivanovich",5);
    vector<Student> vector_student;
    student.Add(vector_student);
    student.ControlFuncriontSortName(vector_student);
    cout<<"Sort - Name\n";
    student.Print(vector_student);
    cout<<endl<<endl<<endl;
    cout<<"Sort - Last Name\n";
    student.ControlFuncriontSortLastName(vector_student);
    student.Print(vector_student);
    cout<<endl<<endl<<endl;
    cout<<"Sort - Curs\n";
    student.ControlFuncriontSortCurs(vector_student);
    student.Print(vector_student);
}
