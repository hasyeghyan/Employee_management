#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

#include "Employee.hpp"
#include "ISalary.hpp"


class Developer : public Employee, public ISalary {
    public:
        Developer(const std::string& n, double s = 0) : Employee(n), salary{s} {}
        virtual ~Developer() = default;
        
        virtual void getInfo() override;
        
        virtual void calcSalary() override;
    private:
        double salary;
};

#endif