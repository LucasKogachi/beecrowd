/*
CREATE TABLE teams (
    id integer PRIMARY KEY,
    name varchar(50)
);

CREATE TABLE matches  (
    id integer PRIMARY KEY,
    team_1 integer,
    team_2 integer,
    team_1_goals integer,
    team_2_goals integer,
    FOREIGN KEY (team_1) REFERENCES teams(id),
    FOREIGN KEY (team_2) REFERENCES teams(id)
);

INSERT INTO teams(id, name)
VALUES
    (1,'CEARA'),
    (2,'FORTALEZA'),
    (3,'GUARANY DE SOBRAL'),
    (4,'FLORESTA');

INSERT INTO  matches(id, team_1, team_2, team_1_goals, team_2_goals)
VALUES
    (1,4,1,0,4),
    (2,3,2,0,1),
    (3,1,3,3,0),
    (4,3,4,0,1),
    (5,1,2,0,0),
    (6,2,4,2,1);
*/

WITH partial_scores AS (
    SELECT
        team_1 as team_id,
        CASE WHEN team_1_goals > team_2_goals THEN 1 ELSE 0 END AS victories,
        CASE WHEN team_1_goals < team_2_goals THEN 1 ELSE 0 END AS defeats,
        CASE WHEN team_1_goals = team_2_goals THEN 1 ELSE 0 END AS draws,
        CASE WHEN team_1_goals > team_2_goals THEN 3
             WHEN team_1_goals = team_2_goals THEN 1 ELSE 0 END AS score
    FROM
        matches
    UNION ALL
    SELECT
        team_2 as team_id,
        CASE WHEN team_2_goals > team_1_goals THEN 1 ELSE 0 END AS victories,
        CASE WHEN team_2_goals < team_1_goals THEN 1 ELSE 0 END AS defeats,
        CASE WHEN team_2_goals = team_1_goals THEN 1 ELSE 0 END AS draws,
        CASE WHEN team_2_goals > team_1_goals THEN 3
             WHEN team_2_goals = team_1_goals THEN 1 ELSE 0 END AS score
    FROM
        matches
), total_score AS (
    SELECT
        team_id,
        COUNT(*) AS matches,
        SUM(victories) AS victories,
        SUM(defeats) AS defeats,
        SUM(draws) AS draws,
        SUM(score) AS score
    FROM
        partial_scores
    GROUP BY
        team_id
)
SELECT
    teams.name,
    total_score.matches,
    total_score.victories,
    total_score.defeats,
    total_score.draws,
    total_score.score
FROM
    total_score
    INNER JOIN teams
        on total_score.team_id = teams.id
ORDER BY
    total_score.score DESC;

-- DROP TABLE matches;