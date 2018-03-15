Create Table Employee(
    emp_id int,
    dept_id int,
    mngr_id int,
    emp_name varchar(40),
    salary int,
    hire_date DATE
)

Insert Into Employee(emp_id, dept_id, mngr_id, emp_name, salary, hire_date)
Values(01, 42, 10, 'nurislam', 40000, '2017-03-15'),
(02, 42, 01, 'Mushfiq', 55000, '2018-03-15'),
(03, 52, 02, 'Ronaldo', 22000, '2016-03-15'),
(04, 32, 04, 'Sazid', 12000, '2015-03-15'),
(05, 12, 05, 'Rakib', 5000, '2014-03-15')
