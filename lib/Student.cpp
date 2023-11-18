#include <iostream>
#include <cstring>
#include "Student.hpp"


// Constructorul
Student::Student(std::string nume, std::string prenume, int varsta, double media)
: nume(nume), prenume(prenume), varsta(varsta), media(media)
{
    std::cout << "Obiectul: " << this->nume << " " << this->prenume << ", " << this->varsta <<" ani, media: " << this->media << " a fost CREAT.\n";
}

// Constructorul de copiere
Student::Student(const Student& st)
: nume(st.nume), prenume(st.prenume), varsta(st.varsta), media(st.media)
{
    std::cout << "Obiectul: " << this->nume << " " << this->prenume << ", " << this->varsta <<" ani, media: " << this->media << " a fost COPIAT.\n";
}

// Destructorul
Student::~Student()
{
    std::cout << "Obiectul: " << this->nume << " " << this->prenume << ", " << this->varsta <<" ani, media: " << this->media << " a fost STERS.\n";
}

//Constructorul de mutare
Student::Student(Student&& st)
: nume(std::move(st.nume)), prenume(std::move(st.prenume)), varsta(std::move(st.varsta)), media(std::move(st.media))
{
    std::cout << "Obiectul: " << this->nume << " " << this->prenume << ", " << this->varsta <<" ani, media: " << this->media << " a fost MUTAT.\n";
}


//SET
void Student::setNume(const std::string &nume) 
{
    this->nume = nume;
}
void Student::setPrenume(const std::string &prenume) 
{
    this->prenume = prenume;
}
void Student::setVarsta(int varsta) 
{
    this->varsta = varsta;
}
void Student::setMedia(double media) 
{
    this->media = media;
}


//GET
std::string Student::getNume()
{
    return this->nume;
}
std::string Student::getPrenume()
{
    return prenume;
}
int Student::getVarsta()
{
    return this->varsta;
}
double Student::getMedia()
{
    return this->media;
}


    //Supraincarcarea operatorului de atribuire
    Student& Student::operator=(const Student& st)
    {
        if (this != &st) 
        {
            nume = st.nume;
            prenume = st.prenume;
            varsta = st.varsta;
                media = st.media;
            }
            return *this;
    }

    //Supraincarcarea operatorului de mutare
    Student& Student::operator=(Student&& st) 
    {
        if (this != &st) 
        {
            nume = std::move(st.nume);
            prenume = std::move(st.prenume);
            varsta = std::move(st.varsta);
            media = std::move(st.media);
        }
        return *this;
    }