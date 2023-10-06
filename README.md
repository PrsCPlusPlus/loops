# **Basic_Loops**

# **THEORY**

In Loop, the statement needs to be written only once and the loop will be executed 10 times as shown below.  In computer programming, a loop is a sequence of instructions that is repeated until a certain condition is reached. 

.There are mainly two types of loops:  

1.Entry Controlled loops: In this type of loop, the test condition is tested before entering the loop body. For Loop and While Loop is entry-controlled loops.

2.Exit Controlled Loops: In this type of loop the test condition is tested or evaluated at the end of the loop body. Therefore, the loop body will execute at least once, irrespective of whether the test condition is true or false. the do-while loop is exit controlled loop.

![loops](https://github.com/Purvansha022609/Loops-in-C/assets/139473344/461aefd6-c9c9-4398-b0fc-bc13d35969eb)

- For Loop-

A For loop is a repetition control structure that allows us to write a loop that is executed a specific number of times. The loop enables us to perform n number of steps together in one line. 

*Flow Diagram of for loop*: 
 
![image](https://github.com/Purvansha022609/Loops-in-C/assets/139473344/dd719777-d283-4bb6-8328-c65edc9c54d8)

- While Loop-
  
While studying for loop we have seen that the number of iterations is known beforehand,i.e. the number of times the loop body is needed to be executed is known to us. while loops are used in situations where we do not know the exact number of iterations of the loop beforehand. The loop execution is terminated on the basis of the test conditions.

*Flow Diagram of while loop*:

![image](https://github.com/Purvansha022609/Loops-in-C/assets/139473344/2bb42be1-f3c7-4d97-9fd6-0061b585dc64)

- Do-while loop

In Do-while loops also the loop execution is terminated on the basis of test conditions. The main difference between a do-while loop and the while loop is in the do-while loop the condition is tested at the end of the loop body, i.e do-while loop is exit controlled whereas the other two loops are entry-controlled loops. 
Note: In a do-while loop, the loop body will execute at least once irrespective of the test condition.

- *Flow Diagram of the do-while loop*: 

 ![image](https://github.com/Purvansha022609/Loops-in-C/assets/139473344/a5b69b03-75a6-4a96-b8db-0323d24667da)

 # **ALGORITHM**

 - **Calculator program using Switch-Case**

Calculator Program Algorithm using Switch-Case:

1.Start

2.Declare variables for two operands (e.g., num1 and num2), a character variable (e.g., operation) to store the selected operation, and a variable for the result (e.g., result).

3.Prompt the user to enter the first operand (num1).

4.Prompt the user to select an operation (e.g., '+', '-', '*', or '/') and store it in the operation variable.

5.Prompt the user to enter the second operand (num2).

6.Use a switch-case statement to perform the selected operation:

7.Evaluate the value of operation:

If operation is '+', add num1 and num2 and store the result in result.

If operation is '-', subtract num2 from num1 and store the result in result.

If operation is '*', multiply num1 and num2 and store the result in result.

If operation is '/', divide num1 by num2 and store the result in result.

8.Display the result to the user.

9.End

- **Display Days of the Week Algorithm**:

1.Start

2.Declare a variable (e.g., dayNumber) to store the user's input for the day number.

3.Prompt the user to enter a number between 1 and 7.

4.Read and store the user's input in the dayNumber variable.

5.Use a switch-case statement to display the corresponding day of the week based on dayNumber:

6.For each case (1 to 7), display the name of the corresponding day.

7.Include a default case to handle inputs outside the range 1-7 and display "Wrong input."

8.End

- **Print 50 Numbers using While Loop Algorithm**:

1.Start

2.Declare an integer variable (e.g., num) and initialize it to 1 (the starting number).

3.Create a while loop that continues while num is less than or equal to 50:

4.Inside the loop:

5.Print the current value of num.

6.Increment num by 1.

7.End


- **Print "Hello, World!" 10 Times using For Loop Algorithm**:

1.Start

2.Create a for loop that iterates from 1 to 10 (inclusive):

3.Initialize a loop variable (e.g., i) to 1.

4.Continue the loop as long as i is less than or equal to 10.

5.In each iteration of the loop:

6.Print "Hello, World!" to the output.

7.End

- **Print Number Triangle using For Loop Algorithm**:

1.Start

2.Declare a variable (e.g., n) to store the number of rows in the triangle pattern.

3.Prompt the user to enter the number of rows (n).

4.Create a for loop that iterates from 1 to n to represent each row:

5.Initialize a loop variable (e.g., row) to 1.

6.Continue the outer loop as long as row is less than or equal to n.

7.Inside the outer for loop, create a nested for loop to print the numbers in each row:

8.Initialize a loop variable (e.g., num) to 1.

9.Continue the inner loop as long as num is less than or equal to row.

10.Inside the inner for loop, print the value of num followed by a space.

11.After the inner for loop completes, print a newline character to move to the next row.

12.End of the inner loop.

13.After the outer for loop completes, you will have printed the number triangle pattern.

14.End

## **OUTPUT**



 - **Calculator program using Switch-Case**

![exp6_1](https://github.com/Purvansha022609/Loops-in-C/assets/139473344/fe74da31-47c4-4353-af35-49266e79fdaa)


- **Display Days of the Week Algorithm**:

![exp6_2](https://github.com/Purvansha022609/Loops-in-C/assets/139473344/b69c3525-52f0-4cd3-9fe3-dafb556967f8)


- **Print 50 Numbers using While Loop Algorithm**:
  
![exp6_3](https://github.com/Purvansha022609/Loops-in-C/assets/139473344/8e989f6b-49d0-4c2f-971a-d82cfc09b9cc)
![exp6_4](https://github.com/Purvansha022609/Loops-in-C/assets/139473344/9306d551-f3fb-4d54-b7e1-3c599dc44e6e)


- **Print "Hello, World!" 10 Times using For Loop Algorithm**:

  ![exp6_5](https://github.com/Purvansha022609/Loops-in-C/assets/139473344/36099ccb-8e7a-4dbf-ab51-c23037b0e2f3)

  - **Print Number Triangle using For Loop Algorithm**:

    
![exp6_6](https://github.com/Purvansha022609/Loops-in-C/assets/139473344/e27fb7ab-7b8e-4a1c-a5f7-fa555239d599)
