Address operator **&** for  getting address<br>
Dereference operator *  for getting value of address<br>

**Pointer Initialization**<br>
```C
int myvar;
int * myptr = &myvar;
```
This is same as
```C
int myvar;
int * myptr;
myptr = &myvar;
```
**Pointers and const**<br>
```C
                  int x;
                  int *p1 = &x;   // non-const pointer to non-const int
        const int *  p2 = &x;  // non-const pointer to const int
         int * const p3 = &x;  // const pointer to non-const int
const int * const p4 = &x;  // const pointer to const int 	
```
**Pointers and strings**<br>
```
const char * foo = "hello";  //immutable 
```
**Pointers to Pointers**
```C
char a;
char * b;
char ** c;
a = 'z';
b = &a;
c = &b;
```
**Void, Invalid, Null pointers**
**Invalid**
```C
int * p;               // uninitialized pointer (local variable)
int myarray[10];
int * q = myarray+20;  // element out of bounds
```
**void**  type of pointer that can point to somewhere without a specific type.
used commonly in function arguments to change data types(int->char)etc
**null**A null pointer is a value that any pointer can take to represent that it is pointing to "nowhere" 
```C
void * p = 0;
int * q = nullptr;
```
**A void pointer cannot be incremented**
```
p++ //WRONG as we dont know by how much the pointer must be incremented
(int*)p++ also correct as we know now increment by 8 for(64 bit machine) 
```
Function pointers have varying length unlike datatypes, hence the above code is wrong ad dont know how much to increment.<br>
**A void cannot be dereferenced**
```
*p // WRONG as it not of any type and cant tell  how to.
* (int*)(*p) // CORRECT typecast to an integer pointer and then derefernce it

```
**UseCase: malloc returns null pointer , telling it has UNALLOCATED MEMORY.**
