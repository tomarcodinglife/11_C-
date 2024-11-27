# CPP (C++) Language 
"Hello, my name is Sujit Tomar. I first learned C++ in 2021, and I'm still learning it today because I believe that continuous practice and staying updated with new knowledge are essential for growth."

### CPP Boilerplate Code

```cpp

#include <iostream>
#include <string>

using namespace std;

int main(){
    
    return 0;
}

```

## Data Type

Summary of C++ Data Types

| Data Type     | Description                                  |  Size (Typical)        | Example                         | 
| ------------- |:--------------------------------------------:| ----------------------:| -------------------------------:|
| int           | Integer value (whole numbers)                | 4 bytes                | int a = 10;                     |   
| short         | Smaller integer                              | 2 bytes                | short b = 5;                    | 
| long          | Larger integer                               | 4 or 8 bytes           | long c = 100000;                | 
| long long     | Very large integer                           | 8 bytes                | long long d = 100000000000LL;   | 
| unsigned      | Non-negative integer (used with any integer) | Depends on type        | unsigned int e = 25;            |
| float         | Floating-point number (decimal)              | 4 bytes                | float f = 3.14f;                | 
| double        | Double-precision floating-point number       | 8 bytes                | double g = 3.14159;             | 
| long double   | Extended precision floating-point number     | 10 or 12 bytes         | long double h = 2.718281828459; | 
| char          | Single character                             | 1 byte                 | char i = 'A';                   | 
| unsigned char | Non-negative character                       | 1 byte                 | unsigned char j = 'B';          | 
| signed char   | Signed character                             | 1 byte                 | signed char k = 'C';            | 
| bool          | Boolean value (true or false)                | 1 byte                 | bool l = true;                  | 
| std::string   | Sequence of characters (C++ string class)    | Depends on size        | std::string m = "Hello";        | 
| void          | No value or unknown type                     | -                      | void print() {}                 | 
| Pointer       | Holds memory address of a variable           | Depends on system      | int* ptr = &num;                | 
---

### Key Differences Between long and long long
| Feature           | long                                         |  long double                                         |
| ----------------- |:--------------------------------------------:| ----------------------------------------------------:|
|   Size         |Typically 4 bytes (32-bit) or 8 bytes (64-bit) depending on the system.| Always at least 8 bytes (64-bit)    |
|   Range         |Depends on the system (on 32-bit systems: -2^31 to 2^31-1, on 64-bit systems: -2^63 to 2^63-1). | Always from -2^63 to 2^63-1 for signed, 0 to 2^64-1 for unsigned.   |
|   Purpose         | Used for larger integers than int, but may not be large enough on some systems. |  Used for integers requiring guaranteed 64-bit size. |
|   Guarantee        |Not guaranteed to be 64-bit on all platforms. | Always guaranteed to be at least 64-bit. |
|   When to use?         |Use when you need a larger range than int, but not as large as long long.  | Use when you need guaranteed 64-bit precision. |


### Key Differences Between double and long double

| Feature       | double                                       |  long double                                             |
| ------------- |:--------------------------------------------:| --------------------------------------------------------:|
|  Size         | Typically 8 bytes (64 bits)                  | Typically 8 bytes (MSVC) or 16 bytes (GCC)               |            
|  Precision    | Around 15-16 decimal digits                  | Around 18-19 decimal digits or more                      |
|  Range        | ~ ±1.7 × 10³⁰                                | Larger than double, depending on the system              |
|  Use Case     |  General-purpose floating-point values       | Higher precision required (e.g., scientific calculations)|
|  Memory       |  Less memory usage compared to long double   | Uses more memory (if 16 bytes)
---

#### double Example 

```cpp
#include <iostream>
using namespace std;

int main() {
    double num1 = 3.141592653589793;
    cout << "Value of num1: " << num1 << endl;
    return 0;
}
```

#### long double Example 
```cpp
#include <iostream>
using namespace std;

int main() {
    long double num2 = 3.14159265358979323846264338327950288419716939937510L;
    cout << "Value of num2: " << num2 << endl;
    return 0;
}
```


## Operator in CPP
+ Arithmetic Operators :- " +, -, *, /, % "
- Assignment Operators :- " +=, -=, *=, /=, %= "
+ Relational Operators :- " > , >=, <, <= "
- Logical Operators :- " >> && and || "
+ **Bitwise Operators :- "(AND) &, (OR) |, (XOR) ^,  (NOT) ~, (Left shift) <<, (Right shift) >>"
- Increment Operators :- " Prefix: ++x, Postfix: x++ "
+ Decrement Operators :- " Prefix: --x, Postfix: x--"

## Conditionals Statement
"In C++, a conditional statement is a way to make decisions in a program. It allows the program to execute different blocks of code based on whether a certain condition is true or false. These conditions are usually based on comparing values., such as checking if a number is greater than another number or if a certain condition is met.

In simple terms, conditional statements help your program decide what to do next based on certain situations."
### if Statement

#### Syntax
#### Example

### if else Statement

#### Syntax
#### Example

### else if Statement

#### Syntax
#### Example

### Switch Statement

#### Syntax
#### Example

### Tarnary Operator
#### Syntax
```cpp
    condition ? value_if_true : value_if_false;
```
#### Example
```cpp

#include <iostream>
using namespace std;

int main() {
    int age = 20;
    
    string result = (age >= 18) ? "Adult" : "Minor";
    cout << "You are an " << result << "." << endl;

    return 0;
}

```