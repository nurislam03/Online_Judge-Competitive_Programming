
/* a. Write a query to display all customers with a grade above 100. */
Select *
From Customers
Where Grade > 100

/* b. Write a query statement to display all customers in your home town
who have a grade value above 100. */
Select *
From Customers
Where (
    Location = 'Bogra' AND Grade > 100
)

/* c. Write a SQL statement to display all customers, who are either,
belongs to your home town or had a grade above 100. */
Select *
From Customers
Where (
    Location = 'Bogra' OR Grade > 100
)

/* d. Write a SQL statement to display all the customers,
who are either belongs to your home town or not had a grade above 100. */


/* e. Write a SQL query to display those customers
who are neither belongs to the city New York nor grade value is more than 100. */


/* f. Write a SQL statement to display either those orders
which are not user of Banglalink Number and issued by the salesman whose ID is 505
and below or those orders which purchase amount is 1000.00 and below. */



/* g. Write a SQL statement where to display name of salesman, join date in a ascending order
and the commission they (Salesman) get based on their salary. Commission – 4% */


/* h. Write a SQL statement where to display the customer name
and the salesman from whom they gave their bills. */


/* i. Display all in reverse, where customer id greater than 2005 and purchase amount is below 1000
and they are not form your home town. */


/* j. Write a query in SQL to find the data of Customer whose name start with A and
the name length at least 4 Character and they use Banglalink or GrameenPhone or Teletalk
and they use gmail account. */
