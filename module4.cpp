1. Show how to declare a short int array called hightemps that is 31 elements long.
2. In C++, all arrays begin indexing at ________.
3. Write a program that searches an array of ten integers for duplicate values. Have the program display
each duplicate found.
4. What is a null-terminated string?
5. Write a program that prompts the user for two strings and then compares the strings for equality, but
ignores case differences. Thus, “ok” and “OK” will compare as equal.
6. When using strcat( ), how large must the recipient array be?
7. In a multidimensional array, how is each index specified?
8. Show how to initialize an int array called nums with the values 5, 66, and 88.
9. What is the principal advantage of an unsized array declaration?
10. What is a pointer? What are the two pointer operators?
11. Can a pointer be indexed like an array? Can an array be accessed through a pointer?
12. Write a program that counts the uppercase letters in a string. Have it display the result.
13. What is it called when one pointer points to another pointer?
14. Of what significance is a null pointer in C++?
1. short int hightemps[31];
2. zero
3. // Find duplicates
8 C++ A Beginner’s Guide by Herbert Schildt
4. A null-terminated string is an array of characters that ends with a null.
5. // Ignore case when comparing strings.
9 C++ A Beginner’s Guide by Herbert Schildt
6. When using strcat( ), the recipient array must be large enough to hold the contents of both
strings.
7. In a multidimensional array, each index is specified within its own set of brackets.
8. int nums[] = {5, 66, 88};
9. An unsized array declaration ensures that an initialized array is always large enough to hold the
initializers being specified.
10. A pointer is an object that contains a memory address. The pointer operators are & and *.
11. Yes, a pointer can be indexed like an array. Yes, an array can be accessed through a pointer.
12. // Count uppercase letters.
10 C++ A Beginner’s Guide by Herbert Schildt
13. Multiple indirection is the term used for the situation in which one pointer points to another.
14. By convention, a null pointer is assumed to be unused.
