/*
CREATE TABLE genres (
  id numeric PRIMARY KEY,
  description varchar(50)
);

CREATE TABLE movies (
  id numeric PRIMARY KEY,
  name varchar(50),
  id_genres numeric REFERENCES genres (id)
);

INSERT INTO genres (id, description)
VALUES
  (1,	'Animation'),
  (2,	'Horror'),
  (3,	'Action'),
  (4,	'Drama'),
  (5,	'Comedy');
  
INSERT INTO movies (id, name, id_genres)
VALUES
  (1,	'Batman',	3),
  (2,	'The Battle of the Dark River',	3),
  (3,	'White Duck',	1),
  (4,	'Breaking Barriers',	4),
  (5,	'The Two Hours',	2);
*/

WITH genre AS (
  SELECT
    id
  FROM
    genres
  WHERE
    description = 'Action'
)
SELECT
  movies.id,
  movies.name
FROM
  movies
  RIGHT JOIN genre
    ON movies.id_genres = genre.id;

-- DROP TABLE movies, genres;