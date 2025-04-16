/*
CREATE TABLE empregados(
    cpf varchar(15),
    enome varchar(60),
    salario float,
    cpf_supervisor varchar(15),
    dnumero integer
);

CREATE TABLE departamentos(
    dnumero integer,
    dnome varchar(60),
    cpf_gerente varchar(15)
);

CREATE TABLE trabalha(
    cpf_emp varchar(15),
    pnumero integer
);

CREATE TABLE projetos(
    pnumero integer,
    pnome varchar(45),
    dnumero integer
);

INSERT INTO empregados(cpf, enome, salario, cpf_supervisor, dnumero)
VALUES
    ('049382234322','João Silva', 2350, '2434332222', 1010),
    ('586733922290','Mario Silveira', 3500, '2434332222', 1010),
    ('2434332222','Aline Barros', 2350, NULL, 1010),
    ('1733332162','Tulio Vidal', 8350, NULL, 1020),
    ('4244435272','Juliana Rodrigues', 3310, NULL, 1020),
    ('1014332672','Natalia Marques', 2900, NULL, 1010);

INSERT INTO departamentos(dnumero, dnome, cpf_gerente)
VALUES
    (1010, 'Pesquisa', '049382234322'),
    (1020, 'Ensino', '2434332222');

INSERT INTO trabalha(cpf_emp, pnumero)
VALUES
    ('049382234322', 2010),
    ('586733922290', 2020),
    ('049382234322', 2020);

INSERT INTO projetos(pnumero, pnome, dnumero)
VALUES
    (2010,'Alpha', 1010),
    (2020,'Beta', 1020);
*/

WITH no_work AS (
    SELECT
        empregados.cpf,
        empregados.enome,
        empregados.dnumero
    FROM
        empregados
    WHERE
        empregados.cpf NOT IN (
            SELECT DISTINCT trabalha.cpf_emp FROM trabalha
        )
)
SELECT
    no_work.cpf,
    no_work.enome,
    departamentos.dnome
FROM
    no_work
    LEFT JOIN departamentos
        ON no_work.dnumero = departamentos.dnumero
ORDER BY
    no_work.cpf;

--DROP TABLE empregados, trabalha, departamentos, projetos;