# Author: Connor Barber
#   Date: 08-28-2020
## Makefile for the die project
# All commands under the rules must start with a tab
#VariablesCFLAGS = -Wall -std=c++11CC = g++
#Linking all the files
#Create the executable program "a.out"a.out​: die-main.o
die.o$(​CC​)​​$(​CFLAGS​)​ die.o die-main.odie.o​: 
die.cc die.h$(​CC​)​ -c ​$(​CFLAGS​)​ die.ccdie-main.o​: 
die-main.cc die.h$(​CC​)​ -c ​$(​CFLAGS​)​ die-main.cc
# remove all the object and executable files
clean​:rm -f die-main.o die.o die-main a.out
