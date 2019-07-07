###############################################################
# Program:
#     Assignment 11, Sorts
#     Brother JonesL, CS235
# Author:
#     Nathan Rigg, Dallen Cluff, Griffin Pope, Dan Worwood
# Summary:
#     Implementation of various sort algorithms
# Time:
#     12 hours
###############################################################

##############################################################
# The main rule
##############################################################
a.out: assignment11.o
	g++ -o a.out assignment11.o -g -std=c++11
	tar -cf assignment11.tar *.h *.cpp makefile

##############################################################
# The individual components
#      assignment11.o     : the driver program
##############################################################
assignment11.o: assignment11.cpp sortValue.h \
		sortBinary.h sortInsertion.h sortHeap.h sortBubble.h \
		sortSelection.h sortMerge.h sortQuick.h
	g++ -c assignment11.cpp -g -std=c++11

