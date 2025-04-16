/*
CREATE TABLE doctors (
    id integer PRIMARY KEY,
    name varchar(50)
);

CREATE TABLE work_shifts (
    id integer PRIMARY KEY,
    name varchar(50),
    bonus numeric
);

CREATE TABLE attendances (
    id integer PRIMARY KEY,
    id_doctor integer,
    hours integer,
    id_work_shift integer,
    FOREIGN KEY (id_doctor) REFERENCES  doctors(id),
    FOREIGN KEY (id_work_shift) REFERENCES  work_shifts(id)
);

INSERT INTO doctors(id, name)
VALUES
    (1,'Arlino'),
    (2,'Tiago'),
    (3,'Amanda'),
    (4,'Wellington');

INSERT INTO work_shifts(id, name, bonus)
VALUES
    (1,'nocturnal',15),
    (2,'afternoon',2),
    (3,'day',1);

INSERT INTO attendances(id, id_doctor, hours, id_work_shift)
VALUES
    (1,1,5,1),
    (2,3,2,1),
    (3,3,3,2),
    (4,2,2,3),
    (5,1,5,3),
    (6,4,1,3),
    (7,4,2,1),
    (8,3,2,2),
    (9,2,4,2);
*/

WITH sum_attendances AS (
    SELECT
        id_doctor,
        id_work_shift,
        SUM(hours) AS hours
    FROM
        attendances
    GROUP BY
        id_doctor, id_work_shift
), id_salary AS (
    SELECT
        sum_attendances.id_doctor,
        SUM(150 * sum_attendances.hours * (1 + work_shifts.bonus / 100)) AS salary
    FROM
        sum_attendances
        LEFT JOIN work_shifts
            ON sum_attendances.id_work_shift = work_shifts.id
    GROUP BY
        sum_attendances.id_doctor
)
SELECT
    doctors.name,
    ROUND(id_salary.salary, 1) AS salary
FROM
    doctors
    INNER JOIN id_salary
        ON doctors.id = id_salary.id_doctor
ORDER BY
    salary DESC;

-- DROP TABLE attendances;
-- DROP TABLE work_shifts;
-- DROP TABLE doctors;