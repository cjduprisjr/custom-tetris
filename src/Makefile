# Compiler and flags
CXX = g++
CXXFLAGS = -g -Wall
LIBS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

# Source files
SRC = main.cpp grid.cpp
OBJ = $(SRC:.cpp=.o)
OUT = a.out

# Default target
all: $(OUT)

# Build the executable
$(OUT): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(OUT) $(LIBS)

# Compile source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean the project
clean:
	rm -f $(OBJ) $(OUT)
