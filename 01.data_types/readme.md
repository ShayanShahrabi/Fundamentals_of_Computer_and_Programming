### C++ Programming Basics: Data Types, Input/Output, and Basic Math Operations

---

#### 1. Introduction to C++
C++ is a powerful, high-performance programming language that is widely used for system/software development and game programming. Understanding the basics of C++ is essential to get started with programming in this language. In this material, we will cover the following topics:
- Data Types
- Input and Output
- Basic Math Operations

---

#### 2. Data Types in C++
Data types specify the type of data that a variable can hold. C++ has several built-in data types which can be categorized into the following:

| **Data Type** | **Size**  | **Description**                  | **Example**      |
|---------------|-----------|----------------------------------|------------------|
| `int`         | 4 bytes   | Stores integers (whole numbers). | `int x = 5;`     |
| `float`       | 4 bytes   | Stores floating-point numbers (single precision). | `float y = 5.75;` |
| `double`      | 8 bytes   | Stores floating-point numbers (double precision). | `double z = 19.99;` |
| `char`        | 1 byte    | Stores a single character.       | `char c = 'A';`  |
| `bool`        | 1 byte    | Stores `true` or `false` values. | `bool b = true;` |
| `string`      | Variable  | Stores a sequence of characters. Requires `#include <string>`. | `string name = "John";` |

**Example Code:**
```cpp
#include <iostream>
#include <string>  // Required for string data type

using namespace std;

int main() {
    int age = 21;
    float height = 5.9;
    double pi = 3.14159;
    char initial = 'J';
    bool isStudent = true;
    string name = "Alice";

    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "Height: " << height << " feet\n";
    cout << "Pi: " << pi << "\n";
    cout << "Initial: " << initial << "\n";
    cout << "Is student: " << isStudent << "\n";

    return 0;
}
```
---

#### 3. Input and Output in C++
In C++, `cin` is used to get user input, while `cout` is used to output data to the screen.

**Basic Syntax:**
- **Output:** `cout << "message";`
- **Input:** `cin >> variable;`

**Example Code:**
```cpp
#include <iostream>

using namespace std;

int main() {
    int age;
    string name;

    cout << "Enter your name: ";
    cin >> name;  // For a single word input

    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    return 0;
}
```
---

#### 4. Basic Math Operations in C++
C++ supports various arithmetic operations such as addition, subtraction, multiplication, division, and modulus.

| **Operation** | **Symbol** | **Example**               | **Result**       |
|---------------|------------|---------------------------|------------------|
| Addition      | `+`        | `5 + 3`                   | `8`              |
| Subtraction   | `-`        | `10 - 2`                  | `8`              |
| Multiplication| `*`        | `4 * 7`                   | `28`             |
| Division      | `/`        | `20 / 4`                  | `5`              |
| Modulus       | `%`        | `9 % 4`                   | `1`              |

**Example Code:**
```cpp
#include <iostream>

using namespace std;

int main() {
    int a = 10, b = 3;

    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;

    return 0;
}
```
**Output:**

```css
a + b = 13
a - b = 7
a * b = 30
a / b = 3
a % b = 1
```
> Important: When dividing two integers, the result is also an integer, with the fractional part discarded.

**Example with Division:**

```cpp
Copy code
#include <iostream>

using namespace std;

int main() {
    int x = 7;
    int y = 2;
    float z = 7.0;

    cout << "x / y = " << (x / y) << " (integer division)" << endl;
    cout << "z / y = " << (z / y) << " (float division)" << endl;

    return 0;
}
```
**Output:**
```css
x / y = 3 (integer division)
z / y = 3.5 (float division)
```
#### 5. Using the std Namespace
In C++, many functions and classes are defined within the std namespace. To simplify the code, we can use using namespace std; to avoid prefixing std:: before each function or class.

**Without using namespace std:**
```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```
**With `using namespace std`:**
```cpp
#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
```
> Note: Using using namespace std; simplifies the code, but in larger programs, it can lead to naming conflicts. To avoid this, you can choose to use std:: only where necessary instead of bringing in the entire std namespace.

#### 6. Conclusion
In this material, we've covered the basic data types, how to take input and produce output, and how to perform basic arithmetic operations in C++. This foundation will help you understand more advanced C++ concepts as you progress in your programming journey.