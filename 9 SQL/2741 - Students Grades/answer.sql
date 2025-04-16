/*
CREATE TABLE students(
  id INTEGER PRIMARY KEY,
  name VARCHAR(255),
  grade NUMERIC
);

INSERT INTO students(id, name, grade)
VALUES (1, 'Terry B. Padilla',7.3),
       (2, 'William S. Ray',0.6),
       (3, 'Barbara A. Gongora',5.2),
       (4, 'Julie B. Manzer', 6.7),
       (5, 'Teresa J. Axtell', 4.6),
       (6, 'Ben M. Dantzler', 9.6);
*/

SELECT
  'Approved: ' || name,
  grade
FROM
  students
WHERE
  grade > 6.9999
ORDER BY
  grade DESC;

-- DROP TABLE students;