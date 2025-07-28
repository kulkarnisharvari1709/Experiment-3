# Experiment-3

*Code 1*
This program is a simple number classification tool that checks whether a given number is positive, negative, or zero using conditional statements.

🔹 Purpose:
To take an integer input from the user and determine whether it is:
Positive
Negative
Zero

🔹 Logic:
The program first asks the user to input an integer.
It then uses an if-else if-else ladder to check:
If the number is greater than 0, it prints "Number is POSITIVE."
If the number is less than 0, it prints "Number is NEGATIVE."
If the number is exactly 0, it prints "Number is ZERO."

🔹 Concepts Used:
Input/Output operations (cin, cout)
Conditional statements (if, else if, else)
Integer data type

*Code 2*
🔹 Purpose:
This program calculates the average marks of a student in 5 subjects and then determines the grade based on predefined criteria.

🔸 Core Logic:
Input:
The user is prompted to enter marks for five subjects:
DCLD
NT
EDC
SnS
MTT

Processing:
The program calculates the average of the five entered marks using:
cpp
avg = (DCLD + NT + EDC + SnS + MTT) / 5;

Grade Evaluation:
The average is then used to determine the grade using conditional (if-else) statements:
90–100 → O Grade
80–89 → A+ Grade
70–79 → A Grade
60–69 → B Grade
50–59 → C Grade
Below 50 → FAIL
Any value outside 0–100 is considered invalid

🔸 Concepts Used:
Integer data types
Basic arithmetic (average calculation)
Conditional logic (if-else)
Input/output using cin and cout

Code 3
🔹 Purpose:
This program takes X and Y coordinates as input and determines the location of the point on the 2D Cartesian plane:
In which quadrant the point lies, or
If it's on the X-axis, Y-axis, or at the origin

🔸 Concepts Used:
Integer data types
Logical operators (&&, ||)
Conditional statements (if-else if-else)
Input/output using cin and cout

🔸 Logic Explanation:
User Input:
The program asks the user to input two integers: x and y (representing a point's coordinates).
Position Checking (based on the sign of x and y):
If both x > 0 and y > 0: point lies in the 1st Quadrant
If x < 0 and y > 0: point lies in the 2nd Quadrant
If x < 0 and y < 0: point lies in the 3rd Quadrant
If x > 0 and y < 0: point lies in the 4th Quadrant

Axis Handling:
If x == 0 and y ≠ 0: point lies on the Y-axis
If y == 0 and x ≠ 0: point lies on the X-axis

Origin Case:
If both x == 0 and y == 0: point is at the Origin
