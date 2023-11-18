#include <iostream>
#include <cstring>
#include "lib/Student.hpp"
#include "lib/Student.cpp"

int main()
{
    Student student1("Burcea", "Claudia", 22, 8.0);
    Student student2("Ionescu", "Mara", 20, 9.6);
    Student student3("Ionescuu", "Mara", 20, 9.6);

    Student copystudent1(student1);
    std::cout << copystudent1.getNume() << "\n";
    std::cout << copystudent1.getPrenume() << "\n";
    std::cout << copystudent1.getVarsta() << "\n";
    std::cout << copystudent1.getMedia() << "\n\n";

    copystudent1.setNume("Popescu");
    std::cout << copystudent1.getNume() << "\n";
    std::cout << copystudent1.getPrenume() << "\n";
    std::cout << copystudent1.getVarsta() << "\n";
    std::cout << copystudent1.getMedia() << "\n\n";

    Student movestudent1(std::move(student1));
    std::cout << movestudent1.getNume() << "\n";
    std::cout << movestudent1.getPrenume() << "\n";
    std::cout << movestudent1.getVarsta() << "\n";
    std::cout << movestudent1.getMedia() << "\n\n";

    movestudent1.setVarsta(25);
    std::cout << movestudent1.getNume() << "\n";
    std::cout << movestudent1.getPrenume() << "\n";
    std::cout << movestudent1.getVarsta() << "\n";
    std::cout << movestudent1.getMedia() << "\n\n";


    // Utilizare operator de atribuire
    student3 = student1;
    std::cout << "Student 3 (dupa operatorul de atribuire): " << student3.getNume() << ", Varsta: " << student3.getVarsta() << ", Media: " << student3.getMedia() << std::endl;

    // Utilizare operator de mutare
    student3 = std::move(student2);
    std::cout << "Student 2 (dupa mutare): " << student2.getNume() << ", Varsta: " << student2.getVarsta() << ", Media: " << student2.getMedia() << std::endl;
    std::cout << "Student 3 (dupa mutare): " << student3.getNume() << ", Varsta: " << student3.getVarsta() << ", Media: " << student3.getMedia() << std::endl;


    




    return 0;
}