//1.
Select *
From Employee
Where First_name like '%o%'

//2.
Select *
From Employee
Where First_name like '___n'

//3.
Select *
From Employee
Where Joining_Date like '2013%'

//4.
Select *
From Employee
Where Joining_Date like '____%01%__'

//5.
Select *
From Employee
Where Joining_Date < '2013-01-01'

//6.
Select *
From Employee
Where Joining_Date > '2013-01-31'

//7.
Select Department_id, SUM(Salary) AS total
From Employee
group by Department_id

//8. //
Select D.Name as name, count(E.Department_id) as dept_count, SUM(E.Salary) as tot_salary
From Employee E, Department D
Where (E.Department_id = D.Department_id)
group by Department_id
order by Salary DESC


//9.
Select avg(Salary) as average_salary
From Employee
group by Department_id
Order by Salary ASC


//10.
Select MAX(Salary) as max_salary
From Employee
group by Department_id
Order by Salary ASC

//11.
Select MIN(Salary) as min_salary
From Employee
group by Department_id
Order by Salary ASC

//12.
Select D.Name as Dept_name, SUM(E.Salary) as tot_salary
From Employee E, Department D
Where (E.Department_id = D.Department_id)
group by E.Department_id having SUM(E.Salary) > 800000
Order by tot_salary desc

//13.
Select SUM(Salary/100)*20 as Percentage
From Employee
Where (First_name like 'N%' or  First_name like 'T%'  or  First_name like 'R%' or  First_name like 'P')

//14.
Select E.First_name as emp_name, D.Name as Dept_name
From Employee E, Department D
Where (E.Department_id = D.Department_id) and (E.Salary > 20000) and (D.Location = 'Bashundhara')

//15.
Select E.First_name as name, D.Name as Dept_name
From Employee E, Department D
Where (E.Department_id = D.Department_id) and E.Salary > (
    Select avg(E.Salary)
    From Employee
)






















//
