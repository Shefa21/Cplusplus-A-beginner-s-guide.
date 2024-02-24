1.Write a program that reads characters from the keyboard until a $ is typed. Have the program count
the number of periods. Report the total at the end of the program.
2. In the switch, can the code sequence from one case run into the next? Explain.
  Yes. If there is no break statement concluding a case sequence, then execution will continue on
into the next case. A break statement prevents this from happening
3. Show the general form of the if-else-if ladder.
4. Given
to what if does the last else associate?
  The last else associates with the outer if, which is the nearest if at the same level as the else
5. Show the for statement for a loop that counts from 1000 to 0 by –2.
  for(int i = 1000; i >= 0; i -= 2) // ...
6. Is the following fragment valid?
  No. According to the ANSI/ISO C++ Standard, i is not known outside of the for loop in which it is
declared. (Note that some compilers may handle this differently.)
7. Explain what break does.
  A break causes termination of its immediately enclosing loop or switch statement
8. In the following fragment, after the break statement executes, what is displayed?
After break executes, “after while” is displayed.
9. What does the following fragment print?
  0 1 
  2 3
  4 5
  6 7
  8 9
10. The increment expression in a for loop need not always alter the loop control variable by a fixed
amount. Instead, the loop control variable can change in any arbitrary way. Using this concept, write
a program that uses a for loop to generate and display the progression 1, 2, 4, 8, 16, 32, and so on.
11. The ASCII lowercase letters are separated from the uppercase letters by 32. Thus, to convert a
lowercase letter to uppercase, subtract 32 from it. Use this information to write a program that
reads characters from the keyboard. Have it convert all lowercase letters to uppercase, and all
uppercase letters to lowercase, displaying the result. Make no changes to any other character. Have
the program stop when the user enters a period. At the end, have the program display the number
of case changes that have taken place.
12. What is C++’s unconditional jump statement
C++’s unconditional jump statement is the goto
