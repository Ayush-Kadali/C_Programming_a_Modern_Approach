# Solution to Exercise 01

## Question

Create and run Kernighan and Ritchie's famous "hello, world" program:
Do you get a warning message from the compiler? If so, what's needed to make it go away

## Solution

### **When we try to run the function using  _c99_  compiler, we do not get any error**


### When we try to run the function using  _c89_ we get a warning that control reaches end of non-void function

WE can use the following gcc command to get errors as well as compile with a specific C compiler
```gcc -O -Wall -pedantic -ansi -std=c[version_number] -o [output_file] [input_file] ```

below is the warning that i got
```
~/Desktop/learn/C_Programming_a_Modern_Approach/02-C_Fundamentals/01 > gcc -O -Wall -pedantic -ansi -std=c89 -o exercise_01_with_c89 exercise_01.c
exercise_01.c: In function ‘main’:
exercise_01.c:8:1: warning: control reaches end of non-void function [-Wreturn-type]
    8 | }
      | ^
```


** We can fix this error by adding `return 0;` to the end of the main function. **

