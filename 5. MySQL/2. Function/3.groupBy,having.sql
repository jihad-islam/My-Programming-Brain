/*
    1. 2 ta function niye kaj korbo: group by, having.

    2. having vs where: duitai condition apply er jonne use hoy. but where puro table er upor condition apply kore. having group by er upor condition apply kore.
*/


USE JIHAD;

-- Create the student table
CREATE TABLE student (
    id INT PRIMARY KEY,
    name VARCHAR(50),
    age INT,
    subject VARCHAR(50),
    marks INT
);

-- Insert data into the student table
INSERT INTO student (id, name, age, subject, marks) VALUES
(1, 'Alice', 20, 'CSE', 85),
(2, 'Bob', 21, 'EEE', 75),
(3, 'Charlie', 22, 'Civil', 90),
(4, 'David', 21, 'CSE', 60),
(5, 'Eve', 23, 'Mechanical', 70),
(6, 'Frank', 22, 'CSE', 95),
(7, 'Grace', 20, 'Civil', 80),
(8, 'Hank', 21, 'EEE', 85),
(9, 'Ivy', 22, 'Mechanical', 60),
(10, 'Jack', 23, 'CSE', 78);



SELECT * FROM STUDENT;
SELECT MAX(MARKS) FROM STUDENT; -- table er maximum marks show korbe
SELECT SUBJECT, MAX(MARKS) FROM STUDENT GROUP BY SUBJECT; -- protita subject e jara highest marks paise tader dekhaise
SELECT SUBJECT, AVG(MARKS) FROM STUDENT GROUP BY SUBJECT; -- protita subject er average marks

SELECT SUBJECT, COUNT(*) FROM STUDENT GROUP BY SUBJECT; -- kon subject e kotojon student ase eta dekhabe

-- protita sunject e jara highest marks paise tader dekhaisi, but civil subject ta dekhai nai. ekhane where condition use kore civil bad disi, where condition ta table er upor apply hoise. 
SELECT SUBJECT, MAX(MARKS) FROM STUDENT WHERE SUBJECT<>'CIVIL' GROUP BY SUBJECT; 
SELECT SUBJECT, MAX(MARKS) FROM STUDENT WHERE SUBJECT<>'CIVIL' GROUP BY SUBJECT HAVING MAX(MARKS)>80; -- uporer tar motoi but max marks jader 80 er upor tader dekhaisi. ekhane having keyword max(marks) er upor condition apply korse. 




/*
group by function details:
(main kotha hocche table er kono column e duplicate value thakle oi duplicate value ke single value hishebe show korbe.
unique and group by er moddhe difference hocche unique only unique value show korbe, but group by function e ami sum,sub, multiplication, etc operation chalaite pari.)

The `GROUP BY` function in SQL is used to group rows that have the same values into summary rows. It helps when you want to perform aggregate operations like **COUNT**, **SUM**, **AVG**, **MIN**, or **MAX** on specific groups of data, rather than on the entire dataset.

### Explanation in Simple Terms:

Imagine you have a table of sales records for different products, and you want to know the total sales for each product. Instead of looking at each row individually, you can use `GROUP BY` to **group** the sales by product, and then calculate the total sales for each group.

For example, if your data looks like this:

| Product  | Sales |
|----------|-------|
| Apple    | 10    |
| Orange   | 5     |
| Apple    | 20    |
| Orange   | 10    |
| Banana   | 15    |

You can **group by the product** and then calculate the **sum of sales** for each product:

### SQL Query:
```sql
SELECT Product, SUM(Sales)
FROM SalesTable
GROUP BY Product;
```

### Result:
| Product  | TotalSales |
|----------|------------|
| Apple    | 30         |
| Orange   | 15         |
| Banana   | 15         |

### What happened here:
- **`GROUP BY Product`**: Groups the data by the `Product` column. So, all records with "Apple" are grouped together, all records with "Orange" are grouped together, and so on.
- **`SUM(Sales)`**: Calculates the total sales for each group.

In short, the `GROUP BY` function helps you **organize data into groups** and then apply an **aggregate function** (like `SUM`, `AVG`, `COUNT`) to calculate something for each group.

*/