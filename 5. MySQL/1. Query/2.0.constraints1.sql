/* 
    1. constraints mane rules. table create korar shomoy amra jei field gula niye kaj korbo oi field gular charactaristics constraints diye define kora hoy.

    constraints -   PRIMARY KEY : as usual (note khatay)
                    FOREIGN KEY : as usual (note khatay)
                    UNIQUE      : oi field ta unique hote hobe, jemon email id unique hoy
                    CHECK       : eta onekta condition er moto kaj kore. jemon nid banaite hole 18 hote hobe. 
                    DEFAULT     : kono input na dile default kono value boshe jabe. jemon attendence na dile by default 'absent' boshbe.
                    NOT NULL    : input ta faka rakhte parbo na.

    2. constraints multiple vabe declare kora jay. ekhane 3 vabe dekhano holo
            method 1: eta time saving and shortcut
            method 2: boro project e jokhon team e kaj korbo tokhon eta kaje lagte pare, but method 3 beshi helpful
            method 3: constraint er nam add kora hoise etay. constraint er nam add korle jodi kono key te error khai then oi nam show korbe kothay vul hoise, tai debug kora easy and etai best practice.

*/


-- method 1
CREATE TABLE STUDENT(
	ROLL CHAR(4) PRIMARY KEY,
    NAME VARCHAR(50) NOT NULL,
    EMAIL VARCHAR(60) UNIQUE,
    ADDRESS VARCHAR(255),
    AGE INT CHECK(AGE>= 18)
);

-- method 2
CREATE TABLE STUDENT(
	ROLL CHAR(4),
    NAME VARCHAR(50) NOT NULL,
    EMAIL VARCHAR(60),
    ADDRESS VARCHAR(255),
    AGE INT,
    
    PRIMARY KEY(ROLL),
    UNIQUE(MAIL),
    CHECK(AGE>=18)
);

-- method 3
CREATE TABLE STUDENT(
	ROLL CHAR(4),
    NAME VARCHAR(50) NOT NULL,
    EMAIL VARCHAR(60),
    ADDRESS VARCHAR(255),
    AGE INT,
    
    CONSTRAINT PK_ROLL PRIMARY KEY(ROLL),
    CONSTRAINT UQ_EMAIL UNIQUE(EMAIL),
    CONSTRAINT CHK_AGE CHECK(AGE>=18)
);