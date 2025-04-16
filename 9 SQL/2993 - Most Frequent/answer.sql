/*
CREATE TABLE value_table (
    amount integer
);

INSERT INTO value_table(amount)
VALUES
(4),(6),(7),(1),(1),(2),(3),(2),(3),(1),(5),(6),(1),(7),(8),(9),(10),(11),(12),(4),(5),(5),(3),(6),(2),(2),(1);
*/

WITH freq_table AS (
    SELECT
        amount AS num,
        COUNT(*) AS freq
    FROM
        value_table
    GROUP BY
        amount
)
SELECT
    num AS most_frequent_value
FROM
    freq_table
ORDER BY
    freq DESC
LIMIT 1;

-- DROP TABLE value_table;