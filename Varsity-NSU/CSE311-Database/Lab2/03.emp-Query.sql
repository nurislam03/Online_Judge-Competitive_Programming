
// Q1
SELECT Name, Salary, Salary*12
From emp;


//Q2
SELECT Name, Salary, Salary*12 "Annual Salary"
From emp;


//Q3
SELECT Name, Salary, Salary*12 "Annual Salary", (Salary/30)*7 "Weekly Salary"
From emp;


//Q4
SELECT CONCAT(Name, ' -Salary- ', Salary) AS "details"
FROM emp;


//Q5
SELECT CONCAT(Name, ' -Join_data- ', Join_data) AS "Details"
FROM emp;


//Q6
SELECT DISTINCT EID
FROM emp;

//Q7
