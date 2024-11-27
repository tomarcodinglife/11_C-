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

## Operator in CPP
+ Arithmetic Operators :- " +, -, *, /, % "
- Assignment Operators :- " +=, -=, *=, /=, %= "
+ Relational Operators :- " > , >=, <, <= "
- Logical Operators :- " >> && and || "
+ **Bitwise Operators :- "(AND) &, (OR) |, (XOR) ^,  (NOT) ~, (Left shift) <<, (Right shift) >>"
- Increment Operators :- " Prefix: ++x, Postfix: x++ "
+ Decrement Operators :- " Prefix: --x, Postfix: x--"

## Conditionals Statement

#### Syntax
#### Example

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