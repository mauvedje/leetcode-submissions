SELECT s.user_id, ROUND(AVG(CASE WHEN c.action = 'confirmed' THEN 1 ELSE 0 END)::numeric, 2) as confirmation_rate
FROM Signups AS s
LEFT JOIN Confirmations AS c ON c.user_id = s.user_id
GROUP BY s.user_id
ORDER BY confirmation_rate;