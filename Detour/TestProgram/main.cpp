#include <stdio.h>
#include <iostream>
#include <Windows.h>

using namespace std;

int myVar = 0;

void changeVarVal()
{
	myVar++;
	std::cout << "My variable changed: " << myVar << std::endl;
}

int main()
{
	std::cout << "Value at My variable: " << myVar << std::endl;

	system( "PAUSE" );

	changeVarVal();

	std::cout << "Value at My variable: " << myVar << std::endl;

	system( "PAUSE" );

    return 0;
}

/*
g++ -c main.cpp -o main.o
g++ -Wall -o program.exe main.o
*/