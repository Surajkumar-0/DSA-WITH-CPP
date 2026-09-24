

# Chapter 0 - Introduction to C++

## 📖 Theory Notes

### What is C++?
C++ is a powerful, high-performance programming language developed by Bjarne Stroustrup. It is widely used for:

- Competitive Programming
- Data Structures & Algorithms (DSA)
- Software Development
- Game Development
- Operating Systems

---

## Structure of a C++ Program

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Namaste Duniya";
    return 0;
}
```

### Explanation

#### 1. `#include <iostream>`
- Header file used for input and output operations.
- Provides access to `cout`, `cin`, and `endl`.

#### 2. `using namespace std;`
- Allows us to use standard library objects without writing `std::`.

#### 3. `int main()`
- Entry point of every C++ program.
- Program execution starts from the `main()` function.

#### 4. `cout`
- Used to display output on the screen.

Example:

```cpp
cout << "Hello World";
```

#### 5. `endl`
- Moves the cursor to the next line.
- Similar to pressing Enter.

Example:

```cpp
cout << "Hello" << endl;
cout << "World";
```

Output:

```
Hello
World
```

---

## Program Learned Today

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Namsate Duniya :-)" << endl;
}
```

### Output

```
Namsate Duniya :-)
```

---

## Key Points

- Every C++ program starts from `main()`.
- `iostream` is required for input/output.
- `cout` is used for printing output.
- `endl` creates a new line.
- Semicolon (`;`) is used to end statements.

---

# 📌 C++ Variables and Data Types

## 1. What is a Variable?

A **variable** is a named memory location used to store data.

Example:

```cpp
int age = 20;
```

Here:

- `int` → Data Type
- `age` → Variable Name
- `20` → Value

### Basic Syntax

```cpp
data_type variable_name = value;
```

Example:

```cpp
int age = 20;
```

---

## 2. Common Data Types in C++

C++ provides different data types to store different kinds of values.

| Data Type | Used For | Example |
|-----------|----------|---------|
| `int` | Whole numbers | `20` |
| `float` | Decimal numbers | `85.5f` |
| `double` | More precise decimal numbers | `50000.99` |
| `char` | Single character | `'A'` |
| `bool` | True/False | `true` |
| `string` | Text | `"Rahul"` |

---

## 3. Integer (`int`)

The `int` data type is used to store **whole numbers**.

```cpp
int age = 20;
```

Examples:

```cpp
int marks = 90;
int number = -10;
```

---

## 4. Float (`float`)

The `float` data type is used to store **decimal numbers**.

```cpp
float marks = 85.5;
```

Example:

```cpp
float temperature = 36.5;
```

---

## 5. Double (`double`)

`double` is also used for decimal numbers and generally provides **more precision than `float`**.

```cpp
double salary = 50000.99;
```

Example:

```cpp
double pi = 3.1415926535;
```

---

## 6. Character (`char`)

The `char` data type stores **a single character**.

Characters are written inside **single quotes (`' '`)**.

```cpp
char grade = 'A';
```

Examples:

```cpp
char gender = 'M';
char symbol = '#';
```

---

## 7. Boolean (`bool`)

The `bool` data type stores only two values:

- `true`
- `false`

Example:

```cpp
bool isPass = true;
```

By default, `cout` prints:

```text
true  → 1
false → 0
```

---

## 8. String (`string`)

The `string` data type is used to store **text or a sequence of characters**.

For using `string`, we include:

```cpp
#include <string>
```

Example:

```cpp
string name = "Rahul";
```

Strings use **double quotes (`" "`)**.

---

## 9. Printing Variables

We can use `cout` to print variables.

```cpp
cout << "Age: " << age << endl;
```

Multiple variables can also be printed:

```cpp
cout << "Name: " << name << endl;
cout << "Age: " << age << endl;
cout << "Marks: " << marks << endl;
```

---

## 10. Complete Example

```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age = 20;
    float marks = 85.5;
    double salary = 50000.99;
    char grade = 'A';
    bool isPass = true;
    string name = "Rahul";

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;
    cout << "Salary: " << salary << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << isPass << endl;

    return 0;
}
```

### Output

```text
Name: Rahul
Age: 20
Marks: 85.5
Salary: 50000.99
Grade: A
Passed: 1
```

---

## ⭐ Important Points

- A variable stores a value in memory.
- Every variable has a **data type**.
- `int` → whole numbers
- `float` → decimal numbers
- `double` → high-precision decimal numbers
- `char` → single character
- `bool` → `true` or `false`
- `string` → text
- `cout` is used to display output.
- `endl` moves the cursor to the next line.

---

## 🔥 Quick Revision

```cpp
int age = 20;              // Integer
float marks = 85.5;        // Decimal
double salary = 50000.99;  // More precision
char grade = 'A';          // Character
bool isPass = true;        // Boolean
string name = "Rahul";     // String
```

### Basic Formula

```text
Data Type + Variable Name + Value
```

Example:

```cpp
int age = 20;
```

**int** → What type of data?

**age** → Where/name of the variable?

**20** → What value is stored?

---

# 📌 C++ User Input

## 1. What is User Input?

**User input** means taking data from the user during program execution.

In C++, we use **`cin`** to take input from the user.

`cin` stands for **Character Input**.

---

## 2. Basic Syntax

```cpp
cin >> variable;
```

Example:

```cpp
int age;

