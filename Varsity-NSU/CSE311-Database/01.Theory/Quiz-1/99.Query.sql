
//1. a:
Select distinct city
From Student

//1. b:
Select city
From Student
Where Id between 1111 and 6666

//1. c:
Select S.Id, S.name, T.course_id
From Student S, Takes T
Where T.year = 2000 AND S.id = T.id

//1. d:
Select S.Id, S.name, T.course_id, C.title, T.year
From Student S, Takes T, Course C
Where C.credit_hour = 3



///////////////////////////////////////////////////////////////////////////

// 2. a:
Select Id, name, street, city
From Student
Where email IS NULL


//2. b:
Select Id, name, street, city
From Student
Where email LIKE '%gmail.com'

//2. c:
Select email as Email, count(Id) as number_of_Student
From Student
Group by email


//2. d:
Select MAX(CGPA), MIN(CGPA), AVG(CGPA)
From Student
Group by city, street

//2. e:
Select SUM(S.Fee_paid), MAX(S.Fee_paid), MIN(S.Fee_paid), AVG(S.Fee_paid)
From Student S, Takes T
Where T.year = 2016
Group by S.city, S.street

//2. f:
Select S.city as city, S.street as street, COUNT(S.Id) as total-num-student, max(S.CGPA), min(S.CGPA), avg(S.CGPA)
From Student S, Course C
Where C.credit_hour = 3
Group by S.city, S.street

//2. g:
Select max(S.CGPA), min(S.CGPA), avg(S.CGPA)
From Student S, Takes T
Where T.year = 2016
Group by S.city, S.street

//2. h:
Select GPA
From





////////////////////////////////////////////////////////////////////////////
