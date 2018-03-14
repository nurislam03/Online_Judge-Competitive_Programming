//01
Select *
From Employee
Where Age > 25;

//02
Select *
From Employee
Where Salary > 30000;

//03 use of between
Select *
From Employee
Where Did between 40 AND 90;

//04
UPDATE Employee
Set Location = 'Barishal'
Where EID = 5;

// M is the 1st character and this can contain fixed number of character which denotes by (_) char.
Select *
From Employee
Where Ename LIKE('M___');


// N can be the 1st, middle or last character. where specifically N exists.
Select *
From Employee
Where Ename LIKE('%N%');


// N can not be the 1st or last character.
Select *
From Employee
Where Ename LIKE('%_N_%');


/* Show the names where second character is 'A' and the name has minimum 3 character*/
Select Ename
From Employee
Where Ename LIKE('_A_%');

//
Select *
From Employee, Department

//
Select *
From Employee E, Department D
Where E.Did = D.did;


//
Select E.Ename, D.Dname, E.Did, D.Did
From Employee E JOIN Department D
ON (E.Did = D.Did)

//
Select E.Ename, E.Did, D.Dname
From Employee E, Department D
Order by E.Ename ASC;


//
