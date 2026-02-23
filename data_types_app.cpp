#include <iostream>
#include <climits>

int main()
{
    // Display program header
    std::cout << "=======================================" << std::endl;
    std::cout << "   PRACTICAL DATA TYPE APPLICATION     " << std::endl;
    std::cout << "=======================================" << std::endl;
    std::cout << "This program demonstrates appropriate usage of different data types" << std::endl;
    std::cout << "for various kinds of information." << std::endl << std::endl;

    // ------ AGE DATA SECTION ------
    std::cout << "\n------ AGE DATA SECTION ------" << std::endl;
    std::cout << "Selecting appropriate data types for age information:" << std::endl;

    // Integer type for ages (no fractional years needed)
    constexpr int CHILD_AGE = 8;
    constexpr int TEEN_AGE = 15;
    constexpr int ADULT_AGE = 42;

    // Display age information
    std::cout << "Child age: " << CHILD_AGE << " years" << std::endl;
    std::cout << "Teen age: " << TEEN_AGE << " years" << std::endl;
    std::cout << "Adult age: " << ADULT_AGE << " years" << std::endl;

    // Show memory usage
    std::cout << "\nAge data memory usage:" << std::endl;
    std::cout << "Size of int (for ages): " << sizeof(int) << " bytes" << std::endl;

    // Demonstrate age calculations
    std::cout << "\nAge calculations:" << std::endl;
    constexpr int TOTAL_AGE = CHILD_AGE + TEEN_AGE + ADULT_AGE;
    std::cout << "Total of all ages: " << TOTAL_AGE << " years" << std::endl;
    
    // ------ PRICE DATA SECTION ------
    std::cout << "\n------ PRICE DATA SECTION ------" << std::endl;
    std::cout << "Selecting appropriate data types for price information:" << std::endl;

    // Use double for prices (needs decimal precision)
    constexpr double COFFEE_PRICE = 3.99;
    constexpr double LAPTOP_PRICE = 1299.99;
    constexpr double HOUSE_PRICE = 350000.00;

    // Display price information
    std::cout << "Coffee price: $" << COFFEE_PRICE << std::endl;
    std::cout << "Laptop price: $" << LAPTOP_PRICE << std::endl;
    std::cout << "House price: $" << HOUSE_PRICE << std::endl;

    // Show memory usage comparison
    constexpr float PRICE_AS_FLOAT = 19.99f;
    constexpr double PRICE_AS_DOUBLE = 19.99;
    std::cout << "\nPrice storage comparison:" << std::endl;
    std::cout << "Price as float: $" << PRICE_AS_FLOAT << " (uses " << sizeof(float) << " bytes)" << std::endl;
    std::cout << "Price as double: $" << PRICE_AS_DOUBLE << " (uses " << sizeof(double) << " bytes)" << std::endl;
    
    // Simple price calculations
    constexpr double TOTAL_PRICE = COFFEE_PRICE + LAPTOP_PRICE;
    std::cout << "\nPrice calculations:" << std::endl;
    std::cout << "Coffee + Laptop total: $" << TOTAL_PRICE << std::endl;
    
    // ------ CHARACTER DATA SECTION ------
    std::cout << "\n------ CHARACTER DATA SECTION ------" << std::endl;
    std::cout << "Selecting appropriate data types for character information:" << std::endl;

    // Character variables for single characters
    constexpr char GRADE = 'A';
    constexpr char SYMBOL = '#';
    constexpr char INITIAL = 'J';

    // Display character information
    std::cout << "Student grade: " << GRADE << std::endl;
    std::cout << "Special symbol: " << SYMBOL << std::endl;
    std::cout << "First initial: " << INITIAL << std::endl;

    // Show how characters relate to numbers (ASCII values)
    std::cout << "\nCharacter to number conversion:" << std::endl;
    std::cout << "Grade '" << GRADE << "' has ASCII value: " << static_cast<int>(GRADE) << std::endl;
    std::cout << "Symbol '" << SYMBOL << "' has ASCII value: " << static_cast<int>(SYMBOL) << std::endl;
    
    // Show memory usage
    std::cout << "\nCharacter data memory usage:" << std::endl;
    std::cout << "Size of char: " << sizeof(char) << " byte" << std::endl;
    
    // ------ BOOLEAN DATA SECTION ------
    std::cout << "\n------ BOOLEAN DATA SECTION ------" << std::endl;
    std::cout << "Using boolean data types for true/false information:" << std::endl;

    // Boolean variables for simple flags
    constexpr bool IS_ACTIVE = true;
    constexpr bool HAS_PERMISSION = false;
    constexpr bool IS_COMPLETED = true;

    // Display boolean values (they show as 1 for true, 0 for false)
    std::cout << "User account active: " << IS_ACTIVE << std::endl;
    std::cout << "User has admin permission: " << HAS_PERMISSION << std::endl;
    std::cout << "Task completed: " << IS_COMPLETED << std::endl;

    // Show memory usage
    std::cout << "\nBoolean data memory usage:" << std::endl;
    std::cout << "Size of bool: " << sizeof(bool) << " byte(s)" << std::endl;
    
    // ------ SIMPLE PRODUCT EXAMPLE ------
    std::cout << "\n------ SIMPLE PRODUCT EXAMPLE ------" << std::endl;
    std::cout << "Combining multiple data types for a product:" << std::endl;

    // Product information using different data types
    constexpr int PRODUCT_ID = 12345;
    constexpr double PRODUCT_PRICE = 29.99;
    constexpr char PRODUCT_GRADE = 'B';
    constexpr bool IN_STOCK = true;

    // Display product information
    std::cout << "\nProduct Information:" << std::endl;
    std::cout << "Product ID: " << PRODUCT_ID << std::endl;
    std::cout << "Price: $" << PRODUCT_PRICE << std::endl;
    std::cout << "Quality Grade: " << PRODUCT_GRADE << std::endl;
    std::cout << "In Stock: " << IN_STOCK << std::endl;

    // Simple calculations
    constexpr double SALES_TAX = PRODUCT_PRICE * 0.08;  // 8% tax
    constexpr double TOTAL_PRODUCT_PRICE = PRODUCT_PRICE + SALES_TAX;
    
    std::cout << "\nPrice Calculations:" << std::endl;
    std::cout << "Sales tax (8%): $" << SALES_TAX << std::endl;
    std::cout << "Total with tax: $" << TOTAL_PRODUCT_PRICE << std::endl;
    
    // Memory usage summary
    constexpr int totalMemory = sizeof(PRODUCT_ID) + sizeof(PRODUCT_PRICE) + sizeof(PRODUCT_GRADE) + sizeof(IN_STOCK);
    std::cout << "\nTotal memory used for this product: " << totalMemory << " bytes" << std::endl;

    return 0;
}
