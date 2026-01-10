CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic

TARGET = app

SRCS = \
	main.cpp \
	Accountant.cpp \
	Developer.cpp \
	Manager.cpp \
	President.cpp \
	SalesPerson.cpp \
	Employee.cpp \
	EmployeeRepo.cpp \
	PayrollService.cpp

OBJS = $(SRCS:.cpp=.o)

# Default rule
all: $(TARGET)

# Link step
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Compile step
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJS) $(TARGET)
