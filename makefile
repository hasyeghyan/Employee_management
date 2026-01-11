CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic -Iinclude

TARGET = app

SRCS = \
	src/main.cpp \
	src/Accountant.cpp \
	src/Developer.cpp \
	src/Manager.cpp \
	src/President.cpp \
	src/SalesPerson.cpp \
	src/EmployeeRepo.cpp \
	src/PayrollService.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

src/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
