/*
CREATE TABLE providers (
  id numeric PRIMARY KEY,
  name varchar(255),
  street varchar(255),
  city varchar(255),
  state char(2)
);

CREATE TABLE products (
  id numeric PRIMARY KEY,
  name varchar (255),
  amount numeric,
  price numeric,
  id_providers numeric REFERENCES providers (id)
);

INSERT INTO providers (id, name, street, city, state)
VALUES
  (1,	'Ajax SA',	'Rua Presidente Castelo Branco',	'Porto Alegre',	'RS'),
  (2,	'Sansul SA',	'Av Brasil',	'Rio de Janeiro',	'RJ'),
  (3,	'Pr Sheppard Chairs',	'Rua do Moinho',	'Santa Maria',	'RS'),
  (4,	'Elon Electro',	'Rua Apolo',	'São Paulo',	'SP'),
  (5,	'Mike Electro',	'Rua Pedro da Cunha',	'Curitiba',	'PR');

INSERT INTO products (id, name, amount, price, id_providers)
VALUES
  (1,	'Blue Chair',	30,	300.00,	5),
  (2,	'Red Chair',	50,	2150.00,	2),
  (3,	'Disney Wardrobe',	400,	829.50,	4),
  (4,	'Executive Chair',	17,	9.90,	3),
  (5,	'Solar Panel',	30,	3000.25,	4);
*/

WITH providers_P AS (
  SELECT
    id
  FROM
    providers
  WHERE
    name LIKE 'P%'
), prod_amount_between_10_20 AS (
  SELECT
    name,
    id_providers
  FROM
    products
  WHERE
    amount BETWEEN 10 AND 20
)
SELECT
  prod_amount_between_10_20.name
FROM
  prod_amount_between_10_20
  INNER JOIN providers_P
    ON prod_amount_between_10_20.id_providers = providers_P.id;

-- DROP TABLE products, providers;