/*
CREATE TABLE nodes(
    node_id NUMERIC,
    pointer NUMERIC
);

INSERT INTO nodes(node_id, pointer)
VALUES
    (50, 30),
    (50, 75),
    (30, 15),
    (30, 35),
    (15, 1),
    (15, 20),
    (35, 32),
    (35, 40),
    (1, NULL),
    (20, NULL),
    (32, NULL),
    (40, NULL),
    (75, 60),
    (75, 90),
    (60, 55),
    (60, 70),
    (90, 80),
    (90, 95),
    (55, NULL),
    (70, NULL),
    (80, NULL),
    (95, NULL);
*/

WITH all_nodes AS (
    SELECT
        node_id,
        COUNT(*)
    FROM
        nodes
    GROUP BY
        node_id
), not_root AS (
    SELECT
        pointer
    FROM
        nodes
    WHERE
        pointer IS NOT NULL
), node_type AS (
    SELECT
        all_nodes.node_id,
        all_nodes.count,
        not_root.pointer
    FROM
        all_nodes
        LEFT JOIN not_root
            ON all_nodes.node_id = not_root.pointer
)
SELECT
    node_id,
    CASE
        WHEN count = 1 THEN 'LEAF'
        WHEN pointer IS NULL THEN 'ROOT'
    ELSE
        'INNER'
    END AS type
FROM
    node_type
ORDER BY
    node_id;

-- DROP TABLE nodes;