
// N.B: This is not the final version.

//1.
Select A.emp_name as "Name"
From Employee A
Where A.salary > (
    select salary
    From Employee B
    Where A.mngr_id = B.emp_id
)

//2.
Select E.emp_name
From Employee E, Employee EE
Where NOT (E.mngr_id = EE.mngr_id and EE.dept_id = E.dept_id)


//3.
Select *
From Employee E, Department D
Where (hire_date LIKE '2017%' and E.dept_id = D.dept_id)



////////////////////////////////////////

//1.
Select S.sname
From Supliers S, Parts P, Catalog C
Where (S.sid = C.sid and C.pid = P.pid and P.color = 'red')

//2.
Select S.sid
From Supliers S, Parts P, Catalog C
Where (S.sid = C.sid and C.pid = P.pid and (P.color = 'red' or P.color = 'green'))

//3.
Select S.sid
From Supliers S, Parts P, Catalog C
Where (S.sid = C.sid and C.pid = P.pid and (P.color = 'red' or P.color = 'green'))

//4
Select S.sid
From Supliers S, Parts P, Catalog C
Where (S.sid = C.sid and C.pid = P.pid and (P.color = 'red' or S.address = 'Dhaka'))





















//
