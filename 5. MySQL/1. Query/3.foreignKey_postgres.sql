
/*
postgres e mysql er moto shurute 'use JIHAD;' code likhe database select korte hoy na. postgres e manually database create kore tar por oi database e connect korte hoy.

table :
    
    student
    +------+------------------+------------------------------+-------------------------+---------+
    | roll(pk) | name             | email                        | address                 | age |
    +------+------------------+------------------------------+-------------------------+---------+
    | 001      | John Doe         | john.doe@example.com         | 123 Main St             | 20  |
    | 002      | Jane Smith       | jane.smith@example.com       | 456 Oak Ave             | 22  |
    +------+------------------+------------------------------+-------------------------+---------+
    
    library
    +---------+------------------+----------------------+
    | book_id(pk) | bookname         | whohired_roll(fk)|
    +---------+------------------+----------------------+
    | 1           | The Great Gatsby | 001              |
    | 2           | To Kill a Mock   | 002              |
    +---------+------------------+----------------------+

mysql:
    USE JIHAD;

    CREATE TABLE STUDENT (
        ROLL CHAR(4) PRIMARY KEY,
        NAME VARCHAR(50) NOT NULL,
        EMAIL VARCHAR(60) UNIQUE,
        ADDRESS VARCHAR(255),
        AGE INT CHECK (AGE>=18)
    );

    CREATE TABLE LIBRARY (
        BOOK_ID INT PRIMARY KEY AUTO_INCREMENT,
        BOOKNAME VARCHAR(50),
        WHOHIRED_ROLL CHAR(4),

        FOREIGN KEY (WHOHIRED_ROLL) REFERENCES STUDENT(ROLL)
        -- CONSTRAINT FK_WHOHIRED_ROLL FOREIGN KEY (WHOHIRED_ROLL) REFERENCES STUDENT (ROLL)
    );

*/

CREATE TABLE student (
    roll CHAR(4) PRIMARY KEY,
    name VARCHAR(50) NOT NULL,
    email VARCHAR(60) UNIQUE,
    address VARCHAR(255),
    age INT CHECK (age >= 18)
);

CREATE TABLE library (
    book_id SERIAL PRIMARY KEY,
    bookname VARCHAR(50),
    whohired_roll CHAR(4),

    FOREIGN KEY (whohired_roll)
    REFERENCES student(roll)
);

/*
django orm:
    from django.db import models

    class Student(models.Model):
        roll = models.CharField(max_length=4, primary_key=True)
        name = models.CharField(max_length=50)
        email = models.EmailField(unique=True, null=True, blank=True)
        address = models.CharField(max_length=255, null=True, blank=True)
        age = models.IntegerField()

    class Library(models.Model):
        book_id = models.AutoField(primary_key=True)
        bookname = models.CharField(max_length=50)

        whohired = models.ForeignKey(
            Student,
            on_delete=models.CASCADE
        )
*/