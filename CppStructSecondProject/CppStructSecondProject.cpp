#include <iostream>

struct Date
{
    int day = 0;
    int month = 0;
    int year = 0;
};

template <typename T>
struct Document
{
    T series;
    int number;
};

//template <typename T>
struct Employee
{
    Document<int> passport;

    char* name = new char;

    int age = 0;
    Date birthDate;

    bool married = false;

    Employee* boss;
};

void EmployeePrint(const Employee& employee);

void StructExample();

int main()
{
    Employee<int> tom;
    


}

void EmployeePrint(const Employee& employee)
{
    std::cout << "Employee:\n";
    std::cout << "\tName: " << employee.name << "\n";
    std::cout << "\tAge: " << employee.age << "\n";
    std::cout << "\tMarried: " << ((employee.married) ? "Yes" : "No") << "\n";
}

void StructExample()
{
    int number;
    Employee employee;

    Employee department[10];
    department[0].age = 32;

    std::cout << sizeof(Employee) << "\n";

    employee.age = 26;
    //employee.birthDate = { 23, 5, 2001 };

    employee.birthDate.day = 23;
    employee.birthDate.month = 5;
    employee.birthDate.year = 2001;

    employee.name = new char[4];
    strcpy_s(employee.name, 4, "Bob");
    employee.married = true;

    EmployeePrint(employee);

    Employee* tom = new Employee;

    //(*tom).age = 35;
    tom->age = 35;
    tom->birthDate.day = 10;

    tom->name = new char[4];
    strcpy_s(tom->name, 4, "Tom");
    tom->married = false;

    EmployeePrint(*tom);

    /*int* iptr = new int;
    *iptr = 123;*/
}