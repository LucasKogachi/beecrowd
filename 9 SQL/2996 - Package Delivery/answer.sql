/*
CREATE TABLE users (
    id integer PRIMARY KEY,
    name varchar(50),
    address varchar(50)
);

CREATE TABLE packages (
    id_package integer PRIMARY KEY,
    id_user_sender integer,
    id_user_receiver integer,
    color varchar(50),
    year integer,
    FOREIGN KEY (id_user_sender) REFERENCES users(id),
    FOREIGN KEY (id_user_receiver) REFERENCES users(id)
);

INSERT INTO users(id, name, address)
VALUES
    (1,'Edgar Codd','England'),
    (2,'Peter Chen','Taiwan'),
    (3,'Jim Gray','United States'),
    (4,'Elizabeth ONeil','United States');

INSERT INTO packages(id_package, id_user_sender, id_user_receiver, color, year)
VALUES
    (1,1,2,'blue',2015),
    (2,1,3,'blue',2019),
    (3,2,4,'red',2019),
    (4,2,1,'green',2018),
    (5,3,4,'red',2015),
    (6,4,3,'blue',2019);
*/

WITH not_taiwan_users AS (
    SELECT
        id,
        name
    FROM
        users
    WHERE
        address <> 'Taiwan'
), red_blue_pkgs AS (
    SELECT
        id_user_sender,
        id_user_receiver,
        year
    FROM
        packages
    WHERE
        color = 'blue' OR color = 'red'
)
SELECT
    red_blue_pkgs.year,
    s.name AS sender,
    r.name AS receiver
FROM
    red_blue_pkgs
    INNER JOIN not_taiwan_users s
        ON red_blue_pkgs.id_user_sender = s.id
    INNER JOIN not_taiwan_users r
        ON red_blue_pkgs.id_user_receiver = r.id
ORDER BY
    red_blue_pkgs.year DESC;

-- DROP TABLE packages;
-- DROP TABLE users;