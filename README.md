# CIS-25-Midterm-Exam-Spring-2025
From (Brandon Saunders / 30066297), my submission for CIS 25 Midterm Exam Spring 2025

# Solution Explanations

## Part 1
1. The function takes the length and width and multiplies them together as that's the formula for the area of a rectangle.
2. I noticed a pattern in prime numbers greater than 7: if the number isn't divisible by 2, 3, 5, or 7, it's a prime number. Basically, my code first manually checks if the value is equal to all the prime numbers 7 and below, then I use the modulus operator to see if the value ISN'T divisible by the numbers I listed, if the modulus output isn't a 0, there's a remindar and thus it isn't divisible, so it's a prime number and returns true. However, if it is divisible by even one of the values, that means it's a composite number and returns false.
## Part 2
1. As i is counting up from 1 to 50 in the for loop, the code checks if i is an even number by using the modulus operator to see if i is divisible by 2. If so, it's  an even number and print it. Otherwise, it's odd and ignore.
2. First, I declare an empty array with a size of 10. Then using a while loop that keeps looping as long as variable x < 10 and increments x each time the loop finishes starting from 0, ask for an input and declare element number x in the array as the input. This happens until x = 10, in which the loop stops and moves to the for loop which as i increments, print elemnet number i in the array.
## Part 3
1. Declared three different variable for the user's name, age, and favorite number. Use cin to ask for each one and put the inputs into their respective variables. Then you can put all the variables into a cout and print them.
2. Declared four variables with their own different data types (int = integers like 4, float = floating point numbers like 3.14, char = characters like 'B', string = string of characters like "hello".). Put all variables into cout to print them.
## Part 4
1. Once the three variables are declared with the user's input, 
2. The code follows the definition of a leap year according to Wikipedia: "Every year that is exactly divisible by four is a leap year, except for years that are exactly divisible by 100, but these centurial years are leap years if they are exactly divisible by 400." My code uses the modulus function for each "divisible" statement, in the following condition: if year is divisible by 4 AND year isn't divisble by 100 unless it's also divisible by 400, then it's a leap year.
## Part 5
1. Declare two float varaibles as the numbers being calculated and a char variable as the operand (+ - * /) and accept inputs for all of them. Depending on which of the four operands the user inputted, it goes through a switch case to determine which calculation should be executed between the two numbers, + for addition, - for subtraction, * for multiplication, / for division.
## Part 6
1. There were only 3 error I found in the code and had to modify: replacing a = with == inside the if statement so it's comparing the values instead of trying to assign it, adding brackets to the for loop to make sure we're only looping what we want loop, and removing an unneeded semicolon in the same for loop as it would cause a syntax error.
