Create Table Supliers(
    sid int,
    sname varchar(40),
    address varchar(40)
)

Insert Into Supliers(sid, sname, address)
Values(01, 'Rafiq', 'Dhaka'),
(01, 'Rafiq', 'comilla'),
(02, 'Mushfiq', 'Dhaka'),
(03, 'Shakib', 'Bogra'),
(04, 'Tarik', 'Chittagong')

Create Table Parts(
    pid int,
    pname varchar(40),
    color varchar(40)
)

Insert Into Parts(pid, pname, color)
Values(01, 'bbb', 'red'),
(02, 'aaa', 'green'),
(03, 'ccc', 'yello'),
(04, 'ddd', 'blue'),
(05, 'eee', 'pink')


Create Table Catalog(
    sid int,
    pid int,
    cost double
)

Insert Into Catalog(sid, pid, cost)
Values(01, 01, 1234),
(02, 02, 1234),
(03, 03, 4567),
(04, 04, 1111),
(05, 05, 1123),
(06, 01, 506),
(07, 03, 8673)
