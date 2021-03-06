## Exercise 2.1

> What are the differences between int, long, long long, and short? Between an unsigned and a signed type? Between a float and a double?

- The language guarantees that `int` will be at least as large as `short` (16 bits), `long` at least 32 bits, `long long` at least 64 bits.

- A `signed` type represents negative or positive numbers(including zero); An `unsigned` type represents only value greater than or equal to zero.

- Typically, `float` is prepresented in one word(32 bits), `double` in two words(64 bits), and `long doubles` in either three or four words(96 or 128 bits)

__Deciding which type to use__

- Use an unsigned type when you know that the values cannot be negative.
- Use `int` for integer arithmetic. `short` is usually too small and, in practice, `long` often has the same size as `int`. If your data values are larger than the minimum guaranteed size of an `int`, then use `long long`.
- Do not use plain `char` or `bool` in arithmetic expressions. Use them _only_ to hold characters or truth values.
- Use `double` for floating-point computations; `float` usually does not have enough precision, and the cost of double-precision calculations versus single-precision is negligible.

## Exercise 2.2

> To calculate a mortgage payment, what types would you use for the rate, principal, and payment? Explain why you selected each type.

use `double`

## Exercise 2.3 

> What output will the following code produce?
```cpp
unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl;
std::cout << u - u2 << std::endl;
int i = 10, i2 = 42;
std::cout << i2 - i << std::endl;
std::cout << i - i2 << std::endl;
std::cout << i - u << std::endl;
std::cout << u - i << std::endl;
```

32

2^32 - 32 = 4294967264

32

-32

0

0

## Exercise 2.4

> Write a program to check whether your predictions were correct. If not, study this section until you understand what the problem is.

## Exercise 2.5

> Determine the type of each of the following literals. Explain the differences among the literals in each of the four examples:
- (a) 'a', L'a', "a", L"a"
- (b) 10, 10u, 10L, 10uL, 012, 0xC
- (c) 3.14, 3.14f, 3.14L
- (d) 10, 10u, 10., 10e-2

(a) character literal, wide character, string literal, ?
(b) decimal, unsigned decimal, long decimal, unsigned long decimal, octal, hexadecimal
(c) double, float, long double
(d) decimal, unsigned decimal, double, double

## Exercise 2.6

> What, if any, are the differences between the following definitions:
```cpp
int month = 9, day = 7;
int month = 09, day = 07;
```

## Exercise 2.7

> What values do these literals represent? What type does each have?
- (a) "Who goes with F\145rgus?\012"
- (b) 3.14e1L
- (c) 1024f
- (d) 3.14L

