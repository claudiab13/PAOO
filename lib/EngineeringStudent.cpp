#include <iostream>
#include <cstring>
#include "Student.hpp"


class EngineeringStudent : public Student {
private:
    std::string major;  // Major of the engineering student

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
};