#include <iostream>
#include <cstring>
#include "lib/class.hpp"
#include "lib/class.cpp"

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


    return 0;
}