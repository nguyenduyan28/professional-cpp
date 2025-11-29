
/*
Suppose you have this class 
class Foo
{
  public:
  private:
    Foo(double value);
    double m_value { 0 };
};
Foo::Foo(double value) : m_value { value }
{
  cout << "Foo::m_value = " << m_value << endl;
}

class myclass
{
  public:
    myclass(double value);
  private:
    double m_value { 0 };
    foo m_foo;
};

Its constructor could be implemented as follows:
MyClass::MyClass(double value) : m_value { value }, m_foo { m_value }
{
  cout << "MyClass::m_value = " << m_value << endl;
}

MyClass instance {1.2};
--> Foo::m_value = 1.2;
--> MyClass::m_value = 1.2;

but if we change the order to 

class MyClass
{
  public:
    MyClass(double value);
  private:
    Foo m_foo;
    double m_value { 0 };
};

MyClass::MyClass(double value) : m_value { value }, m_foo { m_value }
{
  cout << "MyClass::m_value = " << m_value << endl;
}

MyClass instance {1.2};
--> Foo::m_value = -9.25596e+61;
--> MyClass::m_value = 1.2;

- Because of the initialization order of variable is not in constructor, it is when you define variable. So in second case, Foo constructor is first to initialize.
--> Ctor-initializers initialize data members in their declared order in the
class definition, not their order in the ctor-initializer list.

*/

/*
Copy Constructor 



*/