# Write your MySQL query statement below
Select a1.name,a2.bonus FROM 
Employee a1 left join Bonus a2 on
a1.empId=a2.empId where bonus <1000 OR bonus is NULL