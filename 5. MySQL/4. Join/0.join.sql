CREATE DATABASE jihad; -- first e database create korte hobe
USE jihad;

-- Student Table
CREATE TABLE Student (
    StudentID INT PRIMARY KEY,
    StudentName VARCHAR(50),
    Age INT,
    Department VARCHAR(100)
);

-- Course Table
CREATE TABLE Course (
    CourseID INT PRIMARY KEY,
    Title VARCHAR(100),
    Credit INT
);

-- Enrollment Table
CREATE TABLE Enrollment (
    StudentID INT,
    CourseID INT,
    Semester VARCHAR(50),
    Grade VARCHAR(5),
    PRIMARY KEY (StudentID, CourseID, Semester),
    FOREIGN KEY (StudentID) REFERENCES Student(StudentID),
    FOREIGN KEY (CourseID) REFERENCES Course(CourseID)
);

-- Insert into Student Table
INSERT INTO Student (StudentID, StudentName, Age, Department) VALUES
(1, 'Alice', 20, 'Computer Science'),
(2, 'Bob', 22, 'Information Technology'),
(3, 'Charlie', 21, 'Computer Science'),
(4, 'David', 23, 'Electrical Engineering');

-- Insert into Course Table
INSERT INTO Course (CourseID, Title, Credit) VALUES
(101, 'Database Management System', 3),
(102, 'Operating Systems', 4),
(103, 'Electrical Circuits', 3);

-- Insert into Enrollment Table
INSERT INTO Enrollment (StudentID, CourseID, Semester, Grade) VALUES
(1, 101, 'Fall 2023', 'A'),
(2, 102, 'Spring 2024', 'B'),
(3, 101, 'Fall 2023', 'A-'),
(4, 103, 'Spring 2024', 'C');


-- jei student gula shudu matro dbms course e enroll korse tader name show korba.
SELECT stu.StudentName
FROM Student AS stu
JOIN Enrollment AS enr ON stu.StudentID = enr.StudentID
JOIN Course AS crs ON enr.CourseID = crs.CourseID
WHERE crs.Title = 'Database Management System';
