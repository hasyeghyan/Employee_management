#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <iostream>
#include <memory>

inline static size_t _id = 0;

class Employee {
    protected:
        size_t id;
        std::string name;
    public:
        Employee(const std::string& n = "Hasmik") : id{++_id}, name{n} {}
        virtual ~Employee() = default;

        virtual void print() = 0;
        
        size_t getId() const noexcept { return id; }
};


#endif