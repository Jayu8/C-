**Call by value:** only when small numbers
```C
call: ret = max(a, b=0); \\ Here default parameter b = 0, if b is not defined in function call 
func: int max(int num1, int num2) 
```
**Call by pointer:**  not safe as pointer can be changed by unknown factors during call
```C
call: ret = max(&a, &b);
func: int max(int* num1, int* num2) 
```
**Call by reference:** same as by pointer but safe as it has to point to somethinng because **references are never NULL** u get what u passed
```C
call: ret = max(a, b);
func: int max(int& num1, int& num2) 
```
This is used almost everywhere.<br> 
Case 1: When you dont want to modify the arguements passed make it const:
```C
string concatenate (const string& a, const string& b)
{
  return a+b;
}
```
Case 2 : For Default parameters in references use function overloading
```
foo(mBar,mFoobar); 

void foo(double &bar, double &foobar) 
{ 
   bar = 100; 
   foobar = 150; 
}
void foo(double &bar) 
{ 
   double foobar = 0.0;
   foo(bar, foobar);
}
```
**Easy example**
```
    by pointer                   by reference
  (independent )        (dependtent,thus never NULL)
pointer => value              value => pointer
```

**Call by rvalue reference:**
```C
```
