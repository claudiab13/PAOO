#pragma once
#include "Student.hpp"
#include <string>


class EngineeringStudent : public Student {
private:
    std::string major;  // Major of the engineering student

public:
    
    EngineeringStudent(std::string nume, std::string prenume, int varsta, double media, const std::string& major);

    const std::string& getMajor() const;

    void setMajor(const std::string& newMajor);
};