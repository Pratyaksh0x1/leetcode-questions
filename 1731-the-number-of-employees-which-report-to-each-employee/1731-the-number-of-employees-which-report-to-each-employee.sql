# Write your MySQL query statement below
select a.employee_id,a.name ,count(b.employee_id) as reports_count,Round(avg(b.age)) as average_age from Employees a inner Join Employees b
on b.reports_to=a.employee_id
GROUP BY a.employee_id, a.name
ORDER BY a.employee_id;
