#ifndef PAYROLLSERVICE_HPP
#define PAYROLLSERVICE_HPP

#include "EmployeeRepo.hpp"


class PayrollService  {
    public:
        void pay(const EmployeeRepo& e);
};

#endif