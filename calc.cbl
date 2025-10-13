IDENTIFICATION DIVISION.
PROGRAM-ID. SimpleCalculator.

DATA DIVISION.
WORKING-STORAGE SECTION.
01 NUM1         PIC 9(5)V99.
01 NUM2         PIC 9(5)V99.
01 RESULT       PIC 9(5)V99.
01 OPERATOR     PIC X.

PROCEDURE DIVISION.
   DISPLAY "Enter first number: "
   ACCEPT NUM1
   DISPLAY "Enter second number: "
   ACCEPT NUM2
   DISPLAY "Enter operator (+, -, *, /): "
   ACCEPT OPERATOR

   EVALUATE OPERATOR
	   WHEN "+"
		   COMPUTE RESULT = NUM1 + NUM2
	   WHEN "-"
		   COMPUTE RESULT = NUM1 - NUM2
	   WHEN "*"
		   COMPUTE RESULT = NUM1 * NUM2
	   WHEN "/"
		   IF NUM2 NOT = 0
			   COMPUTE RESULT = NUM1 / NUM2
		   ELSE
			   DISPLAY "Error: Division by zero"
			   STOP RUN
	   WHEN OTHER
		   DISPLAY "Invalid operator"
		   STOP RUN
   END-EVALUATE

   DISPLAY "Result: " RESULT
   STOP RUN.
