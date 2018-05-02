

//1.
Select Distinct A.aname
From Aircraft A
Where A.aid IN (
	Select C.aid
	From Employee E, Certified C
	Where E.eid = C.eid and NOT Exists (
		Select *
		From Employee
		Where Employee.eid = E.eid and Employee.salary < 80000
	)
)


//2.
Select C.eid, Max(A.cruising_range)
From Aircraft A, Certified C
Where A.aid = C.aid
Group By C.eid
Having Count(C.eid) > 3



//3.

Select Distinct E.aname
From Employee E
Where E.salary < (
	Select Min(Flights.price)
	From Flights
	Where Flights.ffrom = 'Los Angeles' and Flights.fto = 'Chicago'
)


//4.
Select Distinct E.ename
From Aircraft A, Certified C, Employee E
Where E.eid = C.eid and C.aid = A.aid and A.aname like 'Boeing%'

//5.
Select A.aid
From Aircraft A
Where A.cruising_range > (
	Select MIN(F.distance)
	From Flights F
	Where F.ffrom = 'Los Angles' and F.fto = 'Chicago'
)

//6.
Select Distinct F.ffrom, F.fto
From Flights F
Where NOT Exists (
	Select *
	From Employee E
	Where E.salary > 100000 and NOT Exists(
		Select *
		From Aircraft A, Certified C
		Where A.cruising_range > F.distance and E.eid = C.eid and A.aid = C.aid
	)
)


//7.

Select Distinct E.ename
From Employee E, Certified C, Aircraft A
Where C.eid = E.eid and C.aid = A.aid and A.cruising_range > 3000 and E.eid NOT IN (
	Select CC.eid
	From Certified CC, Aircraft AA
	Where CC.aid = AA.aid and AA.aname Like 'Boeing%'
)


//8.

Select
From
Where

//9.

Select
From
Where

//10.

Select Distinct E.ename
From Employee E, Certified C, Aircraft A
Where C.aid = A.aid and E.eid = C.eid
Group By E.eid, E.ename

//11.
Select Distinct E.ename
From Employee E, Certified C, Aircraft A
Where C.aid = A.aid and E.eid = C.eid
Group By E.eid, E.ename

//12.

Select Distinct E.ename
From Employee E, Certified C, Aircraft A
Where C.aid = A.aid and E.eid = C.eid
Group By E.eid, E.ename
