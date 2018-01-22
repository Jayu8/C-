// pointers as arguments:
#include <Windows.h>
#include <iostream>
using namespace std;

// Increment value held by pointner allowed and pointer itself can also be incremented
void increment_all (int* start, int* stop)
{
  int * current = start;
  while (current != stop) {
    ++(*current);  
    ++current;     
  }
}

// Increment value held by pointner NOT allowed and pointer itself can also be incremented 
void print_all (const int* start, const int* stop)
{
  const int * current = start;
  while (current != stop) {
    cout << *current << '\n';
    ++current;     
  }
}

// Here both are considered pointers so that logic dont need any int i values for loop. else stop must be typecasted.
int main ()
{
  int numbers[] = {10,20,30};
  increment_all (numbers,numbers+3); 
  print_all (numbers,numbers+3);
  return 0;
}
// Output:
// 11 , 21, 31
