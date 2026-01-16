# The compiler to use
CXX = g++

# Compiler flags (shows warnings to help you find bugs)
CXXFLAGS = -Wall

# The name of your final program
TARGET = calc

# The list of files to compile
SRCS = main.cpp laws.cpp solver.cpp
# --- The Instructions ---

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -f $(TARGET)
