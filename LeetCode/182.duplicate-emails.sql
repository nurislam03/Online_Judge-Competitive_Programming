# Write your MySQL query statement below
Select Email
From Person
Group By Email
Having Count(Email) > 1