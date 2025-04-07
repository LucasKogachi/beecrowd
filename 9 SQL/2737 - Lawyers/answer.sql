/*
CREATE TABLE lawyers(
  register INTEGER PRIMARY KEY,
  name VARCHAR(255),
  customers_number INTEGER
 );

 INSERT INTO lawyers(register, name, customers_number)
 VALUES (1648, 'Marty M. Harrison', 5),
	(2427, 'Jonathan J. Blevins', 15),
	(3365, 'Chelsey D. Sanders', 20),
	(4153, 'Dorothy W. Ford', 16),
	(5525, 'Penny J. Cormier', 6);
*/

WITH metrics AS (
  SELECT
    MAX(customers_number),
    MIN(customers_number),
    CAST(AVG(customers_number) AS INT)
  FROM
    lawyers
)
SELECT name, customers_number FROM lawyers
  WHERE customers_number = (SELECT FIRST_VALUE(max) OVER() FROM metrics)
UNION ALL
SELECT name, customers_number FROM lawyers
  WHERE customers_number = (SELECT FIRST_VALUE(min) OVER() FROM metrics)
UNION ALL
SELECT 'Average' AS name, FIRST_VALUE(avg) OVER() AS customers_number
  FROM metrics;

-- DROP TABLE lawyers;