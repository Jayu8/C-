//It's possible that you'd want to include a virtual function in a base class so that it may be redefined in a derived class
//to suit the objects of that class, but that there is no meaningful definition you could give for the function in the base class.


class Shape {
   protected:
      int width, height;
   public:
      Shape( int a = 0, int b = 0) {
         width = a;
         height = b;
      }

      // pure virtual function
      virtual int area() = 0;
};

// here = 0 , tells that there is no special meaning inbase class
