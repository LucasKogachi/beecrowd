/*
CREATE TABLE customers (
  id numeric PRIMARY KEY,
  name varchar(255),
  street varchar(255),
  city varchar(255),
  state char(2),
  credit_limit numeric
);

CREATE TABLE natural_person (
  id_customers numeric REFERENCES customers (id),
  cpf char (14)
);

INSERT INTO customers (id, name, street, city, state, credit_limit)
VALUES
  (1,	'Nicolas Diogo Cardoso',	'Acesso Um',	'Porto Alegre',	'RS',	475),
  (2,	'Cecília Olivia Rodrigues',	'Rua Sizuka Usuy',	'Cianorte',	'PR',	3170),
  (3,	'Augusto Fernando Carlos Eduardo Cardoso',	'Rua Baldomiro Koerich',	'Palhoça',	'SC',	1067),
  (4,	'Nicolas Diogo Cardoso',	'Acesso Um',	'Porto Alegre',	'RS',	475),
  (5,	'Sabrina Heloisa Gabriela Barros',	'Rua Engenheiro Tito Marques Fernandes', 'Porto Alegre',	'RS',	4312),
  (6,	'Joaquim Diego Lorenzo Araújo',	'Rua Vitorino',	'Novo Hamburgo',	'RS',	2314);

INSERT INTO natural_person (id_customers, cpf)
VALUES
  (1,	'26774287840'),
  (2,	'97918477200');
*/

SELECT
  substr(np.cpf, 1, 3) || '.' ||
  substr(np.cpf, 4, 3) || '.' ||
  substr(np.cpf, 7, 3) || '-' ||
  substr(np.cpf, 10) AS cpf
FROM
  natural_person AS np
WHERE
  np.id_customers IN (SELECT id FROM customers);

-- DROP TABLE natural_person, customers;