/*

    1. like keyword ta important. dhori amar database er NAME field e JIHAD ISLAM likha ase. ekhn ami JIHAD ISLAM dekhte chai tokhon amar command hobe: SELECT NAME FROM EMPLOYEE WHERE NAME='JIHAD ISLAM';

    ekhn suppose ami full name jani na. tokhon jodi WHERE NAME='JIHAD' likhi tahole amake kono kichu show korbe na. karon ami full name dei nai. ehsob situation e 'LIKE' keyword kaje lage.

    2. as keyword use kore ekta temporary nam dewa jay. but as keyword er implementation ekhono clear na.

*/

USE JIHAD;

CREATE TABLE EMPLOYEE(
	ID INT PRIMARY KEY,
    NAME VARCHAR(20),
    DESIGNATION VARCHAR(50),
    AGE INT,
    SALARY VARCHAR(20)
);

INSERT INTO EMPLOYEE(ID,NAME,DESIGNATION,AGE,SALARY) VALUES 
(01, 'MOHAMMAD JIHAD ISLAM', 'JUNIOR SOFTWARE ENGINEER', 20, '20K'),
(02, 'SADMAN', 'SENIOR SOFTWARE ENGINEER', 30, '50K'),
(03, 'ASIF', 'PROJECT MANAGER', 40, '60K'),
(04, 'KIRON', 'TEAM LEADER', 35, '55K'),
(05, 'MUNNA', 'SENIOR SOFTWARE ENGINEER', 32, '52K'),
(06, 'abcdefgh', 'STUDENT', 18, '5K');

SELECT NAME FROM EMPLOYEE WHERE NAME = 'MOHAMMAD JIHAD ISLAM';
SELECT NAME FROM EMPLOYEE WHERE NAME LIKE '%JIHAD%';
SELECT NAME FROM EMPLOYEE WHERE NAME LIKE 'MOHAMMAD%';
SELECT NAME FROM EMPLOYEE WHERE NAME LIKE '%ISLAM';

SELECT NAME FROM EMPLOYEE WHERE NAME LIKE 'ab%'; -- 'ab' diye shuru shob name dekhabe
SELECT NAME FROM EMPLOYEE WHERE NAME LIKE '%gh'; -- jader 'gh' ase shudhu tader name dekhabe
SELECT NAME FROM EMPLOYEE WHERE NAME LIKE '%de%'; -- jader name e shudhu 'de' ase tader dekhabe