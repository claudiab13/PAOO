#include "lib/Student.hpp"
#include "lib/EngineeringStudent.hpp"
#include "lib/MedicalStudent.hpp"

#include <iostream>
#include <cstring>

using namespace students;

int main()
{
    EngineeringStudent student1("Burcea", "Claudia", 22, 8.0, "soft");
    EngineeringStudent student2("Ionescu", "Mara", 20, 9.6, "hard");
    MedicalStudent student3("Ionescuu", "Mara", 20, 9.6, "Dermato");
    std::cout << std::endl;


    // Utilizare operator de atribuire
    student2 = student1;
    std::cout << "Student 1 (dupa mutare): " << student1.getNume() << ", Varsta: " << student1.getVarsta() << ", Media: " << student1.getMedia() << ", Major: " << student1.getMajor() << std::endl;
    std::cout << "Student 2 (dupa operatorul de atribuire): " << student2.getNume() << ", Varsta: " << student2.getVarsta() << ", Media: " << student2.getMedia() << std::endl;
    std::cout << std::endl;

    // Utilizare operator de mutare
    student2 = std::move(student1);
    std::cout << "Student 1 (dupa mutare): " << student1.getNume() << ", Varsta: " << student1.getVarsta() << ", Media: " << student1.getMedia() << ", Major: " << student1.getMajor() << std::endl;
    std::cout << "Student 2 (dupa mutare): " << student2.getNume() << ", Varsta: " << student2.getVarsta() << ", Media: " << student2.getMedia() << ", Major: " << student2.getMajor() << std::endl;
    std::cout << std::endl;

    //functiile pur virtuale
    student1.afisareDetalii();
    student1.studiaza();
    
    //functiile virtuale
    student1.participa();
    student1.prezenta();
    std::cout << std::endl;
    
     //functiile pur virtuale
    student2.afisareDetalii();
    student2.studiaza();
    std::cout << std::endl;

    //functiile virtuale
    student3.afisareDetalii();
    student3.participa();
    student3.prezenta();
    std::cout << std::endl;

    std::cout << std::endl;

    return 0;
}