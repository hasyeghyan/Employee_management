
# Employee Management System (EMS)

## 1. Project Overview
The Employee Management System (EMS) is a C++ project that manages employees of a company.  
It allows adding employees,removing employees and calculating salaries for roles that are paid, and listing employee information.  

The project follows **SOLID principles**:  
- **Single Responsibility**: Each class has a clear responsibility (Employee holds identity, PayrollService calculates salaries, EmployeeRepo manages employees).  
- **Open/Closed**: Adding a new employee role does not require modifying existing code.  
- **Liskov Substitution**: Derived classes can be used wherever their base class (`Employee` or `ISalary`) is expected.  
- **Interface Segregation**: Only employees that have salaries implement the `ISalary` interface.  
- **Dependency Inversion**: PayrollService depends on abstractions (`Employee` and `ISalary`) rather than concrete classes.  

---

## 2. Features

### Employee Roles
- **Accountant** – Salaried  
- **Developer** – Salaried  
- **Manager** – Salaried  
- **SalesPerson** – Salaried  
- **President** – Not salaried  

### Payroll Behavior
- Only employees that implement the `ISalary` interface have their salary calculated.  
- PayrollService iterates over all employees and calls `calcSalary()` on salaried employees.  
- Roles without salary (e.g., President) are skipped automatically without special checks.  

---

## 3. Project Structure
project-root/
│
├─ include/ # All header files (.hpp)
│ ├─ Employee.hpp
│ ├─ ISalary.hpp
│ ├─ Accountant.hpp
│ ├─ Developer.hpp
│ ├─ Manager.hpp
│ ├─ SalesPerson.hpp
│ ├─ President.hpp
│ ├─ EmployeeRepo.hpp
│ └─ PayrollService.hpp
│
├─ src/ # All implementation files (.cpp)
│ ├─ main.cpp
│ ├─ Accountant.cpp
│ ├─ Developer.cpp
│ ├─ Manager.cpp
│ ├─ SalesPerson.cpp
│ ├─ President.cpp
│ ├─ EmployeeRepo.cpp
│ ├─ PayrollService.cpp
│ └─ Employee.cpp (optional)
│
├─ Makefile
└─ README.md


### Main Components
- **Employee (abstract)** – Base class holding `id` and `name`. Cannot be instantiated directly.  
- **ISalary (interface)** – Declares `calcSalary()` for salaried employees only.  
- **Derived Employee Classes** – Accountant, Developer, Manager, SalesPerson (salaried); President (not salaried).  
- **EmployeeRepo** – Stores and manages all employees.  
- **PayrollService** – Calculates salaries for all salaried employees using `ISalary`.  

---

## 4. Build & Run Instructions

### Using Makefile
make         # Compile the project
./app        # Run the program
make clean   # Optional: remove object files and executable

## 5. SOLID Explanation

Why Employee is abstract:

Employee is abstract because it represents a generic concept of an employee.

We don’t want to create a generic employee without a specific role.

Why salary logic is in a separate interface (ISalary):

Not all roles receive a salary (e.g., President).

Separating salary logic avoids forcing non-salaried roles to implement unnecessary functions.

Salaried roles implement the interface, keeping the design clean and modular.

How unpaid roles are handled:

Roles without salary simply don’t implement ISalary.

PayrollService uses dynamic_cast to safely call calcSalary() only on salaried employees.

How PayrollService avoids role checks:

It does not need to know which role is salaried.

Using dynamic_cast to ISalary* automatically filters only employees with salary behavior.

How adding a new role does not break existing code:

To add a new role: create a derived class of Employee.

Implement ISalary only if the role is salaried.

No existing code (EmployeeRepo, PayrollService, main) needs to change. 