cin >> age;
```

The user enters a value, and that value is stored in the `age` variable.

---

## 3. Taking Integer Input

```cpp
#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Your age is: " << age;

    return 0;
}
```

### Example Output

```text
Enter your age: 20
Your age is: 20
```

---

## 4. Taking Multiple Inputs

We can take multiple values using `cin`.

```cpp
int age;
float marks;

cin >> age >> marks;
```

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    int age;
    float marks;

    cout << "Enter age and marks: ";
    cin >> age >> marks;

    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;

    return 0;
}
```

---

## 5. Taking String Input

For a single word, we can use:

```cpp
string name;

cin >> name;
```

Example:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Hello " << name;

    return 0;
}
```

### Example

```text
Enter your name: Rahul
Hello Rahul
```

### ⚠️ Important

`cin >> name` reads only **one word**.

If the user enters:

```text
Rahul Kumar
```

then `cin` will normally read only:

```text
Rahul
```

For a complete sentence or name containing spaces, we use `getline()`.

---

## 6. Taking Character Input

```cpp
char grade;

cin >> grade;
```

Example:

```cpp
cout << "Enter your grade: ";
cin >> grade;
```

---

## 7. Taking Boolean Input

A `bool` variable can store `true` or `false`.

```cpp
bool isPass;

cin >> isPass;
```

Normally, entering:

```text
1
```

means `true`, and:

```text
0
```

means `false`.

---

## 8. Complete Example

```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    float marks;
    char grade;
    string name;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your marks: ";
    cin >> marks;

    cout << "Enter your grade: ";
    cin >> grade;

    cout << "\n--- Student Details ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
```

---

## ⭐ Important Points

- `cin` is used to take input from the user.
- `>>` is called the **extraction operator**.
- The input is stored inside a variable.
- Multiple inputs can be taken using one `cin`.
- `cin >> name` reads only up to whitespace.
- `getline()` is used when input may contain spaces.

---

## 🔥 Quick Revision

```cpp
int age;
cin >> age;
```

```cpp
float marks;
cin >> marks;
```

```cpp
char grade;
cin >> grade;
```

```cpp
string name;
cin >> name;
```

### Basic Pattern

```text
Declare Variable
       ↓
     cin >>
       ↓
    Variable
```

Example:

```cpp
int age;
cin >> age;
```


🚀 Beginning of my C++ + DSA Journey.
