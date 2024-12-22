/*
    group functions: max,min,count,avg,sum
*/


-- Create the employee table
CREATE TABLE employee (
    id INT PRIMARY KEY,
    name VARCHAR(50),
    age INT,
    salary DECIMAL(10, 2),
    department VARCHAR(50)
);

-- Insert data into the employee table
INSERT INTO employee (id, name, age, salary, department) VALUES
(1, 'Alice', 30, 5000.00, 'HR'),
(2, 'Bob', 35, 6000.00, 'Finance'),
(3, 'Charlie', 40, NULL, 'IT'),
(4, 'David', NULL, 7000.00, 'Finance'),
(5, 'Eve', 25, 5500.00, NULL),
(6, 'Frank', 45, 8000.00, 'IT'),
(7, 'Grace', 50, NULL, 'HR'),
(8, 'Hank', 28, 4500.00, 'IT'),
(9, 'Ivy', NULL, 7500.00, 'HR'),
(10, 'Jack', 32, 5000.00, 'Finance');

SELECT SALARY FROM EMPLOYEE; -- shobar salary dekhabe
SELECT MAX(SALARY) FROM EMPLOYEE; -- maximum salary ta dekhabe
SELECT MIN(SALARY) FROM EMPLOYEE; -- minimum salary ta dekhabe
SELECT AVG(SALARY) FROM EMPLOYEE; -- average

SELECT COUNT(ID) FROM EMPLOYEE; -- 10 ta id ase
SELECT COUNT(SALARY) FROM EMPLOYEE; -- salary 8 ta count hoise. karon 2 ta null ase.

SELECT * FROM EMPLOYEE; -- full table show korbe
SELECT COUNT(*) FROM EMPLOYEE; -- table e koyta record(row) ase oita janabe. 10. 
