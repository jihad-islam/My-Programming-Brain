/*
    join koyek dhoroner hoite pare:
    
    1. INNER JOIN: duita table er just common data diye inner join kora hoy. for example ami department id diye join chalaisi. ekhn duita table e jei department id gula common ase shudhu oi department id gular record or row or desire data show korbe.

    2. LEFT JOIN: common data soho left table er full data gula show korbe.

    3. RIGHT JOIN: common data soho right table er full data gula show korbe.

    4. CROSS JOIN: duita table er full data gula show korbe. 
*/


USE DUMMYDB;

SELECT * FROM EMPLOYEES;
SELECT * FROM DEPARTMENTS;

--  now i have to show a tew table where only duita field or attribute(column) thakbe first_name and department_name

-- without using join query
SELECT FIRST_NAME, DEPARTMENT_NAME FROM EMPLOYEES, DEPARTMENTS WHERE EMPLOYEES.DEPARTMENT_ID = DEPARTMENTS.DEPARTMENT_ID;

SELECT EMPLOYEES.FIRST_NAME, DEPARTMENTS.DEPARTMENT_NAME FROM EMPLOYEES, DEPARTMENTS WHERE EMPLOYEES.DEPARTMENT_ID = DEPARTMENTS.DEPARTMENT_ID; -- best practice

-- using join query
SELECT EMPLOYEES.FIRST_NAME, DEPARTMENTS.DEPARTMENT_NAME
FROM EMPLOYEES
	JOIN DEPARTMENTS ON EMPLOYEES.DEPARTMENT_ID = DEPARTMENTS.DEPARTMENT_ID;
    
    SELECT EMPLOYEES.FIRST_NAME, DEPARTMENTS.DEPARTMENT_NAME
FROM EMPLOYEES
	JOIN DEPARTMENTS USING(DEPARTMENT_ID); -- eta easy but both table er attribute er name same hote hobe