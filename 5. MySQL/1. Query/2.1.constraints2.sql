/*
    The AUTO_INCREMENT constraint in DBMS is used to automatically generate a unique number for a column (usually the primary key) whenever a new row is inserted into the table. This ensures that the column values are unique without having to manually provide a value.

    Key Features:
        - Automatic Value Assignment: new row add korle jei field e auto_increment ta assign korbo oitay r value add kora lagbe na.
        
        - Primary Key Use: usually primary key te use kora hoy
        
        - Sequential Numbers: The generated values are sequential (e.g., 1, 2, 3, ...) unless changed manually. and eta by default 1 theke start hoy. manually change kora jay.

*/


CREATE TABLE Employee (
    EmpID INT AUTO_INCREMENT,
    Name VARCHAR(50),
    Department VARCHAR(50),
    PRIMARY KEY (EmpID)
);

-- ekhane ami empId add kori nai, but autoIncrement er jonne automatically add hoye jabe. 
INSERT INTO Employee (Name, Department) VALUES
('Alice', 'HR') ,
('Bob', 'Engineering');


SELECT * FROM EMPLOYEE;