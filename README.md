# CodingX

My C++ battle ground :fire:.

## Table of Contents

* [CodingX](#codingx)
  * [Table of Contents](#table-of-contents)
  * [About TOC](#about-toc)
  * [TAppExtendedCollection](#tappextendedcollection)
  * [The differences between C Plus Plus and C](#the-differences-between-c-plus-plus-and-c)
     * [1. Passing variables via reference was a C Plus Plus addition to C.](#1-passing-variables-via-reference-was-a-c-plus-plus-addition-to-c)
     * [2. The method to play with strings](#2-the-method-to-play-with-strings)
  * [F.A.Q](#faq)
     * [What is the absolute value of the max negative integer](#what-is-the-absolute-value-of-the-max-negative-integer)
     * [exit function](#exit-function)
     * [const in C Plus Plus declaration](#const-in-c-plus-plus-declaration)
     * [static in C Plus Plus](#static-in-c-plus-plus)
     * [long long](#long-long)
  * [Handy Links](#handy-links)


## About TOC
Run `./gh-md-toc README.md` from terminal to generate the updated 
TOC, then copy paste to update [Table of Contents](#table-of-contents).

[Reference](https://github.com/ekalinin/github-markdown-toc)

## TAppExtendedCollection
The questions, which are not from the official examples
in the book of **Coding Interview** but worth a look, are
included in this section. 

## The differences between C Plus Plus and C 
>Note: This is a constantly updated section.
### 1. Passing variables via reference was a C Plus Plus addition to C.
[Reference](http://duramecho.com/ComputerInformation/WhyHowCppConst.html)

E.G., the `Subroutine1` function below accepts the parameter passed to it in the default 
C & C++ way, which is a copy. Therefore the subroutine can read the value of the variable 
passed to it but not alter it because any alterations it makes are only made to the copy and 
are lost when the subroutine ends.
```c++
void Subroutine1(int iParameter1)
{
    iParameter1 = 96;
}
```

The `Subroutine2` function introduces the addition of an `&` to the parameter name in C++,
causes the actual variable itself, rather than a copy, to be used as the parameter in the 
subroutine and therefore can be written to thereby passing data back out the subroutine.

```C++
void Subroutine2(int &iParameter2)
{
    iParameter2 = 96;
}
```

### 2. The method to play with strings

C uses **array of chars** to represent string while Cpp has a **dedicated String class** for manipulating strings.

Meanwhile, the C-style string method is also available in C++.

## F.A.Q

### What is the absolute value of the max negative integer
[Reference](https://stackoverflow.com/questions/11243014/why-the-absolute-value-of-the-max-negative-integer-2147483648-is-still-2147483)

```c++
printf("abs(-2147483648): %d\n", abs(-2147483648));
//output: abs(-2147483648): -2147483648
```
>The `abs`, `labs`, and `llabs` functions compute the absolute value of an integer j. If the result cannot be represented, the behavior is undefined.

And the result indeed cannot be represented because the 2's complement representation of signed integers isn't symmetric.
Since 2147483648 is greater than INT_MAX on implementation, then abs(-2147483648) is undefined.

### `exit` function
[Reference](https://docs.microsoft.com/en-us/cpp/cpp/exit-function)

The `exit` function, declared in the standard include file STDLIB.H, terminates a C++ program.

The value supplied as an argument to exit is returned to the operating system as 
the program's return code or exit code. By convention, a return code of zero means 
that the program completed successfully.

>You can use the constants `EXIT_FAILURE` and `EXIT_SUCCESS`, 
>defined in STDLIB.H, to indicate success or failure of your program.

Issuing a `return` statement from the main function is equivalent to 
calling the `exit` function with the return value as its argument.

To destroy an automatic object before you call `exit`, `_Exit`, or `_exit`, 
explicitly call the destructor for the object, as shown here:
```c++
void last_fn() {}
    struct SomeClass {} myInstance{};
    // ...
    myInstance.~SomeClass(); // explicit destructor call
    exit(0);
}
```

### `const` in C Plus Plus declaration
[Reference1](http://duramecho.com/ComputerInformation/WhyHowCppConst.html)|
[Reference2](https://stackoverflow.com/questions/8808167/c-const-correctness-and-pointer-arguments)|
[Reference3](https://stackoverflow.com/questions/7715371/whats-the-point-of-const-pointers)
1. `const` applies to whatever is on **its immediate left** (other than if there is *nothing* there in which case 
  it applies to whatever is **its immediate right**).
2. Of the possible combinations  of pointers and `const`, the constant pointer to a variable is useful for storage 
  that can be changed in value but **not moved in memory**.

### `static` in C Plus Plus
[Reference](https://www.cprogramming.com/tutorial/statickeyword.html)

The keyword static can be used in three major contexts: 
1. inside a function, 
    - The use of static inside a function is the simplest. It simply means that once the variable has been initialized, it remains in memory until the end of the program.
    - We can use static variable inside a loop to prevent reinitialization to count how many times this function has been called.
2. inside a class definition, and 
    - While most variables declared inside a class occur on an instance-by-instance basis (which is to say that for each instance of a class, the variable can have a different value), a static member variable has the same value in any instance of the class and doesn't even require an instance of the class to exist.
    - Importantly, it is good syntax to refer to static member functions through the use of a class name (class_name::x; rather than instance_of_class.x;). Doing so helps to remind the programmer that static member variables do not belong to a single instance of the class and that you don't need to have a single instance of a class to use a static member variable. 
    - An important detail to keep in mind when debugging or implementing a program using a static class member is that you cannot initialize the static class member inside of the class. In fact, if you decide to put your code in a header file, you cannot even initialize the static variable inside of the header file; do it in a .cpp file instead. Moreover, you are required to initialize the static class member or it will not be in scope. (The syntax is a bit weird: "type class_name::static_variable = value".)
    - Static member functions of a class. Static member functions are functions that do not require an instance of the class, and are called the same way you access static member variables -- with the class name rather than a variable name. (E.g. a_class::static_function(); rather than an_instance.function();)
    - Static member functions can only operate on static members, as they do not belong to specific instances of a class. 
3. in front of a global variable inside a file making up a multi-file program.
    - In this case, the use of static indicates that source code in other files that are part of the project cannot access the variable. Only code inside the single file can see the variable. (It's scope -- or visibility -- is limited to the file.) This technique can be used to simulate object oriented code because it limits visibility of a variable and thus helps avoid naming conflicts. This use of static is a holdover from C.
    - Static is a keyword with many meanings, and in this particular case, it means not global (paraphrasing)
      
      It means that each `.cpp` file has its own copy of the variable. Thus, when you initialize in `main.cpp`, it is initialized **ONLY** in `main.cpp`. The other files have it still **uninitialized**.
### `long long`

| Specifier(s)  | Type          | 
| ------------- |:-------------:|
| long long int | long long int |
| long long     | long long int |
| long int      | long int      |
| long          | long int      |

`long` at least 32 bits;
`long long` at least 64 bits.

## Handy Links
* [Bjarne Stroustrup's homepage](http://www.stroustrup.com)
* [Bjarne Stroustrup's recommendation: Cpp Core Guidelines](https://github.com/isocpp/CppCoreGuidelines)
* [Bjarne Stroustrup's C++ Glossary](http://www.stroustrup.com/glossary.html)
* [Bjarne Stroustrup's explanation about `exception`](http://www.stroustrup.com/bs_faq2.html#exceptions-why)
* [Bjarne Stroustrup: What is so great about classes?](http://www.stroustrup.com/bs_faq.html#class)
* [What is OOP](http://duramecho.com/ComputerInformation/WhatIsObjectOrientedProgramming.html)
* [Cpp String Examples](http://anaturb.net/C/string_exapm.htm)
