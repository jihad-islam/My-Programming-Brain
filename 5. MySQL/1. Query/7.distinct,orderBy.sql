/*
    1. sql syntax sequence: SELECT -> FROM -> WHERE -> ORDER BY -> LIMIT -> OFSET

    2. distinct keyword ta duplicate value bad dey.
       order by keyword ascending or descending order e sajay.

*/

USE JIHAD;

CREATE TABLE EMPLOYEE(
	ID INT UNIQUE,
    NAME VARCHAR(20),
    DESIGNATION VARCHAR(50),
    AGE INT,
    SALARY VARCHAR(20)
);

INSERT INTO EMPLOYEE(ID,NAME,DESIGNATION,AGE,SALARY) VALUES 
(01, 'JIHAD', 'JUNIOR SOFTWARE ENGINEER', 20, '20K'),
(02, 'SADMAN', 'SENIOR SOFTWARE ENGINEER', 30, '50K'),
(03, 'ASIF', 'PROJECT MANAGER', 40, '60K'),
(04, 'KIRON', 'TEAM LEADER', 35, '55K'),
(05, 'MUNNA', 'SENIOR SOFTWARE ENGINEER', 32, '52K');

SELECT * FROM EMPLOYEE;

/*
ami ei company te kotogula designation ase dekhte chai. ami jodi just designation theke dekhi tahole jr.swe duibar ase, duibari show korbe. ekhane distinct key use korte hobe.
*/
SELECT DISTINCT DESIGNATION FROM EMPLOYEE;

-- ami nam dekhbo age er ascending order e(choto theke boro)
SELECT NAME FROM EMPLOYEE ORDER BY AGE ASC;
SELECT NAME FROM EMPLOYEE ORDER BY AGE DESC; -- descending order