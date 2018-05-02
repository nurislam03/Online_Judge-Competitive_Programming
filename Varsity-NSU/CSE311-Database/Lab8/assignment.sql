INSERT INTO faculty(fid,fname,deptid) VALUES (1,'I.Teach',11),
(2,'Farhan',22),(3,'Sakib',33),(4,'Johny',11);

INSERT INTO student(snum,sname,major,level,age) VALUES (1,'Farabi','CSE','JR',22),(2,'Raihan','HIS','JR',28),(3,'Sajjad','CSE','JR',22),(4,'Abir','CSE','FR',18),(5,'Shahriar','CSE','SR',27),(6,'Monir','CSE','SO',22),(7,'Farabi','CSE','JR',23),(8,'Sarhan','EEE','JR',21),(9,'Jishan','EEE','JR',22),(10,'Jarif','CSE','SR',26);

INSERT INTO enrolled(snum,cname) VALUES(1,'CSE115'),(1,'CSE215'),(1,'HIS101'),(1,'CSE373'),(2,'CSE215'),(3,'CSE215'),(4,'CSE215'),(5,'CSE215'),(6,'CSE215'),(2,'HIS101'),(8,'EEE111'),(8,'CSE115'),(9,'EEE111'),(9,'CSE115'),(10,'CSE373'),(10,'HIS101'),(7,'EEE111'),(7,'CSE115');

1)SELECT distinct(sname)
FROM student,class,enrolled,faculty
WHERE (student.snum=enrolled.snum) and (enrolled.cname=class.cname) and (class.fid=faculty.fid)and (faculty.fname='I.Teach') AND (student.level=JR)

2)SELECT max(age)
FROM student,class,enrolled,faculty
WHERE ( (student.snum=enrolled.snum) and (enrolled.cname=class.cname) and (class.fid=faculty.fid) and (faculty.fname='I.Teach') ) OR (student.major='HIS')

3)SELECT DISTINCT(E.cname)
FROM class,(SELECT cname,COUNT(snum) as c
			FROM enrolled
			GROUP BY cname) as E
WHERE ((class.room='R128')and (E.cname=class.cname)) OR (E.c>=5)

4) SELECT distinct(sname)
FROM student,enrolled as C,enrolled as D,(SELECT A.cname as c1,B.cname as c2
                       FROM class as A,class as B
                       WHERE (A.meets_at=B.meets_at) and (NOT A.cname=B.cname)) as X
WHERE (C.cname=X.c1)AND (D.cname=X.c2) AND (C.snum=D.snum) and (C.snum=student.snum)

5) SELECT fname
FROM faculty
WHERE faculty.fid IN (SELECT fid
                      from class
                   	  GROUP BY fid
                      HAVING COUNT(room)=(SELECT COUNT(DISTINCT(room))
                                       FROM class) )

6)SELECT fname
FROM faculty
WHERE fid IN(SELECT fid
             FROM class,enrolled
             WHERE (class.cname=enrolled.cname)
             GROUP BY class.cname
			 HAVING COUNT(snum)<5)

7) SELECT LEVEL,AVG(age) as Avg_age
FROM student
GROUP BY LEVEL

8)SELECT LEVEL,AVG(age) as Avg_age
FROM student
WHERE LEVEL IN ('FR','SR','SO')
GROUP BY LEVEL

9)SELECT fname,count(*) as total_course
FROM faculty,class
WHERE (faculty.fid=class.fid) AND (class.room='R128')
GROUP BY fname

10) SELECT sname
FROM student
WHERE snum IN(SELECT snum
              from enrolled
              GROUP BY snum
              HAVING COUNT(cname)>=ALL(SELECT COUNT(cname)
                               FROM enrolled
                               GROUP BY snum))

11)SELECT sname
FROM student
WHERE snum not in (SELECT snum
                   from enrolled)

12)SELECT S.age,S.level
FROM student as S
GROUP BY S.age,S.level
HAVING S.level IN(SELECT s1.age,s1.level
                  from student as s1
                  WHERE s.age=s1.age
                  GROUP s1.level,s1.age
                  HAVING COUNT(*)>=ALL(SELECT age,level
                                       from student as s2
                                       WHERE s1.age=s2.age
                                       GROUP BY s2.level,s2.age))
