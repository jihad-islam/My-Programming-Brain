/*
    1. update, delete table er data er upor kaj kore. alter, drop kaj kore table er stucture change er jonne. 

    2. alter table diye ja ja kora jay:
        - add column/attribute: alter table table_name add column_name data_type;
        - drop column/attribute: alter table table_name drop column_name;
        - modify column/attribute: alter table table_name modify column_name data_type;

*/

CREATE TABLE STUDENTS(
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100),
    age INT
);

ALTER TABLE STUDENTS ADD email VARCHAR(100);
ALTER TABLE STUDENTS MODIFY email VARCHAR(100) NOT NULL;
ALTER TABLE STUDENTS DROP email;
