CREATE TABLE MARKS(
	ROLL INT PRIMARY KEY,
    MATH INT,
    ENGLISH INT
);

INSERT INTO MARKS(ROLL,MATH,ENGLISH) VALUES
(1, 90, 85),
(2, 50, 30),
(3, 80, 85),
(4, 15, 70),
(5, 37, 87);

-- jar roll 3 tar total marks koto
SELECT MATH+ENGLISH FROM MARKS WHERE ROLL = 3;

-- jar roll 3 tar average marks koto
SELECT (MATH+ENGLISH)/2 FROM MARKS WHERE ROLL = 3;

-- roll and math marks eksathe dekhbo, and math er sathe 10 addition kore dekhbo
SELECT ROLL, MATH, MATH+10 FROM MARKS;

-- roll 4 jar shudhu tar math marks e 10 jog hobe
SELECT ROLL, MATH, MATH+10 FROM MARKS WHERE ROLL = 4;

-- all student er math marks er summation
SELECT SUM(MATH) FROM MARKS;

-- jader math marks 80 or 80 er beshi tader dekhabo
SELECT * FROM MARKS WHERE MATH>= 80;

-- jader math and english duitatei 80 or 80 er beshi tader dekhabo
SELECT * FROM MARKS WHERE MATH>= 80 AND ENGLISH>=80;

-- jader math or english jekono ektay 80 or 80 er beshi tader dekhabo
SELECT * FROM MARKS WHERE MATH>= 80 OR ENGLISH>=80;

-- jader math marks 90 na tader dekhabe. ei table e actually eta make sense kore na, but age dewa thakle jader age 20 na tader dekhabo
-- SQL e not equal dui vabe likha jay: != , <> 
SELECT * FROM MARKS WHERE MATH<> 90;