## INFO450ATM
Topics Covered:  console input & output,  loops  and  conditional statements

# Functional Requirements:
- You work for a progressive bank that is installing ATMs which will deliver withdrawals in  multiple bill denominations: $50, $20, $10, $5 and $1 
- Write a program that determines number of bills to return with a withdrawal request.
- Your program should start by  requesting the user to enter the amount to withdrawn
- The amount entered should be validated 
    - Withdraws must be > $1.00
    - Withdrawals cannot be > $300.00
- If the  Amount is not valid then the user will be asked to re-enter until a valid number is entered.
- After a valid number is entered  the # of each bill type should be determined and presented, optimizing for the fewest number of bills
- E.g.  Withdrawal of $200 should be 4 x $50.00  (versus 20  x $10 bills)
    - \# $50.00 bills
    - \# $20.00 bills
    - \# $10.00 bills
    - \# $5.00 bills
    - \# $1.00 bills
- Only show the amount if the number of bills is  >  0
    - e.g   do not show :   0  $50.00 bills
- After presenting the change, the program should allow the use to enter another transaction
- The program should continue accepting input and making change until the user enters  ‘0’ to quit.


# Non Functional Requirements
- Your program should be properly commented, clearly indicating what the program is doing
- Your program should employ the use at least 2 loops (you choose: for or while or do-while)
    - one that loops until a valid input is entered
    - one that loops to allow for additional withdrawals
- DO not use GOTOs

# Submission Requirements
- You  should upload your program to your github account  in a repository called:  INFO450ATM
- Turn in your project on blackboard by uploading the URL to your github repository
