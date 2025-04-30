# Makefile for Lab 3, simple C project
# Compiler and compiler flags
CC = gcc
CFLAGS = -Wall -O2

# Source files and object files
SOURCES = hello-main.c hello-funct1.c hello-funct2.c
OBJECTS = ${SOURCES:.c=.o} #string substitution

# Executable name
EXECUTABLE = helloworld
DEBUG = helloworld-d

# Phony targets (targets that don't represent files)
.PHONY: all clean

# Default target
all: $(EXECUTABLE) $(DEBUG)
	echo "finished build"

# Rule to build executable
$(EXECUTABLE):${OBJECTS}
	$(CC) $(CFLAGS) -o $(EXECUTABLE) ${OBJECTS}

# Rule to build debug
$(DEBUG):${OBJECTS}
	$(CC) -Wall -g -o $(DEBUG) ${SOURCES}

# Implicit Rule to compile C source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up generated files
clean:
	rm -f $(EXECUTABLE) $(OBJECTS)