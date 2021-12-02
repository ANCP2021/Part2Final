CC = g++
CFLAGS = -g -Wall -std=c++11

all : count doc check

count: step3.cc
	$(CC) $(CFLAGS) -o $@ step3.CC
doc: step3.cc Doxyfile
	doxygen Doxyfile
check: 
	valgrind --leak-check=full ./count
	cppcheck step3.cc
	