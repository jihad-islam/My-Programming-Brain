-- Active: 1734885133763@@127.0.0.1@3306@jihad
create database test123

use test123

CREATE Table testTable(
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100),
    city VARCHAR(100),
    designation VARCHAR(100),
    salary DECIMAL(10,2)
)