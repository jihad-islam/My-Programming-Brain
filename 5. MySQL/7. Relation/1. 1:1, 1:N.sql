-- 📝 RELATIONAL DATABASE CONCEPTS: 1:1 and 1:N

-- ✅ 1:1 (One-to-One Relationship)

-- Concept:
-- One row in Table A is related to only one row in Table B — and vice versa.

-- Real-life Example:
-- One PERSON has one PASSPORT
/*
ascii table for 1:1 relationships:

    person table:
    -------------------+------------------+
    |ID (PK)          | NAME              |
    -------------------+------------------+
    | 1                | John Doe         |
    -------------------+------------------+

    passport table:
    -------------------+------------------+-----------------+
    |ID (PK)          | PERSON_ID (FK)   | PASSPORT_NO      |
    -------------------+------------------+-----------------+
    | 1                | 1                | A1234567        |
    -------------------+------------------+-----------------+

*/




-- ✅ SQL Example:
CREATE TABLE PERSON (
    ID INT PRIMARY KEY,
    NAME VARCHAR(50)
);

CREATE TABLE PASSPORT (
    ID INT PRIMARY KEY,
    PERSON_ID INT UNIQUE,  -- 👈 UNIQUE makes it truly 1:1
    PASSPORT_NO VARCHAR(20),
    FOREIGN KEY (PERSON_ID) REFERENCES PERSON(ID)
);

-- 🔍 Summary:
-- One PERSON → One PASSPORT
-- PASSPORT is dependent on PERSON, so FK is placed in PASSPORT table
-- Use UNIQUE constraint to ensure 1:1 relation


-- ✅ 1:N (One-to-Many Relationship)

-- Concept:
-- One row in Table A can relate to many rows in Table B.
-- But each row in Table B relates to only one row in Table A.

-- Real-life Example:
-- One STUDENT can borrow many BOOKS from a LIBRARY

/*
ascii table for 1:N relationships:

    student table:
    -------------------+------------------+
    |ROLL (PK)        | NAME              |
    -------------------+------------------+
    | 001              | John Doe         |
    | 002              | Jane Smith       |
    -------------------+------------------+

    library table:
    -------------------+------------------+-----------------+
    |BOOK_ID (PK)     | BOOKNAME         | WHOHIRED_ROLL (FK)|
    -------------------+------------------+-----------------+
    | 1                | The Great Gatsby | 001             |
    | 2                | To Kill a Mock   | 001             |
    | 3                | 1984             | 002             |
    -------------------+------------------+-----------------+

*/


-- ✅ SQL Example:
CREATE TABLE STUDENT (
    ROLL CHAR(4) PRIMARY KEY,
    NAME VARCHAR(50)
);

CREATE TABLE LIBRARY (
    ID INT PRIMARY KEY,
    BOOKNAME VARCHAR(50),
    WHOHIRED_ROLL CHAR(4),
    FOREIGN KEY (WHOHIRED_ROLL) REFERENCES STUDENT(ROLL)
);

-- 🔍 Summary:
-- One STUDENT → Many LIBRARY records (1:N)
-- One LIBRARY row → belongs to one STUDENT (N:1)
-- FK is in the 'many' side (LIBRARY)

-- ✅ Notes:
-- 1:1 and 1:N are defined by FK placement + UNIQUE constraint (for 1:1)
-- Direction of relationship matters for understanding, but in SQL, only one FK is needed
