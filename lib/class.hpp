#pragma once

class Student{
    private:
        std::string nume, prenume;
        int varsta;
        double media;

        // Constructorul
        Student(std::string nume, std::string prenume, 
                int varsta, 
                double media);

        // Constructorul de copiere
        Student(const Student&);

        // Destructorul
        ~Student();

        //Constructorul de mutare
        Student(Student&&);
};