# CodingX

My C++ battle ground.

## Table of Contents

- [1.0 TAppExtendedCollection](#10-tappextendedcollection)
- [2.0 F.A.Q](#20-faq)
    - [2.1 What is the absolute value of the max negative integer](#21-what-is-the-absolute-value-of-the-max-negative-integer)
<!-- END doctoc generated TOC please keep comment here to allow auto update -->

## 1.0 TAppExtendedCollection
The questions, which are not from the official examples
in the book of **Coding Interview** but with some value, are
included in this section. 

## 2.0 F.A.Q
### 2.1 What is the absolute value of the max negative integer
[Reference](https://stackoverflow.com/questions/11243014/why-the-absolute-value-of-the-max-negative-integer-2147483648-is-still-2147483)
```c++
printf("abs(-2147483648): %d\n", abs(-2147483648));
//output: abs(-2147483648): -2147483648
```
>The `abs`, `labs`, and `llabs` functions compute the absolute value of an integer j. If the result cannot be represented, the behavior is undefined.

And the result indeed cannot be represented because the 2's complement representation of signed integers isn't symmetric.
Since 2147483648 is greater than INT_MAX on your implementation, then abs(-2147483648) is undefined. 


