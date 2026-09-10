SELECT sub.employee_id
FROM Employees sub
LEFT JOIN Employees sup
  ON sub.manager_id = sup.employee_id
WHERE sub.salary < 30000
  AND (sup.employee_id IS NULL)
  AND sub.manager_id IS NOT NULL
ORDER BY sub.employee_id