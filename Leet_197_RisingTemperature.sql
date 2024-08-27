# Write your MySQL query statement below
SELECT today.id
FROM Weather as today
INNER JOIN Weather as yesterday ON DATEDIFF(today.recordDate, yesterday.recordDate) = 1
WHERE today.temperature > yesterday.temperature