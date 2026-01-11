#include "EmployeeRepo.hpp"
#include "PayrollService.hpp"
#include "Accountant.hpp"
#include "Developer.hpp"
#include "Manager.hpp"
#include "President.hpp"
#include "SalesPerson.hpp"

int main() {
    std::shared_ptr<Employee> e1 {new Accountant("Karen")};
    std::shared_ptr<Employee> e2 {new Developer("Anahit")};
    std::shared_ptr<Employee> e3 {new Manager("Lusine")};
    std::shared_ptr<Employee> e4 {new President("Arayik")};
    std::shared_ptr<Employee> e5 {new SalesPerson("Rima")};
    
    EmployeeRepo er;
    
    er.addEmployee(e1);
    er.addEmployee(e2);
    er.addEmployee(e3);
    er.addEmployee(e4);
    er.addEmployee(e5);
    
    std::cout << "Employees before payroll: ";
    er.list();

    PayrollService ps;
    ps.pay(er);
    
    std::cout << "Employees after payroll: ";
    er.list();
 
}