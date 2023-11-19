#pragma once
#include <iostream>
#include <string>

namespace students {
    class StudentInterface {
        public:
            virtual void afisareDetalii() = 0;  
            virtual void studiaza() const = 0;  
            virtual ~StudentInterface() = default;
    };
    
}