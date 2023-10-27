#include <iostream>
#include <cstring>
#include "class.hpp"

// Constructorul
Student::Student(std::string nume, std::string prenume, 
                    int varsta, 
                    double media)
: nume(nume), prenume(prenume), varsta(varsta), media(media)
{
    std::cout << "Obiectul:" << this->nume << " " << this->prenume << " " << this->varsta <<" " << this->media << "a fost CREAT.\n";
}

// Constructorul de copiere
Student::Student(const Student& st)
: nume(st.nume), prenume(st.prenume), varsta(st.varsta), media(st.media)
{
    std::cout << "Obiectul:" << this->nume << " " << this->prenume << " " << this->varsta <<" " << this->media << "a fost COPIAT.\n";
}

// Destructorul
Student::~Student()
{
    std::cout << "Obiectul:" << this->nume << " " << this->prenume << " " << this->varsta <<" " << this->media << "a fost STERS.\n";
}

//Constructorul de mutare
Student::Student(Student&& st)
: nume(st.nume), prenume(st.prenume), varsta(st.varsta), media(st.media)
{
    std::cout << "Obiectul:" << this->nume << " " << this->prenume << " " << this->varsta <<" " << this->media << "a fost MUTAT.\n";
}
