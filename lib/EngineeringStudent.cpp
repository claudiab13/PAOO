#include <iostream>
#include <cstring>
#include "Student.hpp"


class EngineeringStudent : public Student {
private:
    std::string major;  

public:
    
    EngineeringStudent(std::string nume, std::string prenume, int varsta, double media, const std::string& major)
        : Student(nume, prenume, varsta, media), major(major) {
        std::cout << "EngineeringStudent creat: " << nume << " " << prenume << " " << varsta << " " << media << " " << major << "\n";
    }

    const std::string& getMajor() const { 
        return major; 
    }
    void setMajor(const std::string& newMajor) { 
        major = newMajor; 
    }


    //suprascriere functii pur virtuale
    void afisareDetalii() override{
        std::cout << "Student la inginerie: " << getNume() << " " << getPrenume() << ", Major: " << major << std::endl;
    }

    void studiaza() override{
        std::cout << "Studentul invata inginerie." << std::endl;

    }
};