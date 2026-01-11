#ifndef ISALARY_HPP
#define ISALARY_HPP

#include "Employee.hpp"


class ISalary {
    public:
        virtual void calcSalary() = 0;
      
        virtual ~ISalary() = default;
};

#endif