/*
CREATE TABLE clients(
    id integer PRIMARY KEY,
    name varchar(50),
    investment numeric
);

CREATE TABLE operations(
    id integer PRIMARY KEY,
    client_id integer,
    month integer,
    profit numeric,
    FOREIGN KEY (client_id) REFERENCES clients(id)
);

INSERT INTO clients(id, name, investment)
VALUES
    (1,'Daniel',500),
    (2,'Oliveira',2000),
    (3,'Lucas',1000);

INSERT INTO operations(id, client_id, month, profit)
VALUES
    (1,1,1,230),
    (2,2,1,1000),
    (3,2,2,1000),
    (4,3,1,100),
    (5,3,2,300),
    (6,3,3,900),
    (7,3,4,400);
*/

WITH sum_profit AS (
    SELECT
        clients.name,
        clients.investment,
        operations.client_id,
        operations.month,
        operations.profit,
        SUM(operations.profit) OVER (
    	   PARTITION BY operations.client_id
    	   ORDER BY operations.month
    	) AS valor
    FROM
        operations
        LEFT JOIN clients
            ON operations.client_id = clients.id
), positive_return AS (
    SELECT
        *
    FROM
        sum_profit
    WHERE
        sum_profit.investment <= sum_profit.valor
), return_month AS (
    SELECT
        name,
        investment,
        MIN(month) AS month_of_payback,
        MIN(valor) AS valor
    FROM
        positive_return
    GROUP BY
        name, client_id, investment
)
SELECT
    name,
    investment,
    month_of_payback,
    valor - investment AS "return"
FROM
    return_month
ORDER BY
    "return" DESC;

-- DROP TABLE operations;
-- DROP TABLE clients;