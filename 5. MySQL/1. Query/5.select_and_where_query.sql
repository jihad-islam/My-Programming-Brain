CREATE TABLE STUDENT(
    ROLL INT PRIMARY KEY,
    NAME VARCHAR(20),
    PHONE VARCHAR(11),
    EMAIL VARCHAR(20),
    ADDRESS VARCHAR(50)
);

INSERT INTO STUDENT (ROLL, NAME, PHONE, EMAIL, ADDRESS) VALUES
(101, 'RAHIM', '017', 'rahim@gmail.com', 'DHAKA'),
(102, 'KARIM', '015', 'karim@gmail.com', 'KHULNA'),
(103, 'SADMAN', '016', 'sadman@gmail.com', 'SAVAR'),
(104, 'ASIF', '019', 'asif@gmail.com', 'RAJSHAHI');

-- puro table dakhar syntax
 -- SELECT ROLL, NAME, PHONE, EMAIL,ADDRESS FROM STUDENT;

SELECT * FROM STUDENT;

-- jekono ekta field(column) dekhte chaile
SELECT ADDRESS FROM STUDENT;

-- ekhn kono ekta record(row) dekhte chai. jemon jar nam sadman tar shob data dekhaw.
SELECT * FROM STUDENT WHERE NAME = 'SADMAN';

-- ekhn kono ekta record er specific kono data jante chaile. jemon jar phn=017 tar address kothay.
SELECT ADDRESS FROM STUDENT WHERE PHONE = '017';