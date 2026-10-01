# Write your MySQL query statement below
SELECT 
e.name,b.bonus
FROM Employee e
LEFT JOIN 
bonus b
ON e.empID =b.empID
WHERE 
bonus < 1000
OR
bonus is NULL;
