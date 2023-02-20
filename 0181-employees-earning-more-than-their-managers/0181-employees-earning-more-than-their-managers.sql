# Write your MySQL query statement below
select name as Employee from Employee as e1 where salary > (select salary from employee as e2 where id = e1.managerId);