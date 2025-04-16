/*
CREATE TABLE dimensions(
	id INTEGER PRIMARY KEY,
	name varchar(255)
);

CREATE TABLE life_registry(
	id INTEGER PRIMARY KEY,
	name VARCHAR(255),
	omega NUMERIC,
	dimensions_id INTEGER REFERENCES dimensions (id)
);

INSERT INTO dimensions(id, name)
VALUES 
      (1, 'C774'),
      (2, 'C784'),
      (3, 'C794'),
      (4, 'C824'),
      (5, 'C875');
      
INSERT INTO life_registry(id, name, omega, dimensions_id)
VALUES
	  (1, 'Richard Postman', 5.6, 2),	
	  (2, 'Simple Jelly', 1.4, 1),	
	  (3, 'Richard Gran Master', 2.5, 1),	
	  (4, 'Richard Turing', 6.4, 4),	
	  (5, 'Richard Strall',	1.0, 3);
*/

WITH richards AS (
	SELECT
		name,
		omega,
		dimensions_id
	FROM
		life_registry
	WHERE
		name LIKE 'Richard%'
), dim_C774_C875 AS (
	SELECT
		id
	FROM
		dimensions
	WHERE
		name = 'C774' OR name = 'C875'
), richards_C774_C875 AS (
	SELECT
		richards.name,
		richards.omega
	FROM
		richards
		INNER JOIN dim_C774_C875
			ON richards.dimensions_id = dim_C774_C875.id
)
SELECT
	name,
	ROUND(1.618 * omega, 3) AS "The N Factor"
FROM
	richards_C774_C875
ORDER BY
	"The N Factor";

-- DROP TABLE life_registry, dimensions;