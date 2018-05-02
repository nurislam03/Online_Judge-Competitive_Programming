CREATE TABLE Flights(
flno int,
ffrom varchar(30),
fto varchar(30),
distance int,
departs int,
arrives int,
price int);

INSERT into flights(flno, ffrom, fto, distance,departs,arrives,price)
VALUES(1,'Dhaka', 'Chittagong','245','11am','1.15pm','50'),
(2,'Dubai', 'Astana','945','11pm','4am','450'),
(3,'Los Angeles', 'Chicago','345','9am','12.15pm','350'),
(4,'Dhaka', 'Qatar','645','11am','5.15pm','370');


CREATE TABLE Aircraft(
aid int,
aname varchar(30),
cruising_range int);

INSERT into aircraft(aid, aname, cruising_range)
VALUES('111','Boeing 777', 3000),
('222','Boeing 767', 2500),
('333','Boeing 777x', 3600),
('123','Voodo', 1000),
('124','G-BDXJ', 3000);

CREATE TABLE Certified(
eid int,
aid int);

INSERT INTO certified(eid,aid)
VALUES(11,111),
(11,222),
(11,333),
(22,123),
(22,124),
(33,111),
(33,123),
(44,111),
(44,333),
(44,123),
(55,222),
(55,333),
(55,124),
(66,111),
(66,222),
(66,333);

CREATE TABLE Employee(
eid int,
designation varchar(30),
ename varchar(30),
salary int);

INSERT INTO employee(eid,designation,ename,salary)
VALUES(11,'pilot','Mohammad Sajid Fahad',100020),
(22,'pilot','Rabeya  Sultana',98000),
(33,'pilot','Mohammad Sajid Fahad0',100020),
(44,'pilot','Md. Rakib Imtiaz',90020),
(55,'pilot','Sabit IbnAli Khan',80020),
(66,'pilot','Farah Tabassum Ahmed',95020),
(12,'engineer','ArifUrRahaman Chowdhury',100000),
(13,'engineer','Arifuzzaman  Arman',120000),
(14,'engineer','Zahin  Akram',99999),
(71,'Controller','OmarFaruk  Riyad',100900),
(72,'Controller','Zareen Sharar Cynthia',100000),
(73,'Controller','Sarhan Osman Bhuiya',100900);
