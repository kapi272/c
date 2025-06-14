// 

// 1)Arithmetic Operators

// 2)Relational Operators

// 3)Logical Operators

// 4)Bitwise Operators

// 5)Assignment Operators

// 6)Conditional (Ternary) Operator

//----------------------------------------------------------------------------//

// 1)Arithmetic Operators

    int a = 10, b = 3;
    printf("a + b = %d\n", a + b); // Addition
    printf("a - b = %d\n", a - b); // Subtraction
    printf("a * b = %d\n", a * b); // Multiplication
    printf("a / b = %d\n", a / b); // Division
    printf("a %% b = %d\n", a % b); // Modulus (remainder)
    return 0;

//----------------------------------------------------------------------------//
// 2)Relational Operators

    printf("a == b: %d\n", a == b); // Equal to
    printf("a != b: %d\n", a != b); // Not equal to
    printf("a > b: %d\n", a > b);   // Greater than
    printf("a < b: %d\n", a < b);   // Less than
    printf("a >= b: %d\n", a >= b); // Greater than or equal to
    printf("a <= b: %d\n", a <= b); // Less than or equal to
//----------------------------------------------------------------------------//
// 3)Logical Operators

    int x = 1, y = 0;
    printf("x && y: %d\n", x && y); // Logical AND
    printf("x || y: %d\n", x || y); // Logical OR
    printf("!x: %d\n", !x);         // Logical NOT
//----------------------------------------------------------------------------//
// 4)Bitwise Operators

    int m = 5, n = 3; // Binary: m = 0101, n = 0011
    printf("m & n: %d\n", m & n); // Bitwise AND
    printf("m | n: %d\n", m | n); // Bitwise OR
    printf("m ^ n: %d\n", m ^ n); // Bitwise XOR
    printf("~m: %d\n", ~m);       // Bitwise NOT
    printf("m << 1: %d\n", m << 1); // Left shift
    printf("m >> 1: %d\n", m >> 1); // Right shift
//----------------------------------------------------------------------------//
// 5)Assignment Operators

    int c = 10;
    c += 5; // c = c + 5
    printf("c += 5: %d\n", c);
    c -= 3; // c = c - 3
    printf("c -= 3: %d\n", c);
    c *= 2; // c = c * 2
    printf("c *= 2: %d\n", c);
    c /= 4; // c = c / 4
    printf("c /= 4: %d\n", c);
    c %= 3; // c = c % 3
    printf("c %%= 3: %d\n", c);
    c &= 1; // c = c & 1
    printf("c &= 1: %d\n", c);
//----------------------------------------------------------------------------//
// 6)Conditional (Ternary) Operator

    int max = (a > b) ? a : b; // If a is greater than b, max = a, else max = b
    printf("Max of a and b: %d\n", max);
//----------------------------------------------------------------------------//          