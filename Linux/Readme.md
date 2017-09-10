Hello_header.h
```C
#ifndef MYHEADER
#define MYHEADER
    void sayHello();           //declaration
#endif
```
Hello_function.cpp
```C
#include <iostream>           //Normal header
#include "Hello_header.h"    //In-built header
void sayHello()               //Implementation
{
    std::cout << "Hello!\n";
}
```
Main_file.cpp
```C
#include "Hello_header.h"     //In-built header
int main()
{
   sayHello();                 //Call
    return 0;
}
```
Makefile
```C
OBJS = Main_file.o Hello_function.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

Hello_Application : $(OBJS)
        $(CC) $(LFLAGS) $(OBJS) -o Hello_Application

Main_file.o : Main_file.cpp Hello_header.h
        $(CC) $(CFLAGS) Main_file.cpp

Hello_function.o : Hello_function.cpp Hello_header.h
        $(CC) $(CFLAGS) Hello_function.cpp

clean:
        \rm *.o *~ Hello_Application
```
Running the program
```
make
./Hello_Application
```
