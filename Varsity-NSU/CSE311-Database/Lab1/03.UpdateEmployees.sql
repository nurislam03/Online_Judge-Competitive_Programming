UPDATE Employees
SET EMPLOYEE_ID = 5
Where JOB_ID = 5;


UPDATE Employees
SET HIRE_DATE = '2018-02-22'
Where JOB_ID = 1;


UPDATE Employees
SET HIRE_DATE = '2018-02-22'
Where JOB_ID = 4 OR JOB_ID = 5 OR JOB_ID = 6 OR JOB_ID = 7 OR JOB_ID = 8;
