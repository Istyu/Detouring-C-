This dll can call a function from the target process into which we inject it. 
Just we need the desired function memory address. 

You can compile the test program with g++. 

Compile commands: 
g++ -c main.cpp -o main.o 
g++ -Wall -o program.exe main.o

YT video: https://youtu.be/_gVfCrFPR08
