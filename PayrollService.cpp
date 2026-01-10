#include "PayrollService.hpp"
#include "ISalary.hpp"

void PayrollService::pay(const EmployeeRepo& e) {
    for (size_t i{}; i < e.getEmployees().size(); ++i) {
        if (ISalary* np = dynamic_cast<ISalary*>(e.getEmployees()[i].get())) {
            np->calcSalary();
        }
    }
}