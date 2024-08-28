# Write your MySQL query statement below
SELECT E.name
FROM Employee E
WHERE E.id IN (
    SELECT E.managerId
    FROM Employee E
    GROUP BY E.managerId
    HAVING COUNT(*) >= 5
)