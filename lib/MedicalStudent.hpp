#pragma once
#include "Student.hpp"
#include <string>

namespace students{

class MedicalStudent : public Student {
private:
    std::string specializare;  

public:
    
    MedicalStudent(std::string nume, std::string prenume, int varsta, double media, const std::string& specializare);

    const std::string& getSpecializare() const;

    void setSpecializare(const std::string& newSpecializare);

    //suprascriere functii pur virtuale
    virtual void afisareDetalii() override;
    virtual void studiaza() override;
};
}