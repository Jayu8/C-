# Interfaces in C++

An interface describes the behavior or capabilities of a C++ class without committing to a particular implementation of that class.
The C++ interfaces are implemented using abstract classes.

A class is made abstract by declaring at least one of its functions as pure virtual function. See below example
```C
class Box {
   public:
      // pure virtual function
      virtual double getVolume() = 0;
   private:
      double length;      // Length of a box
      double breadth;     // Breadth of a box
      double height;      // Height of a box
};
```
The purpose of an abstract class (often referred to as an ABC) is to provide an appropriate base class from which other classes can inherit. Abstract classes cannot be used to instantiate objects and serves only as an interface. if done error

If a subclass of an such classes needs to be instantiated, it has to implement each of the virtual functions for override purposes else error.

Classes that can be used to instantiate objects are called **concrete classes**.
