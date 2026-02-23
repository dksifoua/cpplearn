# Data Types and Variables

Data types determine memory size and valid value range. Every variable consumes memory, and the type controls how much
is allocated and what values can be represented. Wrong types can cause real runtime failures and user-facing bugs, even
when code compiles and seems to run fine:

- Overflow can wrap values (e.g., health or counters flipping from large positives to negatives), producing absurd
  behavior like invincibility.
- Floating-point precision errors can accumulate in financial calculations, leading to incorrect balances after many
  transactions.

Professional developers choose types strategically based on tradeoffs:

- double versus float: more precision vs. more memory.
- smaller integer/character types: less memory vs smaller range.
- choices become more important at scale (millions of data points) or on constrained hardware (embedded systems).

Understanding types improves code comprehension and debugging: seeing bool, double, or careful integer usage signals
intent (true/false logic, precision priority, memory optimization). Mastering data types helps prevent bugs, improve
performance, and shows you understand how C++ programs behave in memory.

## Primitive Data Types, Memory, and Value Ranges

C++ offers a variety of primitive data types, each designed to handle different data ranges and operational needs.
Knowing these data types' characteristics and appropriate use-cases will enable us to write programs that are both
effective and memory-efficient.

1. Integer Types

    - **`int` (Integer) – STANDARD**
        - **Memory:** Typically 4 bytes (32 bits) on most systems.
        - **Value Range:** `-2,147,483,648 to 2,147,483,647`.
        - **Usage:** Best for whole numbers like counts, scores, or array indices.
        - **Example:** `int age = 25; // Stores a person's age`
    - **`short` (Short Integer) – SMALLER**
        - **Memory:** 02 bytes (16 bits).
        - **Value Range:** `-32,768 to 32,767`.
        - **Usage:** Useful for smaller values to conserve memory, especially in constrained environments.
        - **Example:** `short smallNumber = 500; // Less memory usage for smaller numbers`
    - **`long` (LARGER) and `long long` (Long Integer) (EVEN LARGER)**
        - **Memory:** `long` is at least 4 bytes (on 32-bit platforms otherwise 8 bytes); `long long` is eight bytes.
        - **Value Range:** `long long` from `-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807`.
        - **Usage:** Ideal for large numerical computations such as timestamps.
        - **Example:** `long long veryLargeNumber = 123456789012345; // Suitable for large values`

2. Floating-Point Types:

    - **`float`**
        - **Memory:** 04 bytes.
        - **Value Range:** `~3.4E-38 to ~3.4E+38` with 07 decimal digits of precision.
        - **Usage:** Suitable for decimal numbers with moderate precision needs.
        - **Example:** `float temperature = 98.6; // Decimal storage with float`
    - **`double`**
        - **Memory:** 08 bytes.
        - **Value Range:** `~1.7E-308 to ~1.7E+308` with 15 decimal digits of precision.
        - **Usage:** Essential for applications requiring high precision.
        - **Example:** `double preciseMeasurement = 0.000123456789; // High precision storage`

    - **`long double`**
        - **Memory:** 08 bytes (10 bytes in some compilers).
        - **Value Range:** `~1.7E-308 to ~1.7E+308` with 15 decimal digits of precision; `~3.4E-4932 to ~1.1E+4832` (
          when 10 bytes are used).
        - **Usage:** Essential for applications requiring high precision.
        - **Example:** `double pi = 3.1415926535L`

3. Character and Boolean Types:

    - **char (Character)**
        - **Memory:** 01 byte.
        - **Value Range:** Signed: `-128 to 127` or Unsigned: `0 to 255`.
        - **Usage:** Stores individual characters such as letters or symbols.
        - **Example:** `char initial = 'A'; // Represents a single character`

    - **bool (Boolean)**
        - **Memory:** 01 byte, can effectively represent by a single bit.
        - **Value Range:** `true` or `false`.
        - **Usage:** Ideal for true/false conditions and status flags.
        - **Example:** `bool isGameOver = false; // Flag for game status`

## Memory and Data Type Selection

Selecting the right data type is crucial for achieving performance and memory efficiency:

- **Memory Footprint:** Use the `sizeof()` operator to assess how much memory data types require, which is especially
  critical in resource-limited systems like embedded devices (embedded systems usually operate with limited memory):

```std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;```

- **Precision and Range:** When deciding between `float` and `double`, we may consider application needs. `Float` offers
  less precision and memory use, while `double` excels in precision for high-stakes calculations.

- **Choosing Wisely:** An improper data type choice can lead to overflow or underflow. For example, storing financial
  figures as int risks overflow, making `long long` a better choice.

### Understanding Value Ranges and Overflow

Recognizing the limitations of data types is integral to avoiding errors:

- **Overflow/Underflow:** Occurs when calculations exceed a data type's capacity, leading to unexpected results. For
  instance:

```cpp
int maxIntValue = INT_MAX;
std::cout << maxIntValue + 1 << std::endl; /* Illustrates overflow
And one more than the allowed range for an integer. Output is negative!*/
```

- **Practical Implications:** Correct data type selection is paramount in preventing critical failures, notably in
  applications like financial systems or scientific software, where precision and reliability are non-negotiable.
  Imagine the issues that a few cents off can cause over time!

Understanding primitive data types and their significance extends beyond memory management; it's about building solid
and efficient programs. With careful data type selection, C++ applications will not only excel in performance but will
also safely manage data across diverse scenarios, setting a foundation for tackling more sophisticated programming
challenges with confidence. 


