/*
CREATE TABLE people(
	id INTEGER PRIMARY KEY,
	name varchar(255)
);

INSERT INTO people(id, name)
VALUES 
      (1, 'Karen'),
      (2, 'Manuel'),
      (3, 'Ygor'),
      (4, 'Valentine'),
      (5, 'Jo');
*/

SELECT
    name,
    LENGTH(name) AS length
FROM
    people
ORDER BY
    length DESC;

-- DROP TABLE people;