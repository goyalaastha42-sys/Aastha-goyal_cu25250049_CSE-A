-- Create Database
CREATE DATABASE StudentDB;

-- Select Database
USE StudentDB;

-- Create Student Table
CREATE TABLE Student (
    student_id INT PRIMARY KEY,
    student_name VARCHAR(50) NOT NULL,
    age INT,
    gender VARCHAR(10),
    email VARCHAR(100)
);

-- Create Course Table
CREATE TABLE Course (
    course_id INT PRIMARY KEY,
    course_name VARCHAR(50) NOT NULL,
    credits INT
);

-- Create Enrollment Table
CREATE TABLE Enrollment (
    enrollment_id INT PRIMARY KEY,
    student_id INT,
    course_id INT,
    enrollment_date DATE,

    FOREIGN KEY (student_id)
        REFERENCES Student(student_id),

    FOREIGN KEY (course_id)
        REFERENCES Course(course_id)
);

-- Insert Student Data
INSERT INTO Student
VALUES
(1, 'Rahul', 20, 'Male', 'rahul@gmail.com'),
(2, 'Priya', 21, 'Female', 'priya@gmail.com'),
(3, 'Aman', 20, 'Male', 'aman@gmail.com');

-- Insert Course Data
INSERT INTO Course
VALUES
(101, 'Database Management System', 4),
(102, 'Python Programming', 3),
(103, 'Computer Networks', 4);

-- Insert Enrollment Data
INSERT INTO Enrollment
VALUES
(1001, 1, 101, '2026-08-20'),
(1002, 1, 102, '2026-08-21'),
(1003, 2, 101, '2026-08-22'),
(1004, 3, 103, '2026-08-23');

-- Display Student Table
SELECT * FROM Student;

-- Display Course Table
SELECT * FROM Course;

-- Display Enrollment Table
SELECT * FROM Enrollment;