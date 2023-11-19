#include <iostream>
#include <cstring>
#include "Student.hpp"

class MedicalStudent : public Student {
private:
    std::string specializare;  

public:
    // Constructor
    MedicalStudent(std::string nume, std::string prenume, int varsta, double media, const std::string& specializare)
        : Student(nume, prenume, varsta, media), specializare(specializare) {
        std::cout << "MedicalStudent creat: " << nume << " " << prenume << " " << varsta << " " << media << " " << specializare << "\n";
        }

    const std::string& getSpecializare() const { 
        return specializare; 
    }
    void setSpecializare(const std::string& newSpecializare) { 
        specializare = newSpecializare; 
    }


    //suprascriere functii pur virtuale
    void afisareDetalii() override{
        std::cout << "Student la medicina: " << getNume() << " " << getPrenume() << ", Specializare: " << specializare << std::endl;
    }

    void studiaza() override{
        std::cout << "Studentul invata medicina." << std::endl;

    }

};