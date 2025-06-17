/*
    *** Services -> MySQL80 -> Start ***
    
    CHAR vs VARCHAR 
    
*/


CREATE DATABASE JIHAD; -- first e database create korte hobe

USE JIHAD; --  then database select korte hobe

-- evabe table create kore 
-- roll, name and marks holo table er key or column
CREATE TABLE STUDENT(
	ROLL CHAR(4) PRIMARY KEY, /* roll ke primary key hishebe select korlam */
    NAME VARCHAR(50),
    MARKS DOUBLE
);

-- table and database delete(drop) kora:
DROP TABLE STUDENT;
DROP DATABASE JIHAD;

-- ekhn table e data insert korbo.

/* 
ekhane multiple time input kora hoise. jotobar khushi insert korte parbo, chaile duplicate
values ow insert korte parbo. but jeta primary key oita chailew duplicate ta insert korte parbo na.
*/
INSERT INTO STUDENT(ROLL,NAME, MARKS)
VALUES(5796, 'JIHAD', 95);

INSERT INTO STUDENT(ROLL,NAME)
VALUES(5325, 'SADMAN');

-- eksathe jodi insert korte chai 
INSERT INTO STUDENT(ROLL, NAME, MARKS) VALUES 
(5796, 'JIHAD', 95),
(5325, 'SADMAN', 85);

-- ekhn update kora dekhbo:
SET SQL_SAFE_UPDATES=0;

UPDATE STUDENT 
SET NAME = 'JIHAD ISLAM' WHERE ROLL = 5796;
-- SET NAME = 'JIHAD ISLAM' WHERE NAME = 'JIHAD'; #chaile evabew update kora jay, but jihad nam e ekadhik person thakte pare. tai primary key use korai better.
/*
	1. update,delete korte hole safe mode off korte hoy. by default safe mode on thake.
    off: SET SQL_SAFE_UPDATES=0;
    on:  SET SQL_SAFE_UPDATES=1;
*/

-- ekhn delete kora dekhbo:
DELETE FROM STUDENT
WHERE ROLL = 5325;


-- full table dekhabe
SELECT * FROM STUDENT