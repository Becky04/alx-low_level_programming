# C - Recursion
Recursion is the technique of making a function call itself, repeating things in a similar way. This technique provides a way to break complicated problems down into simple problems which are easier to solve.

## General:

* Allowed editors: `vi`, `vim`, `emacs`
* All files is compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All files ends with a new line
* Code uses the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`
* Global variables are not allowed
* No more than 5 functions per file
* Not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
* Allowed to use [`_putchar`](0x08-recursion/_putchar.c)
* The prototypes of all functions and the prototype of the function  [`_putchar`](0x08-recursion/_putchar.c) is included in header file called `main.h`
* Not allowed to use any kind of loops
* Not allowed to use static variables
--- 
<br/>

### [Task 0](0x08-recursion/0-puts_recursion.c) - A function that prints a string, followed by a new line
  * Prototype: `void _puts_recursion(char *s);` 
  
### [Task 1](0x08-recursion/1-print_rev_recursion.c) - A function that prints a string in reverse
  * Prototype: `void _print_rev_recursion(char *s);`
  
### [Task 2](0x08-recursion/2-strlen_recursion.c) - A function that returns the length of a string
  * Prototype: `int _strlen_recursion(char *s);` 
  
### [Task 3](0x08-recursion/3-factorial.c) - A function that returns the factorial of a given number
  * Prototype: `int factorial(int n);` If n is lower than 0, the function should return -1 to indicate an error

### [Task 4](0x08-recursion/4-pow_recursion.c) - A  function that returns the value of x raised to the power of y
  * Prototype: `int _pow_recursion(int x, int y);` If y is lower than 0, the function should return -1
  
### [Task 5](0x08-recursion/5-sqrt_recursion.c) - A function that returns the natural square root of a number
  * Prototype: `int _sqrt_recursion(int n);` If n does not have a natural square root, the function should return -1
  
### [Task 6](0x08-recursion/6-is_prime_number.c) - A function that returns 1 if the input integer is a prime number, otherwise return 0
  * Prototype: `int is_prime_number(int n);`
  
### [Task 7](0x08-recursion/100-is_palindrome.c) - A function that returns 1 if a string is a palindrome and 0 if not
  * Prototype: `int is_palindrome(char *s);`  

### [Task 8](0x08-recursion/101-wildcmp.c) - A  function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0
  * Prototype: `int wildcmp(char *s1, char *s2);` s2 can contain the special character `*`, the special `char *` can replace any string (including an empty string)

