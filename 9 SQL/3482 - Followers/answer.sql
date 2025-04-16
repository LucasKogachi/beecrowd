/*
CREATE TABLE users(
    user_id numeric,
    user_name varchar,
    posts numeric
);

CREATE TABLE followers(
    follower_id numeric,
    user_id_fk numeric,
    following_user_id_fk numeric
);

INSERT INTO users(user_id, user_name, posts)
VALUES
    (1,'Francisco',23),
    (2,'Brenda',51),
    (3,'Helena',12),
    (4,'Miguel',70),
    (5,'Laura',55),
    (6,'Arthur',2),
    (7,'Alice',3);

INSERT INTO followers(follower_id, user_id_fk, following_user_id_fk)
VALUES
    (1,1,5),
    (2,2,4),
    (3,3,7),
    (4,3,6),
    (5,4,2),
    (6,4,5),
    (7,5,1),
    (8,5,3),
    (9,5,4),
    (10,5,2),
    (11,7,3);
*/

WITH mutual_follow AS (
    SELECT
        l.user_id_fk AS u1,
        l.following_user_id_fk AS u2
    FROM
        followers AS l
        LEFT JOIN followers AS r
            ON  l.following_user_id_fk = r.user_id_fk
    WHERE
        l.user_id_fk = r.following_user_id_fk
)
SELECT
    c1.user_name AS u1_name,
    c2.user_name AS u2_name
FROM
    mutual_follow
    LEFT JOIN users AS c1
        ON mutual_follow.u1 = c1.user_id
    LEFT JOIN users AS c2
        ON mutual_follow.u2 = c2.user_id
WHERE
    c1.posts < c2.posts
ORDER BY
    mutual_follow.u1;

-- DROP TABLE users, followers;