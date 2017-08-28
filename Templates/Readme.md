General example of FUNCTION templates, see above code for class template.
```C
template <class T>
T sum (T a, T b)
{
  T result;
  result = a + b;
  return result;
}
int main () {
  int i=5, j=6, k;
  double f=2.0, g=0.5, h;
  k=sum<int>(i,j);         // T = int in  template above     as i,j are int  can also write  k = sum(i,j)   [implicitly declared]
  h=sum<double>(f,g);      // T = double in  template above     similarly can write          h = double(f,g)
  cout << k << '\n';
  cout << h << '\n';
  return 0;
}
```
Same type function arguements OR non type function arguements
```C
// Non-type (T,int)  template arguments
template <class T, int N>
T fixed_multiply (T val)
{
  return val * N;
}
// Same (T,U) arguements
template <class T, class U>
bool are_equal (T a, U b)
{
  return (a==b);
}
```
