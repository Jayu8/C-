#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

template <class T>
class Stack
{
  private:
    vector<T> elements;   // Declaring a (vector of elements for INT) and (vector of elements for STACK) SEPERATELY as OBJECTS.
                          // for push_back and pop_back METHODS .

  public:
    void push(T const &);
    void pop();
    T top();
    bool empty();
};

template <class T>
void Stack<T>::push(T const &elem) {
    elements.push_back(elem);
}

template <class T>
void Stack<T>::pop() {
    if (elements.empty()) {
        throw out_of_range("Stack<>::pop(): empty stack");  // IMPORTANT accesses by ex.what  in main
    } else {
        elements.pop_back();
    }
}

template <class T>
T Stack<T>::top() {
    if (empty()) {
        throw out_of_range("Stack<>::top(): empty stack");  // IMPORTANT accesses by ex.what in main
    }
    return elements.back();
}

template <class T>
bool Stack<T>::empty() {
    return elements.empty();
}


int main() {
    try {
        Stack<int> intStack;       // stack of ints    => T=int
        Stack<string> stringStack; // stack of strings  => T = string

        // manipulate integer stack
        intStack.push(7);
        intStack.push(8);
        cout << intStack.top() << endl;

        // manipulate string stack
        stringStack.push("hello");
        cout << stringStack.top() << std::endl;
        stringStack.pop();
        stringStack.pop();
    }
    catch (exception const &ex) {
        cerr << "Exception: " << ex.what() << endl;
        return -1;
    }
}

// Output:
//8
//hello
//Exception: Stack<>::pop(): empty stack
