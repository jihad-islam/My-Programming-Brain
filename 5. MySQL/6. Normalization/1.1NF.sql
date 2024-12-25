/*
    A table is in 1NF if:
        - Each column contains atomic (single value thakte hobe, multiple value thakte parbe na) values.
        - Each column has a unique name.
        - The order of data doesn't matter.
*/

---------------------------------------------- Example 1 ----------------------------------------------

-- example 1 (ekhane extra row create kore 1NF korbo)
CREATE TABLE Students (
    StudentID INT,
    Name VARCHAR(50),
    Courses VARCHAR(100)
);

-- ei table e course e multiple value ase. so eta 1NF break korse. now 1NF apply korbo.
INSERT INTO Students (StudentID, Name, Courses)
VALUES
(1, 'Alice', 'Math, English'),
(2, 'Bob', 'Science, History');



-- 1NF apply korte amake abar new table create korte hobe.
CREATE TABLE StudentCourses (
    StudentID INT,
    Name VARCHAR(50),
    Course VARCHAR(50)
);
INSERT INTO StudentCourses (StudentID, Name, Course)
VALUES
(1, 'Alice', 'Math'),
(1, 'Alice', 'English'),
(2, 'Bob', 'Science'),
(2, 'Bob', 'History');

---------------------------------------------- Example 2 ----------------------------------------------

-- example 2 (ekhane extra column create kore 1NF korbo)

CREATE TABLE Employees (
    EmployeeID INT,
    Name VARCHAR(50),
    ContactDetails VARCHAR(100)
);

-- contact details e multiple value ase. so eta 1NF break korse. now 1NF apply korbo.
INSERT INTO Employees (EmployeeID, Name, ContactDetails)
VALUES
(1, 'John', 'john@example.com, +1234567890'),
(2, 'Jane', 'jane@example.com, +9876543210');


CREATE TABLE EmployeeContacts (
    EmployeeID INT,
    Name VARCHAR(50),
    Email VARCHAR(100),
    PhoneNumber VARCHAR(15)
);

INSERT INTO EmployeeContacts (EmployeeID, Name, Email, PhoneNumber)
VALUES
(1, 'John', 'john@example.com', '+1234567890'),
(2, 'Jane', 'jane@example.com', '+9876543210');
