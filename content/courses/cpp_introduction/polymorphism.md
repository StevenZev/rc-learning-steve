---
title: "Polymorphism and Operator Overloading"
toc: true
type: book
weight: 94
---

Polymorphism means "many shapes."  In C++ it refers to the ability to define functions with the same name but different arguments, or in different classes; the latter case amounts to at minimum a different type for the hidden instance variable among the arguments.  There are two types of polymorphism: compile time and runtime.

For a compiler, _binding_ is the process of associating the calls to a function name with the actual definition of the function.  Compile-time polymorphism means that this binding takes place at compile time and does not change when the program is run.  Hence it is often called _static binding_ or _early binding_.  Runtime binding is also possible; in this case the compiler's runtime library is responsible for associating the invocation with the function definition.  This is called _dynamic binding_ or _late binding_. 

## Compile-Time Polymorphism

### Overloading and Templating

Compile-time polymorphism is not limited to user-defined classes.  Functions may be **overloaded** by defining different functions with the same name but different return types and/or different argument lists, in number and/or type of arguments.  The compiler internally generates a "mangled" function name that creates a unique function for each case.

{{< code file="/courses/cpp_introduction/codes/overload.cxx" lang="c++" >}}

Templating is a form of overloading.  We can convert our `sum` function into a template, and it will work for any type for which the `+` operator is defined.

{{< code file="/courses/cpp_introduction/codes/sum_template.cxx" lang="c++" >}}

The `class` variable name (`typename` may also be used) is arbitrary, but `T` is customary.

### Overriding Class Methods

Even more generally, inherited class methods can be **overridden** by derived classes, modifying them to be more appropriate to the derived class. 

{{< code file="/courses/cpp_introduction/codes/override.cxx" lang="c++" >}}

## Runtime Polymorphism

Runtime polymorphism, or late binding, is achieved in C++ through _virtual functions_.  The virtual function is declared in the base class and is referenced through pointers or references in the derived classes.

{{< code file="/courses/cpp_introduction/codes/virtual.cxx" lang="c++" >}}

In this example we attach instances of each type to a _reference_ to the appropriate type.

Among other things, virtual functions enable behaviors to occur when an instance of a class is passed (as a pointer or reference) to a function.  The function can bind the class method dynamically when it is invoked.

{{< code file="/courses/cpp_introduction/codes/late_binding.cxx" lang="c++" >}}

Without `virtual` each derived class would need its own version of `printme`.

Note that dynamic/late binding can be slow, so use it judiciously for codes where performance is important.

## Operator Overloading

Just as named functions can be overloaded, so can operators.  This allows the programmer to define operators on user-defined types (structs and classes), which can result in much more compact and intuitive code, as long as the operators chosen are appropriate and make sense in the context in which they are used.  For example, a programmer can define
```c++
//Partial implementation
class Point {
   public:
      float x,y;
      Point(float x, float y);
      Point operator+(Point another);
};

Point Point::operator+(Point another);
    return Point(x+another.x,y+another.y);
}
```
In this example,
```c++
Point A(x1,y1), B(x2,y2); 
Point C(0.,0.);
C=A+B;
```
makes intuitive sense.  We would not want to overload multiplication with this definition.

Most C++ operators, including several we have not discussed, can be overloaded.
The syntax is `operator<symbol>(args)`.

Assignment has a few extra requirements.  It must be a member function of a struct or class.  The argument is the _right_ side of the equality and must be declared `const`.  
```c++
class Point {
   public:
      float x,y;
      Point(float x, float y);
      Point operator+(Point another);
      Point& operator=(const Point&);
};

Point& Point::operator=(const Point& rhs) {
    x=rhs.x;
    y=rhs.y;
    return this;
}
```

For a good discussion of operator overloading, see [here](https://docs.microsoft.com/en-us/cpp/cpp/operator-overloading?view=msvc-160) or [here](https://en.cppreference.com/w/cpp/language/operators).  

Overloaded operators other than assignment (=) can be inherited by derived classes.