WITH cte AS (
    SELECT *,
           ROW_NUMBER() OVER (PARTITION BY num ORDER BY id) AS rn 
    FROM Logs
)
SELECT DISTINCT num AS ConsecutiveNums
FROM (
    SELECT num
    FROM cte
    GROUP BY num, id - rn
    HAVING COUNT(*) >= 3
) t;