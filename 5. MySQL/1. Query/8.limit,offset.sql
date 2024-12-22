/*
    ami kono ekta nirdisto row theke dekha start korte chai. eishob case e limit, offset keyword use kora hoy.
*/

USE JIHAD;

CREATE TABLE STUDENTS (
    ID INT PRIMARY KEY,
    NAME VARCHAR(50),
    AGE INT
);

INSERT INTO STUDENTS (ID, NAME, AGE) VALUES
(1, 'John Doe', 20),
(2, 'Jane Smith', 22),
(3, 'Alice Johnson', 19),
(4, 'Bob Brown', 21),
(5, 'Charlie White', 23),
(6, 'Daisy Green', 20),
(7, 'Eve Black', 22),
(8, 'Frank Blue', 21),
(9, 'Grace Yellow', 19),
(10, 'Hank Pink', 23);

-- Get the first 5 rows
SELECT * FROM STUDENTS LIMIT 5;

-- Skip the first 5 rows and get the next 5 rows
SELECT * FROM STUDENTS LIMIT 5 OFFSET 5;
SELECT * FROM STUDENTS LIMIT 4,5; -- prothom 4 ta bad daw then porer 5 ta dkehaw

-- 3 theke 7 ta row er nam dekhte chai(total 5 ta row)
SELECT NAME FROM STUDENTS LIMIT 5 OFFSET 2; -- 5 ta dekhbo prothom 2 ta bad
SELECT NAME FROM STUDENTS LIMIT 2,5; -- evavew likha jay. prothom 2 ta bad daw, then 5 ta show koro.