[ASCII Table](http://www.asciitable.com)

## Exercise 2.8

> Using escape sequences, write a program to print 2M followed by a newline. Modify the program to print 2, then a tab, then an M, followed by a newline.

[code](ex2_8.cpp)

## Exercise 2.9

> Explain the following definitions. For those that are illegal, explain what’s wrong and how to correct it.
- (a) std::cin >> int input_value;
- (b) int i = { 3.14 };
- (c) double salary = wage = 9999.99;
- (d) int i = 3.14;

(a): error
(b): error
(c): error, wage is not defined
(d): correct but will be truncated

## Exercise 2.10

> What are the initial values, if any, of each of the following variables?
```cpp
std::string global_str;
int global_int;
int main()
{
    int local_int;
    std::string local_str;
}
```	

Uninitialized objects of built-in type defined inside a function body have a undefined value. Objects of class type that we do not explicitly inititalize have a value that is defined by class.

## Exercise 2.11

> Explain whether each of the following is a declaration or a definition:
- (a) extern int ix = 1024;
- (b) int iy;
- (c) extern int iz;

(a): definition
(b): definition
(c): declaration

## Exercise 2.12

> Which, if any, of the following names are invalid?
- (a) int double = 3.14;
- (b) int _;
- (c) int catch-22;
- (d) int 1_or_2 = 1;
- (e) double Double = 3.14;

(a), (c), (d)

## Exercise 2.13

> What is the value of j in the following program?
```cpp
int i = 42;
int main()
{
	int i = 100;
	int j = i;
}
```

100

## Exercise 2.14

> Is the following program legal? If so, what values are printed?
```cpp
int i = 100, sum = 0;
for (int i = 0; i != 10; ++i)
    sum += i;
std::cout << i << " " << sum << std::endl;
```

100 45

## Exercise 2.15

> Which of the following definitions, if any, are invalid? Why?
- (a) int ival = 1.01;
- (b) int &rval1 = 1.01;
- (c) int &rval2 = ival;
- (d) int &rval3;

(b) initializer must be an object
(d) a reference must be initialized

## Exercise 2.16

> Which, if any, of the following assignments are invalid? If they are valid, explain what they do.
```cpp
int i = 0, &r1 = i; double d = 0, &r2 = d;
```
- (a) r2 = 3.14159;
- (b) r2 = r1;
- (c) i = r2;
- (d) r1 = d;

(a) assign d 3.14159
(b) i will convert to double
(c) truncated
(d) truncated

## Exercise 2.17

> What does the following code print?
```cpp
int i, &ri = i;
i = 5; ri = 10;
std::cout << i << " " << ri << std::endl;
```

10 10

## Exercise 2.18

> Write code to change the value of a pointer. Write code to change the value to which the pointer points.

```cpp
int a = 1, b = 2;
int *p1 = &a, *p2 = p1;
p1 = &b;
*p1 = 3;
```

## Exercise 2.19

> Explain the key differences between pointers and references.

A __reference__ defines an alternative name for an object

A __pointer__ is a compound type that 'points to' another type.

#### Differences

- a reference is another name of an already existing object. a pointer is an object in its own right
- Once initialized, a reference remains bound to its initial object. A pointer can be assigned and copied.
- A reference must be initialized. A pointer need not be initialized at the time it is defined.

## Exercise 2.20

> What does the following program do?
```cpp
int i = 42;
int *p1 = &i;
*p1 = *p1 * * p1;
```

p1 = 42 * 42 = 1764

## Exercise 2.21

> Explain each of the following definitions. Indicate whether any are illegal and, if so, why.
```cpp
int i = 0;
```
(a) double * dp = &i;
(b) int *ip = i;
(c) int *p = &i;

(a) type error
(b) i is not address

## Exercise 2.22

> Assuming p is a pointer to int, explain the following code:
```cpp
if (p) // ...
if (*p) // ...
```

First one check whether p == nullptr
Second one check the value of p points to whether is 0

## Exercise 2.23

> Given a pointer p, can you determine whether p points to a valid object? If so, how? If not, why not?

No, A pointer need not be initialized at the time it is defined. More info need to be provided.

## Exercise 2.24

> Why is the initialization of p legal but that of lp illegal?
```cpp
int i = 42;
void *p = &i;
long *lp = &i;
```

C++ forbids implicit conversions like `long *lp = &i;` but `void*` is a special pointer that may point to any type 

## Exercise 2.25

> Determine the types and values of each of the following variables.
- (a) ```cpp int* ip, i, &r = i; ```
- (b) ```cpp int i, *ip = 0; ```
- (c) ```cpp int* ip, ip2; ```

(a) ip is a pointer of int, i is an int, r is a reference of i
(b) i is an int, ip is `nullptr`
(c) ip is a pointer of int, ip2 is an int

## Exercise 2.26

> Which of the following are legal? For those that are illegal, explain why.
- (a) const int buf;
- (b) int cnt = 0;
- (c) const int sz = cnt;
- (d) ++cnt; ++sz;

(a) not initialized
(d) sz is _const_ 


## Exercise 2.27

> Which of the following are legal? For those that are illegal, explain why.

(a) ```cpp int i = -1, &r = 0; ```

r must refer to an object

(b) ```cpp int *const p2 = &i2; ```

If `i2` is exist, legal.

(c) ```cpp const int i = -1, &r = 0; ```

legal

(d) ```cpp const int *const p3 = &i2; ```

legal

(e) ```cpp const int *p1 = &i2; ```

legal

(f) ```cpp const int &const r2 ```

r2 is not an object which can not _const_;

(g) ```cpp const int i2 = i, &r = i; ```

legal

## Exercise 2.28

> Explain the following definitions. Identify any that are illegal.

(a) ```cpp int i, *const cp; ```

cp need initialize

(b) ```cpp int *p1, *const p2; ```

p2 need initialize

(c) ```cpp const int ic, &r = ic; ```

ic need initialize

(d) ```cpp const int *const p3; ```

p3 need initialize

(e) ```cpp const int *p; ```

legal. p is a pointer to _const_ int

## Exercise 2.29

> Uing the variables in the previous exercise, which of the following assignments are legal? Explain why.

(a) ```cpp i = ic; ```
 
legal

(b) ```cpp p1 = p3; ```

p3 is _const_ pointer to a _const_ int

(c) ```cpp p1 = &ic; ```

ic is a _const_ int

(d) ```cpp p3 = &ic; ```

p3 is a _const_ pointer

(e) ```cpp p2 = p1; ```

p2 is a _const_ pointer

(f) ```cpp ic = *p3; ```

ic is _const_ int

## Exercise 2.30

> For each of the following declarations indicate whether the object being declared has top-level or low-level _const_

```cpp
const int v2 = 0; // top
int v1 = v2; // N/A
int *p1 = &v1, &r1 = v1; // N/A
const int *p2 = &v2, *const p3 = &i, &r2 = v2; // p2 has low, p3 has top and low, r2 has low
```

## Exercise 2.31

> Given the declarations in the previous exercise determine whether the following assignments are legal. Explain how the top-level or low-level const applies in each case.

```cpp r1 = v2; ```

Legal. v2 is top-level _const int_.

```cpp p1 = p2; ```

p2 is low-level pointer to _const int_, which cannot assign to pointer to _int_ 

```cpp p2 = p1; ```

Legal. p2 is low-level pointer to _const int_

```cpp p1 = p3; ```

p3 is a _const_ pointer to _const int_, which has both high and low level _const_, which cannot assign to pointer to _int_

```cpp p2 = p3; ```

Legal. p2 is low-level pointer to _const int_ and p3 is a _const_ pointer to _const int_, which has both high and low level _const_

## Exercise 2.32

> Is the following code legal or not? If not, how might you make it legal?
```cpp
int null = 0, *p = null;
```

~~_null_ is keyword.~~ 
*p should equal `nullptr`

## Exercise 2.33

> Using the variable definitions from this section, determine what happens in each of these assignments:

```cpp
a = 42; // assign 42 to a
b = 42; // assign 42 to b
c = 42; // assign 42 to c
d = 42; // error, d is a pointer to int
e = 42; // error, e is a pointer to const int
f = 42; // assign 42 to f
g = 42; // error, g is a refer to const int, 42 is not an object
```

## Exercise 2.34

> Write a program containing the variables and assignments from the previous exercise. Print the variables before and after the assignments to check whether your predictions in the previous exercise were correct. If not, study the examples until you can convince yourself you know ￼￼what led you to the wrong conclusion.

[code](ex2_34.cpp)

## Exercise 2.35

> Determine the types deduced in each of the following definitions. Once you’ve figured out the types, write a program to see whether you were correct.
```cpp
const int i = 42;
auto j = i; const auto &k = i; auto *p = &i; 
const auto j2 = i, &k2 = i;
```

i is a _const int_

j is a _int_

k is a refer to _const int_

p is ~~a pointer to _int_~~ _const int*_

j2 is a _const int_

k2 is ~~a refer to _int_~~ _const int&_

## Exercise 2.36

> In the following code, determine the type of each variable and the value each variable has when the code finishes:
```cpp 
int a = 3, b = 4;
decltype(a) c = a;
decltype((b)) d = a;
++c;
++d;
```

a is _int_, b is _int_

c is _int_

d is refer to a

a = 4, b = 4, c = 4, d = 4

## Exercise 2.37

> Assignment is an example of an expression that yields a reference type. The type is a reference to the type of the left-hand operand. That is, if i is an int, then the type of the expression i = x is int&. Using that knowledge, determine the type and value of each variable in this code:
```cpp
int a = 3, b = 4;
decltype(a) c = a;
decltype(a = b) d = a;
```

a is _int_, a = 3

b is _int_, b = 4

c is _int_, c = 3

d is _int&_, d = 3 

## Exercise 2.38

> Describe the differences in type deduction between decltype and auto. Give an example of an expression where auto and decltype will deduce the same type and an example where they will deduce differing types.

`decltype` returns the type of that, variable, including top-level `const` and reference, `auto` not.

`decltype` could get the type that expression yields, `auto` can't

[code](ex2_38.cpp)

## Exercise 2.39

> Compile the following program to see what happens when you forget the semicolon after a class definition. Remember the message for future reference.
```cpp
struct Foo { /* empty  */ } // Note: no semicolon
int main()
{
    return 0;
}
```

error: expected ';' after struct

## Exercise 2.40

> Write your own version of the `Sales_data` class.

```cpp
struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
```

## Exercise 2.41

> Use your Sales_data class to rewrite the exercises in § 1.5.1(p. 22), § 1.5.2(p. 24), and § 1.6(p. 25). For now, you should define your Sales_data class in the same file as your main function.

[code](ex2_41.cpp)

## Exerciese 2.42

> Write your own version of the Sales_data.h header and use it to rewrite the exercise from § 2.6.2(p. 76)

[code](Sales_data.h)