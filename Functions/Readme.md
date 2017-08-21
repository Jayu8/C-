**Call by value:**
```C
call: ret = max(a, b);
func: int max(int num1, int num2) 
```
**Call by reference:** same as by pointer but safe as it has to point to somethinng because **references are never NULL** u get what u passed
```C
call: ret = max(a, b);
func: int max(int& num1, int& num2) 
```
**Call by pointer:**  not safe as pointer can be changed by unknown factors during call
```C
call: ret = max(&a, &b);
func: int max(int* num1, int* num2) 
```
**Call by rvalue reference:**
```C
```
