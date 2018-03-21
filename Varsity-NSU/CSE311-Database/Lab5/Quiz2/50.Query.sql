
/* Table 1 */
//1.
Select A.emp_name as "Name"
From Employee A, Employee B
where (A.mngr_id = B.emp_id and A.salary > B.salary)

//2.
Select A.emp_id, A.emp_name
From Employee A, Employee B
Where (A.mngr_id = B.emp_id and not A.dept_id = B.dept_id)


//3.
Select *
From Employee E, Department D
Where (hire_date LIKE '2017%') and (E.dept_id = D.dept_id and D.dept_name = 'CSE')


/* Table 2 */
//1.
Select S.sname
From Supliers S, Parts P, Catalog C
Where (S.sid = C.sid and C.pid = P.pid and P.color = 'red')

//2.
Select S.sid
From Supliers S, Parts P, Catalog C
Where (S.sid = C.sid and C.pid = P.pid and (P.color = 'red' or P.color = 'green'))

//3.
Select A.sid, B.sid
From catalog A, catalog B
Where (A.pid = B.pid and A.cost > B.cost)

//4
Select S.sid
From Supliers S, Parts P, Catalog C
Where (S.sid = C.sid and C.pid = P.pid and (P.color = 'red' or S.address = 'Dhaka'))
