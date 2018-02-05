

# CodingX

C++ battle ground :fire:.

## Table of Contents

* [CodingX](#codingx)
  * [Table of Contents](#table-of-contents)
  * [About TOC](#about-toc)
  * [TAppExtendedCollection](#tappextendedcollection)
  * [The differences between C Plus Plus and C](#the-differences-between-c-plus-plus-and-c)
     * [1. Passing variables via reference was a C Plus Plus addition to C.](#1-passing-variables-via-reference-was-a-c-plus-plus-addition-to-c)
     * [2. The method to play with strings](#2-the-method-to-play-with-strings)
  * [F.A.Q](#faq)
     * [ASCII Table](#ascii-table)
     * [What is the absolute value of the max negative integer](#what-is-the-absolute-value-of-the-max-negative-integer)
     * [exit function](#exit-function)
     * [const in C Plus Plus declaration](#const-in-c-plus-plus-declaration)
     * [static in C Plus Plus](#static-in-c-plus-plus)
     * [About Data Types in Cpp](#about-data-types-in-cpp)
     * [Uniform Distribution](#uniform-distribution)
     * [You better seed for random functions](#you-better-seed-for-random-functions)
     * [Non-deterministic randomness](#non-deterministic-randomness)
     * [Hash](#hash)
     * [Sequence Containers in Cpp](#sequence-containers-in-cpp)
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

### ASCII Table

https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html

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
### About Data Types in Cpp

1. 1 Byte == 8 Bits
2. Bit shift

``<< x`` <=> ``* 2^x`` (multiply with 2^x

``>> x`` <=> ``/ 2^x`` (divided by 2^x)

3. The expression `sizeof(type)` yields **the storage size of the object or type in bytes**. 
4. The powers of integer 2

| shit expression    | value         |
| ------------------ | ------------- |
| 1 << 8 (1 byte)    | 256           |
| 1 << 16 (2 bytes)  | 65536         |
| 1 << 32  (4 bytes) | 4,294,967,296 |

5. Integer types [Reference](https://www.tutorialspoint.com/cprogramming/c_data_types.htm)

| Type           | Storage size                             | Value range                              |
| -------------- | ---------------------------------------- | ---------------------------------------- |
| (signed) char  | 1 byte                                   | [-128, 127] \|\| [-(1<<7), (1<<7)-1]     |
| unsigned char  | 1 byte                                   | [0, 255] \|\| [0, (1 << 8) -1]           |
| (signed) int   | 2 bytes (32-bit PC), 4 bytes (64-bit PC) | [-32,768, 32,767], [-2,147,483,648, 2,147,483,647] \|\| [-(1<<15), (1<<15)-1], [-(2<<31), (2<<31)-1] |
| unsigned int   | 2 bytes (32-bit PC), 4 bytes (64-bit PC) | [0, 65535], [0, 4,294, 967, 295]\|\|[0, (1<<16)-1], [0, (1<<32)-1] |
| short          | 2 bytes                                  | [-32,768, 32,767] \|\| [-(1<<15), (1<<15)-1] |
| unsigned short | 2 bytes                                  | [0, 65535]\|\|[0, (1<<16)-1],            |
| long           | 4 bytes                                  | [-2,147,483,648, 2,147,483,647] \|\|  [-(2<<31), (2<<31)-1] |
| unsigned long  | 4 bytes                                  | [0, 4,294, 967, 295] \|\| [0, (1<<32) -1] |

6. Floating-point types [Reference](https://www.tutorialspoint.com/cprogramming/c_data_types.htm)

| Type        | Storage size | Precision         |
| ----------- | ------------ | ----------------- |
| float       | 4 bytes      | 6 decimal places  |
| double      | 8 bytes      | 15 decimal places |
| long double | 10 bytes     | 19 decimal places |

7. Type `long long`

| Specifier(s)  |     Type      |
| ------------- | :-----------: |
| long long int | long long int |
| long long     | long long int |
| long int      |   long int    |
| long          |   long int    |

`long` at least 32 bits （4 Bytes）;
`long long` at least 64 bits (8 Bytes).

### Uniform Distribution
 [Reference from Wikipedia](https://en.wikipedia.org/wiki/Uniform_distribution_(continuous))

 **PDF**, Probability Density Function

 **CDF**, Cumulative Distribution Function

 In probability theory and statistics, the continuous uniform distribution or rectangular distribution is 
 a family of symmetric probability distributions such that for each member of the family, all intervals of 
 the same length on the distribution's support are **equally probable**. The support is defined by the two 
 parameters, a and b, which are its minimum and maximum values. The distribution is often abbreviated U(a,b).

### You better seed for random functions

Keywords: 1. Pseudo-random 2. True-random 3. Seed

[Reference](www.random.org)

Perhaps you have wondered how predictable machines like computers can generate randomness. In reality, most random numbers used in computer programs are *pseudo-random*, which means they are generated in a predictable fashion using a mathematical formula. This is fine for many purposes, but it may not be random in the way you expect if you're used to dice rolls and lottery drawings.

[RANDOM.ORG](www.random.org) offers *true* random numbers to anyone on the Internet. The randomness comes from atmospheric noise, which for many purposes is better than the pseudo-random number algorithms typically used in computer programs. People use RANDOM.ORG for holding drawings, lotteries and sweepstakes, to drive online games, for scientific applications and for art and music. 



[Reference](https://stackoverflow.com/questions/1619627/what-does-seeding-mean)

Most random functions that are common on personal computers aren't random, but deterministic to a degree. The 'seed' for these psuedo-random functions are the starting point upon which future values are based. This is useful for debugging purposes: if you keep the seed the same from execution to execution you'll get the same numbers.

To get numbers that are **more** random **a different seed** is often used from execution to execution. This method is completely different than generating a 'true' random number based on some sort of physical property in the world around us (like www.random.org is using randomness comes from atmospheric noise).

Hence we often say that: *You better seed for random functions*.

A more human-readable explanation about **seed**:

> It means: pick a place to start.

> Think of a pseudo random number generator as just a really long list of numbers. This list is circular, it eventually repeats.

> To use it, you need to pick a starting place. This is called a "seed".

### Non-deterministic randomness

[Reference](https://en.m.wikipedia.org/wiki/Nondeterministic_algorithm)

In [computer science](https://en.m.wikipedia.org/wiki/Computer_science), a **nondeterministic algorithm** is an [algorithm](https://en.m.wikipedia.org/wiki/Algorithm) that, even for the same input, can exhibit different behaviors on different runs, as opposed to a [deterministic algorithm](https://en.m.wikipedia.org/wiki/Deterministic_algorithm). 

[`std::random_device`](http://en.cppreference.com/w/cpp/numeric/random/random_device) is a **non-deterministic uniform random number generator**, although implementations are allowed to implement [std::random_device](http://en.cppreference.com/w/cpp/numeric/random/random_device) using a pseudo-random number engine if there is no support for non-deterministic random number generation. (It is usually **just used to seed a pseudo-random generator**, since the underlying device wil usually run out of entropy quickly.)

`random_device` is non-deterministic random number generator using **hardware entropy source**. (Recall that the true randomness generators usually generates a true random number based on some sort of physical property in the world around us.)

Usage example:

```c++
/// A mordern appoach in C++ to generate pseudo randomness which 
/// is `more like` true randomness.
#include <iostream>
#include <random>
int main()
{
	// define the name of a function to obtain a true random number from entropy pool
	std::random_device rd; 
	// seed the pseudo random generator to make it more like true random
    std::mt19937 eng(rd()); 
    // define the range
    std::uniform_int_distribution<> distr(25, 63); 

    for(int n=0; n<40; ++n)
        // generate numbers
        std::cout << distr(eng) << ' '; 
}
```



About **hardware entropy source**:

The **entropy source**, a.k.a **randomness source**, is the randomness stored in **entropy pool** in your computer.

Pseudo random numbers are actually predictable by definition. To serve real ramdom numbers, the computer system first gathers true random numbers from outside world, e.g., the gaps between your keypresses and the network activity, and feeds those randomness to a place termed **entropy pool**, which can be deemed as the store of randomness which gets built up by the outside phsical activities and drained by the generation of true random numbers.

`std::mt19937` is **a fast pseudo-random number generator** using the [Mersenne Twister engine](https://dx.doi.org/10.1145%2F272991.272995) which, according to the original authors' paper title, is also **uniform**. This generates fully random 32-bit or 64-bit unsigned integers. Since `std::random_device` is only used to seed this generator, it does not have to be uniform itself (e.g., you often seed the generator using a current time stamp, which is definitely not uniformly distributed).

Typically, you use a generator such as `std::mt19937` to feed a particular *distribution*, e.g. a [`std::uniform_int_distribution`](http://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution) or [`std::normal_distribution`](http://en.cppreference.com/w/cpp/numeric/random/normal_distribution) which then take the desired distribution shape.

Usage example:

```c++
#include <iostream>
#include <string>
#include <map>
#include <random>
 
int main()
{
    std::random_device rd;
    std::map<int, int> hist;
    std::uniform_int_distribution<int> dist(0, 9);
    for (int n = 0; n < 20000; ++n) {
        ++hist[dist(rd)]; // note: demo only: the performance of many 
                          // implementations of random_device degrades sharply
                          // once the entropy pool is exhausted. For practical use
                          // random_device is generally only used to seed 
                          // a PRNG such as mt19937
    }
    for (auto p : hist) {
        std::cout << p.first << " : " << std::string(p.second/100, '*') << '\n';
    }
}
```

Possible output:

```c++
0 : ********************
1 : *******************
2 : ********************
3 : ********************
4 : ********************
5 : *******************
6 : ********************
7 : ********************
8 : *******************
9 : ********************
```



[`std::shuffle`](http://en.cppreference.com/w/cpp/algorithm/random_shuffle), according to the documentation, reorders the elements in the given range [first, last) such that each possible permutation of those elements has equal probability of appearance.

Usage example:

```c++
#include <random>
#include <algorithm>
#include <iterator>
#include <iostream>
 
int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 
    std::random_device rd;
    std::mt19937 g(rd());
 
    std::shuffle(v.begin(), v.end(), g);
 
    std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << "\n";
}
```

Possible output:

```c++
8 6 10 4 2 3 7 1 9 5
```

### Hash

[Reference](https://www.tutorialspoint.com/java/java_hashset_class.htm)

A hash table stores information by using a mechanism called **hashing**. In hashing, the informational content of a key is used to determine a **unique** value, called its hash code.

### Sequence Containers in Cpp

Keywords: classes of `vector`,` deque`, `list` 

Those sequence containers are also known as **data structures**.

[A good benchmark article about `vector`, `deque` and `list`](https://baptiste-wicht.com/posts/2012/12/cpp-benchmark-vector-list-deque.html) (Pay attention to the conclusion section in this article if you prefer a quick read)

[STL Containers - diffrence between vector, list and deque](https://stackoverflow.com/questions/9650254/stl-containers-diffrence-between-vector-list-and-deque)

### Call a constructor function without any arguments

When the parser sees ``MyClass myObj();``, it thinks you are trying to declare a function called ``myObj`` that has no parameters and returns a ``MyClass``.

The **correct** way is: ``MyClass myObj`` where parentheses do not occur.



## Handy Links
* [Bjarne Stroustrup's homepage](http://www.stroustrup.com)
* [Bjarne Stroustrup's recommendation: Cpp Core Guidelines](https://github.com/isocpp/CppCoreGuidelines)
* [Bjarne Stroustrup's C++ Glossary](http://www.stroustrup.com/glossary.html)
* [Bjarne Stroustrup's explanation about `exception`](http://www.stroustrup.com/bs_faq2.html#exceptions-why)
* [Bjarne Stroustrup: What is so great about classes?](http://www.stroustrup.com/bs_faq.html#class)
* [What is OOP](http://duramecho.com/ComputerInformation/WhatIsObjectOrientedProgramming.html)
* [Cpp String Examples](http://anaturb.net/C/string_exapm.htm)
