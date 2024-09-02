# Write your MySQL query statement below
SELECT S.user_id, ROUND(AVG(
    CASE
        WHEN C.action = 'confirmed'
            THEN 1
        ELSE 0
        END
    ), 2) AS confirmation_rate
FROM Signups S
LEFT JOIN Confirmations C ON S.user_id = C.user_id
GROUP BY user_id