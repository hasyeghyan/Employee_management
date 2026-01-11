🏢 Employee Management System (EMS)

A C++ Employee Management System demonstrating SOLID principles, modular design, and clean OOP.
Manage employees, calculate salaries for paid roles, and extend the system easily without modifying existing code.

📌 Overview

The EMS project allows you to:

- Add, remove, and list employees
- Store employee data efficiently
- Calculate salaries only for paid roles
- Showcase SOLID principles in real C++ code

The design emphasizes extensibility, clean abstractions, and separation of concerns.

🧱 SOLID Principles

Single Responsibility Principle:
- Employee → holds id & name
- EmployeeRepo → manages employees
- PayrollService → calculates salaries

Open / Closed Principle:
- Add new employee roles without modifying existing code

Liskov Substitution Principle:
- Derived employee types can replace Employee anywhere

Interface Segregation Principle:
- Only salaried employees implement ISalary

Dependency Inversion Principle:
- PayrollService depends on abstractions (Employee, ISalary)

✨ Features

Employee Roles:
💼 Accountant    → Salaried
💻 Developer     → Salaried
📊 Manager       → Salaried
📈 SalesPerson   → Salaried
👑 President     → Not salaried

Payroll Behavior:
- Salaries calculated only for ISalary implementers
- PayrollService iterates all employees automatically
- Non-salaried employees are skipped without checks


📂 Project Structure
```
project-root/
├── include/                # Header files (.hpp)
│   ├── Employee.hpp
│   ├── ISalary.hpp
│   ├── Accountant.hpp
│   ├── Developer.hpp
│   ├── Manager.hpp
│   ├── SalesPerson.hpp
│   ├── President.hpp
│   ├── EmployeeRepo.hpp
│   └── PayrollService.hpp
│
├── src/                    # Source files (.cpp)
│   ├── main.cpp
│   ├── Accountant.cpp
│   ├── Developer.cpp
│   ├── Manager.cpp
│   ├── SalesPerson.cpp
│   ├── President.cpp
│   ├── EmployeeRepo.cpp
│   └── PayrollService.cpp
│
├── Makefile
└── README.md
```

🔧 Build & Run

Requirements:
```
- g++ (C++17 or higher)
- make
```

Compile:
```
make
```


Run:
```
./app
```

Clean:
```
make clean
```

🧩 Main Components

Employee (Abstract Base Class):
- Holds common employee data (id, name)
- Cannot be instantiated directly

ISalary (Interface):
- Declares calcSalary()
- Implemented only by salaried roles

Derived Employee Classes:
Salaried:
💼 Accountant
💻 Developer
📊 Manager
📈 SalesPerson

Not salaried:
👑 President

EmployeeRepo:
- Stores employees polymorphically
- Supports add / remove / list

PayrollService:
- Iterates over all employees
- Calls calcSalary() only on ISalary implementers


🧠 Design Decisions

Why Employee is abstract:
- Represents generic employee concept
- Prevents creating meaningless generic employees

Why ISalary exists:
- Not all roles are salaried
- Avoids forcing unpaid roles to implement unused functions

Handling unpaid roles:
- Roles without salary do not implement ISalary
- No extra checks in PayrollService

Adding new roles:
1. Derive from Employee
2. Implement ISalary only if salaried

No changes needed in PayrollService, EmployeeRepo, or main.


🚀 Example Usage
```cpp
EmployeeRepo repo;

repo.add(std::make_shared<Developer>(1, "Alice"));
repo.add(std::make_shared<President>(2, "Bob"));

PayrollService payroll;
payroll.process(repo.getAll());
```


