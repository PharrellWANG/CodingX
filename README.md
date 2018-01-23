# CodingX

My C++ battle ground :fire:.

## Table of Contents

- [CodingX](#codingx)
  - [Table of Contents](#table-of-contents)
  - [TAppExtendedCollection](#tappextendedcollection)
  - [The differences between C Plus Plus and C](#the-differences-between-c-plus-plus-and-c)
     - [1. Passing variables via reference was a C Plus Plus addition to C.](#1-passing-variables-via-reference-was-a-c-plus-plus-addition-to-c)
  - [F.A.Q](#faq)
     - [What is the absolute value of the max negative integer](#what-is-the-absolute-value-of-the-max-negative-integer)
     - [exit function](#exit-function)
     - [const in C Plus Plus declaration](#const-in-c-plus-plus-declaration)
  - [Handy Links](#handy-links)

<!-- Run `./gh-md-toc README.md` from terminal to generate the updated 
TOC, then copy paste to above -->
<!-- Be careful of the format of table of contents, 
1. need to use `-` instead of `*`
2. need to use proper indent.(make sure not to overindent) 
-->
<!-- [Reference](https://github.com/ekalinin/github-markdown-toc) -->
<!-- END doctoc generated TOC please keep comment here to allow auto update -->

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
defined in STDLIB.H, to indicate success or failure of your program.

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
[Reference3](https://stackoverflow.com/questions/7715371/whats-the-point-of-const-pointers)|
1. `const` applies to whatever is on **its immediate left** (other than if there is *nothing* there in which case 
it applies to whatever is **its immediate right**).
2. Of the possible combinations  of pointers and `const`, the constant pointer to a variable is useful for storage 
that can be changed in value but **not moved in memory**.


## Handy Links
* [Bjarne Stroustrup's homepage](http://www.stroustrup.com)
* [Bjarne Stroustrup's recommendation: Cpp Core Guidelines](https://github.com/isocpp/CppCoreGuidelines)
* [Bjarne Stroustrup's C++ Glossary](http://www.stroustrup.com/glossary.html)
* [Bjarne Stroustrup's explanation about `exception`](http://www.stroustrup.com/bs_faq2.html#exceptions-why)
* [Bjarne Stroustrup: What is so great about classes?](http://www.stroustrup.com/bs_faq.html#class)
* [What is OOP](http://duramecho.com/ComputerInformation/WhatIsObjectOrientedProgramming.html)
