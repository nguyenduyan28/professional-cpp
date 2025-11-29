/*
Delegating constructors allow constructors to call another constructor from the same class. However,
this call cannot be placed in the constructor body; it must be in the ctor-initializer, and it must be the
only member-initializer in the list. 



Make sure you avoid constructor recursion while using delegate constructors. Here is an example:
  class MyClass
  {
    MyClass(char c) : MyClass { 1.2 } { }
    MyClass(double d) : MyClass { 'm' } { }
  };
The first constructor delegates to the second constructor, which delegates back to the first one. The
behavior of such code is undefined by the standard and depends on your compiler.
*/ 