#pragma once
#include "Student.hpp"
#include <string>


class MedicalStudent : public Student {
private:
    std::string specialization;  // Specialization of the medical student

public:
    // Constructor
    MedicalStudent(std::string nume, std::string prenume, int varsta, double media, const std::string& specialization);

    const std::string& getSpecialization() const;

    void setSpecialization(const std::string& newSpecialization);
};