/*
	example of join query:
	employee table: name, salary, department_id
	department table: department_id, department_name
	new table using join query: name, department_name


	syntax of join query: (ekhane table2 ke table1 e join kortesi. that means table1 holo main table.)
		SELECT column1, column2, ... (ekhane both table thekei column select kora jabe)
		FROM Table1
		JOIN Table2
		ON Table1.column = Table2.column
		WHERE conditions;
*/

USE DUMMYDB;

SELECT * FROM EMPLOYEES;
SELECT * FROM DEPARTMENTS;

/*
	employees table: employee_id, first_name, last_name, salary, department_id column ache
	departments table: department_id, department_name column ache

	ekhn join query use kore employees table er first_name column and departments table er department_name column show korbo.
*/

-- without using join query
SELECT FIRST_NAME, DEPARTMENT_NAME FROM EMPLOYEES, DEPARTMENTS WHERE EMPLOYEES.DEPARTMENT_ID = DEPARTMENTS.DEPARTMENT_ID;

SELECT EMPLOYEES.FIRST_NAME, DEPARTMENTS.DEPARTMENT_NAME FROM EMPLOYEES, DEPARTMENTS WHERE EMPLOYEES.DEPARTMENT_ID = DEPARTMENTS.DEPARTMENT_ID; -- best practice

-- using join query
SELECT EMPLOYEES.FIRST_NAME, DEPARTMENTS.DEPARTMENT_NAME
FROM EMPLOYEES
	JOIN DEPARTMENTS ON EMPLOYEES.DEPARTMENT_ID = DEPARTMENTS.DEPARTMENT_ID;

-- another method: join query with USING keyword (eta use korle attribute er name same hote hobe)
SELECT EMPLOYEES.FIRST_NAME, DEPARTMENTS.DEPARTMENT_NAME
FROM EMPLOYEES
	JOIN DEPARTMENTS USING(DEPARTMENT_ID); -- best practice

-- comparing which one is better using join or without join: without join there will be m*n calculation. but join e m+n calculation hobe. so join is better than without join. join avoid unnecessary calculation.