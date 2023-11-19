#include <iostream>
#include <cstring>
#include "Student.hpp"

namespace students {

class EngineeringStudent : public Student {
private:
    std::string major;  

public:
    
    EngineeringStudent::EngineeringStudent(std::string nume, std::string prenume, int varsta, double media, const std::string& major)
        : Student(nume, prenume, varsta, media), major(major) {
        std::cout << "EngineeringStudent creat: " << nume << " " << prenume << " " << varsta << " " << media << " " << major << "\n";
    }

    const std::string& EngineeringStudent::getMajor() const { 
        return major; 
    }
    void EngineeringStudent::setMajor(const std::string& newMajor) { 
        major = newMajor; 
    }


    //suprascriere functii pur virtuale
    void EngineeringStudent::afisareDetalii() override{
        std::cout << "Student la inginerie: " << getNume() << " " << getPrenume() << ", Major: " << major << std::endl;
    }

    void EngineeringStudent::studiaza() override{
        std::cout << "Studentul invata inginerie." << std::endl;

    }
};
}