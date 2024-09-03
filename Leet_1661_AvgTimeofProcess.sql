# Write your MySQL query statement below
SELECT A.machine_id, ROUND(AVG(B.timestamp - A.timestamp), 3) as processing_time
FROM Activity A
LEFT JOIN Activity B 
ON A.machine_id = B.machine_id and A.process_id = B.process_id and A.activity_type = "start" and B.activity_type = "end"
GROUP BY A.machine_id