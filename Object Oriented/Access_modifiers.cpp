#include <iostream>
#include<conio.h>
using std::cout;
using std::endl;

struct B { // default access modifier inside struct is public
    void set_n(int v) { n = v; }
    void f()          { cout << "B::f" << endl; }
  protected:
    int m, n; // B::m, B::n are protected
  private:
    int x;
};
 
struct D : B {                // ****** Inheritance ->private and protect ******
    using B::m;               // D::m is public ******* "using" inside class***protected->public**
    int get_n() { return n; } // B::n is accessible here, but not outside
//  int get_x() { return x; } // ERROR, B::x is inaccessible here
 private:
    using B::f;               // D::f is private ******** "using" inside class***public->private** 
};
 
int main() {
    D d;

//  d.x = 2; // ERROR, private
//  d.n = 2; // ERROR, protected
    d.m = 2; // protected B::m is accessible as D::m

    d.set_n(2); // calls B::set_n(int)
    cout << d.get_n() << endl; // output: 2

//  d.f();   // ERROR, B::f is inaccessible as D::f privated above


    B& b = d; // **************** b references d and "views" it as being type B ****************

//  b.x = 3; // ERROR, private
//  b.n = 3; // ERROR, protected
//  b.m = 3; // ERROR, B::m is protected

    b.set_n(3); // calls B::set_n(int)
//  cout << b.get_n(); // ERROR, 'struct B' has no member named 'get_n'

    b.f();   // calls B::f()
    return 0;
}
