#include <iostream>
#include <cstring>
#include "Student.hpp"

class MedicalStudent : public Student {
private:
    std::string specialization;  // Specialization of the medical student

public:
    // Constructor
    MedicalStudent(std::string nume, std::string prenume, int varsta, double media, const std::string& specialization)
        : Student(nume, prenume, varsta, media), specialization(specialization) {}

    // Getter and Setter for the specialization
    const std::string& getSpecialization() const { return specialization; }
    void setSpecialization(const std::string& newSpecialization) { specialization = newSpecialization; }
};