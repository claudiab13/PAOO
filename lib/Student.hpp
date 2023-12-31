#pragma once
#include <string>


namespace students{

class Student {
    private:
        std::string nume, prenume;
        int varsta;
        double media;

    
    public:
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

        //SET
        void setNume(const std::string &nume);
        void setPrenume(const std::string &prenume);
        void setVarsta(int varsta);
        void setMedia(double media);

        //GET
        std::string getNume();
        std::string getPrenume();
        int getVarsta();
        double getMedia();


        //Supraincarcarea operatorului de atribuire
        Student& operator=(const Student& st);

        //Supraincarcarea operatorului de mutare
        Student& operator=(Student&& st);

        //functii virtuale pure
        virtual void afisareDetalii() = 0;  
        virtual void studiaza() = 0;  

        //functii virtuale
        virtual void participa(); 
        virtual void prezenta();
};
}