// Muhammad Umar Toshpo'latov 220085
// Tuesday 14:00 group

// Qusetion 1
#include <iostream>
using namespace std;

int main(int argumentCount, char *argumentValues[])
{
  cout << "Number of arguments passed: " << argumentCount << endl;
  cout << "Provided arguments are:" << endl;

  for (int index = 0; index < argumentCount; ++index)
  {
    cout << "Argument " << index << ": " << argumentValues[index] << endl;
  }

  return 0;
}

// Question 2
// In C++, execution starts from the main() function.

// Question 3
// In Java, main is always public static void. In C++, it returns an int (exit code).

// Question 4
// In C++, returning 0 means success, any other value signals error. 
// In Java, System.exit(code) is used to provide exit codes.


// VARIABLES
// Question 1
#include <iostream>
using namespace std;

int main()
{
  int firstNum = 10, secondNum = 20;

  cout << "Before swapping: firstNum = " << firstNum << ", secondNum = " << secondNum << endl;

  firstNum = firstNum + secondNum;
  secondNum = firstNum - secondNum;
  firstNum = firstNum - secondNum;

  cout << "After swapping: firstNum = " << firstNum << ", secondNum = " << secondNum << endl;
  return 0;
}

// Question 2
// Primitive variables store direct values, while reference ones store memory locations.

// Question 3
// Local variables exist only inside functions/blocks. Static ones live for the whole program lifecycle.

// Question 4
// C++ uses compile-time type checking.


// CONTROL FLOW
// Question 1
#include <iostream>
using namespace std;

int main()
{
  int prev = 0, curr = 1, nextVal;
  cout << "First 10 Fibonacci numbers: ";

  for (int i = 1; i <= 10; ++i)
  {
    if (i == 1)
    {
      cout << prev << " ";
      continue;
    }
    if (i == 2)
    {
      cout << curr << " ";
      continue;
    }
    nextVal = prev + curr;
    prev = curr;
    curr = nextVal;
    cout << nextVal << " ";
  }
  cout << endl;
  return 0;
}

// Question 2
// while checks before the loop body, do-while checks after (executes at least once).

// Question 3
// switch selects one branch from multiple cases.

// Question 4
// Short-circuiting skips unnecessary checks. Example: (x != 0 && 10 / x > 1).


// FUNCTION METHODS
// Question 1
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool checkPalindrome(const string &text)
{
  return equal(text.begin(), text.begin() + text.size() / 2, text.rbegin());
}

int main()
{
  cout << "madam is palindrome? " << (checkPalindrome("madam") ? "true" : "false") << endl;
  cout << "hello is palindrome? " << (checkPalindrome("hello") ? "true" : "false") << endl;
  return 0;
}

// Question 2
// C++ supports passing by value, by reference, and by pointer. Java always passes by value.

// Question 3
// Overloading requires different argument lists. Return type alone doesn’t differentiate functions.

// Question 4
// Recursion = function calling itself. Base condition stops infinite loops.


// COMMENTS
// Question 1
#include <iostream>
using namespace std;

/**
 * Documentation style comment (works with Doxygen/Javadoc)
 */
int main()
{
  // Single line comment
  int number = 5; // inline comment

  /*
     Multi-line comment
     used for explanation
  */
  cout << "Comments demonstration" << endl;
  return 0;
}

// Question 2
// Comments improve readability and teamwork.

// Question 3
// Tools like Javadoc/Doxygen turn comments into documentation.

// Question 4
// Clean code reduces comment need, but they clarify tricky logic.


// CLASSES
// Question 1
#include <iostream>
using namespace std;

class BankAccount
{
private:
  double balance;

public:
  BankAccount(double initialAmount)
  {
    balance = (initialAmount >= 0) ? initialAmount : 0;
  }
  void deposit(double amount)
  {
    if (amount > 0)
      balance += amount;
  }
  double getBalance()
  {
    return balance;
  }
};

int main()
{
  BankAccount myAccount(100.5);
  cout << "Initial: " << myAccount.getBalance() << endl;
  myAccount.deposit(50.25);
  cout << "After deposit: " << myAccount.getBalance() << endl;
  return 0;
}

// Question 2
// Class = blueprint, Object = actual instance.

// Question 3
// Public = accessible everywhere, Private = within class, Protected = class + subclasses.

// Question 4
// Constructor initializes objects. If none written, a default is created.


// ENUMS
// Question 1
#include <iostream>
#include <string>
using namespace std;

enum class Season
{
  SPRING,
  SUMMER,
  AUTUMN,
  WINTER
};

