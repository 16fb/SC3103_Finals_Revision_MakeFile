# Makefile for Lab 3, simple C project
# Compiler and compiler flags
CC = gcc
CFLAGS = -Wall -O2

# Source files and object files
SOURCES = hello-main.c hello-funct1.c hello-funct2.c
OBJECTS = ${SOURCES:.c=.o} #string substitution

# 
# PLEASE DO NOT MAKE A C FILE ENDING IN DB OR PROF PLEASE
# 
OBJECTS_DB = ${SOURCES:.c=DB.o}
OBJECTS_PROF = ${SOURCES:.c=PROF.o}

# Executable name
EXECUTABLE = helloworld
DEBUG = helloworld-d
PROF = helloworld-prof

# Phony targets (targets that don't represent files)
.PHONY: all clean

# Default target
all: $(EXECUTABLE)
	echo "finished build"

debug: ${DEBUG}
	echo "finished debug build"

prof: ${PROF}
	echo "finished prof build"

# Rule to build executable
$(EXECUTABLE):${OBJECTS}
	$(CC) $(CFLAGS) -o $(EXECUTABLE) ${OBJECTS}

# Rule to build debug
$(DEBUG):${OBJECTS_DB}
	$(CC) -Wall -g -o $(DEBUG) ${OBJECTS_DB}

$(PROF):${OBJECTS_PROF}
	rm -f gmon.out
	$(CC) -Wall -pg -o $(PROF) ${OBJECTS_PROF}


# IMPLICIT DB
%DB.o: %.c
	${CC} ${CFLAGS} -c -g $< -o $@

# IMPLICIT PROF
%PROF.o: %.c
	${CC} ${CFLAGS} -c -pg $< -o $@


# Implicit Rule to compile C source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up generated files
clean:
	rm -f $(EXECUTABLE) $(OBJECTS) ${OBJECTS_DB} ${OBJECTS_PROF} $(DEBUG) $(PROF) gmon.out
