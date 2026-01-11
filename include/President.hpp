#ifndef PRESIDENT_HPP
#define PRESIDENT_HPP


#include "Employee.hpp"
#include "ISalary.hpp"


class President : public Employee {
    public:
        President(const std::string& n) : Employee(n) {}
        virtual ~President() = default;

        virtual void getInfo() override;
};

#endif