string suggestActivity(Season s)
{
  switch (s)
  {
  case Season::SPRING:
    return "Plant flowers";
  case Season::SUMMER:
    return "Go swimming";
  case Season::AUTUMN:
    return "Collect leaves";
  case Season::WINTER:
    return "Build a snowman";
  default:
    return "Relax";
  }
}

int main()
{
  Season today = Season::AUTUMN;
  cout << suggestActivity(today) << endl;
  return 0;
}

// Question 2
// Enums replace magic numbers/strings for better safety.

// Question 3
// They increase clarity and reduce bugs.

// Question 4
// C++11 enums are strongly typed. Java enums can also hold fields/methods.


// INHERITANCE
// Question 1
#include <iostream>
using namespace std;

class Vehicle
{
public:
  void startEngine() { cout << "Engine started." << endl; }
};

class Car : public Vehicle
{
public:
  void drive() { cout << "Car is moving." << endl; }
};

int main()
{
  Car myCar;
  myCar.startEngine();
  myCar.drive();
  return 0;
}

// Question 2
// is-a relation uses inheritance, has-a uses composition.

// Question 3
// Overriding = redefining method. C++: virtual/override, Java: @Override.

// Question 4
// Diamond issue in multiple inheritance fixed in C++ with virtual inheritance. Java uses interfaces.


// MIXINS / INTERFACES
// Question 1
#include <iostream>
#include <string>
using namespace std;

class IStringable
{
public:
  virtual string toString() const = 0;
  virtual ~IStringable() = default;
};

class Printable
{
public:
  void print(const IStringable &obj)
  {
    cout << obj.toString() << endl;
  }
};

class Book : public IStringable
{
private:
  string title, author;

public:
  Book(string t, string a) : title(t), author(a) {}
  string toString() const override
  {
    return "'" + title + "' by " + author;
  }
};

int main()
{
  Book myBook("The Hobbit", "J.R.R. Tolkien");
  Printable printer;
  printer.print(myBook);
  return 0;
}

// Question 2
// Interfaces/mixins add features without strict inheritance.

// Question 3
// Java default methods behave like mixins.

// Question 4
// Inheritance = simple but rigid. Composition = flexible. Mixins = reusable but complex.


// POLYMORPHISM
// Question 1
#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Shape
{
public:
  virtual double getArea() const = 0;
  virtual ~Shape() = default;
};

class Rectangle : public Shape
{
  double width, height;

public:
  Rectangle(double w, double h) : width(w), height(h) {}
  double getArea() const override { return width * height; }
};

class Circle : public Shape
{
  double radius;

public:
  Circle(double r) : radius(r) {}
  double getArea() const override { return 3.14159 * radius * radius; }
};

int main()
{
  vector<unique_ptr<Shape>> figures;
  figures.push_back(make_unique<Rectangle>(10, 5));
  figures.push_back(make_unique<Circle>(3));

  for (const auto &shape : figures)
  {
    cout << "Area: " << shape->getArea() << endl;
  }
  return 0;
}

// Question 2
// Two types: compile-time (overloading), runtime (overriding).

// Question 3
// Abstract class can have mixed methods. Interface = only pure virtuals.

// Question 4
// Polymorphism defines contracts and enables flexible design.


// ASYNC OPERATIONS
// Question 1
#include <iostream>
#include <future>
using namespace std;

long long computeSum()
{
  long long total = 0;
  for (long long i = 1; i <= 1000000; ++i)
  {
    total += i;
  }
  return total;
}

int main()
{
  cout << "Main thread: starting task..." << endl;
  future<long long> result = async(launch::async, computeSum);

  cout << "Main thread: waiting for output..." << endl;
  cout << "Final Result: " << result.get() << endl;
  return 0;
}

// Question 2
// Async prevents blocking by running tasks separately.

// Question 3
// Parallel = simultaneous, Concurrent = interleaved execution.

// Question 4
// Future/Promise handle async results safely.


// EXCEPTIONS
// Question 1
#include <iostream>
#include <stdexcept>
using namespace std;

void checkAge(int age)
{
  if (age < 0)
    throw invalid_argument("Age cannot be negative.");
  cout << "Age is: " << age << endl;
}

int main()
{
  try
  {
    checkAge(-5);
  }
  catch (const invalid_argument &e)
  {
    cerr << "Error: " << e.what() << endl;
  }
  cout << "Program continues..." << endl;
  return 0;
}

// Question 2
// try = risky code, catch = handle exceptions, finally = always runs (Java). C++ uses RAII instead.

// Question 3
// Java: checked & unchecked. C++: all unchecked.

// Question 4
// Exceptions separate errors from normal flow, but overuse reduces clarity.
