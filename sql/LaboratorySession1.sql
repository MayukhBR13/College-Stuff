
1.

CREATE TABLE DEPT(DNO NUMBER PRIMARY KEY,
	              DNAME VARCHAR2(30) NOT NULL,
                  LOC VARCHAR2(50));

CREATE TABLE EMP(
	EMPNO NUMBER PRIMARY KEY,
	ENAME VARCHAR2(50) NOT NULL,
	JOB CHAR(30) NOT NULL,
	MGR NUMBER,
	HIREDATE DATE NOT NULL,
	SAL NUMBER NOT NULL,
	COMM NUMBER,
	DEPTNO NUMBER REFERENCES DEPT(DNO) 
	ON DELETE CASCADE);

=======================================

2.

ALTER TABLE EMP 
ADD PHONE NUMBER(10);

=======================================

3.

ALTER TABLE EMP
MODIFY JOB VARCHAR2(30);

=======================================

4.

ALTER TABLE EMP
DROP COLUMN PHONE;

=======================================

5.

DESC EMP;

=======================================

6.

INSERT INTO DEPT  VALUES(10,'Accounting','New York');
INSERT INTO DEPT  VALUES(20,'Research','Dallas');
INSERT INTO DEPT  VALUES(30,'Sales','Chicago');
INSERT INTO DEPT  VALUES(40,'Operations','Boston');

INSERT INTO EMP  VALUES(7369,
'Smith',
'Clerk',
7902,
'17-DEC-80',
800,
null,
20);

INSERT INTO EMP  VALUES(7499,
'Allen',
'Salesman',
7698,
'20-FEB-81',
1600,
300,
30);

INSERT INTO EMP  VALUES(7521,
'Ward',
'Salesman',
7698,
'22-FEB-81',
1250,
500,
30);

INSERT INTO EMP  VALUES(7566,
'Jones',
'Manager',
7839,
'2-APR-81',
2975,
NULL,
20);

INSERT INTO EMP  VALUES(7654,
'Martin',
'Salesman',
7698,
'28-SEP-81',
1250,
1400,
30);

INSERT INTO EMP  VALUES(7698,
'Blake',
'Manager',
7839,
'1-MAY-81',
2850,
NULL,
30);

INSERT INTO EMP  VALUES(7782,
'Clark',
'Manager',
7839,
'9-JUN-81',
2450,
NULL,
10);

INSERT INTO EMP  VALUES(7788,
'Scott',
'Analyst',
7566,
'9-DEC-82',
3000,
NULL,
20);

INSERT INTO EMP  VALUES(7839,
'King',
'President',
NULL,
'17-NOV-81',
5000,
NULL,
10);

INSERT INTO EMP  VALUES(7844,
'Turner',
'Salesman',
7698,
'8-SEP-81',
1500,
500,
30);

INSERT INTO EMP  VALUES(7876,
'Adams',
'Clerk',
7788,
'12-JAN-83',
1100,
NULL,
20);

INSERT INTO EMP  VALUES(7900,
'James',
'Clerk',
7698,
'3-DEC-81',
950,
NULL,
30);

INSERT INTO EMP  VALUES(7902,
'Ford',
'Analyst',
7566,
'4-DEC-81',
3000,
NULL,
20);

INSERT INTO EMP  VALUES(7934,
'Miller',
'Clerk',
7782,
'23-JAN-82',
1300,
NULL,
10);

================================================

7.

SELECT * FROM EMP;
SELECT * FROM DEPT;

================================================

8.

CREATE TABLE SALESPEOPLE(
SNUM NUMBER PRIMARY KEY,
SNAME VARCHAR2(30),
CITY VARCHAR2(20),
COMM NUMBER
);

================================================

9.

DROP TABLE SALESPEOPLE;

================================================

10.

CREATE TABLE CLIENT_MASTER(
ClientNo Varchar2(6),
Name Varchar2(20) Not null,
City Varchar2(15),
Pincode Number(8),
State Varchar2(15),
BalanceDue Number(10,2),
PRIMARY KEY(ClientNo),
CHECK(ClientNo LIKE 'C%')
);


CREATE TABLE PRODUCT_MASTER(
ProductNo Varchar2(6) ,
Description Varchar2(15) Not null,
ProfitPercent NUMBER(4,2) Not null,
UnitMeasure Varchar2(10) Not null,
QtyInHand Number(8) Not null,
ReorderLvl Number(8) Not null,
SellPrice Number(8,2) Not null, 
CostPrice Number(8,2) Not null, 
PRIMARY KEY(ProductNo),
CHECK(ProductNo LIKE 'P%'),
CHECK(SellPrice <> 0 AND CostPrice <> 0)
);

CREATE TABLE SALESMAN_MASTER(
SalesmanNo Varchar2(6),
Name Varchar2(20) Not null,
Address1 Varchar2(10) Not null,
Address2 Varchar2(10),
City Varchar2(20),
Pincode Number(7),
State Varchar2(20),
Sal Number(8,2) Not null,
TgtToGet Number(6,2) Not null, 
YtdSales Number(6,2) Not null,
Remarks Varchar2(20),
PRIMARY KEY(SalesmanNo),
CHECK(SalesmanNo LIKE 'S%' AND Sal<>0 AND TgtToGet<>0)
);

CREATE TABLE SALES_ORDER(
OrderNo Varchar2(6),
OrderDate Date,
ClientNo Varchar2(6),
DelyAddress Varchar2(25),
SalesmanNo Varchar2(6),
DelyType Char(1) DEFAULT 'F',
BilledYN Char(1),
DelyDate Date,
OrderStatus Varchar2(10),
PRIMARY KEY(OrderNo),
FOREIGN KEY(ClientNo) REFERENCES CLIENT_MASTER(ClientNo),
FOREIGN KEY(SalesmanNo) REFERENCES SALESMAN_MASTER(SalesmanNo),
CHECK(OrderNo LIKE 'O%' AND OrderStatus IN ('in process', 'fulfilled','backorder','cancelled') AND DelyDate>=OrderDate AND DelyType IN ('F','P'))
);

CREATE TABLE SALES_ORDER_DETAILS(
OrderNo Varchar2(6),
ProductNo Varchar2(6),
QtyOrdered Number(8),
QtyDisp Number(8),
ProductRate Number(10,2),
PRIMARY KEY(OrderNo,ProductNo),
FOREIGN KEY(OrderNo) REFERENCES SALES_ORDER(OrderNo),
FOREIGN KEY(ProductNo) REFERENCES PRODUCT_MASTER(ProductNo)
);





INSERT INTO CLIENT_MASTER VALUES(
'C00001',
'Ivan Bayross',
'Mumbai',
400054,
'Maharashtra',
15000);

INSERT INTO CLIENT_MASTER VALUES(
'C00002',
'MamataMazumdar',
'Madras',
780001,
'Tamil Nadu',
0);

INSERT INTO CLIENT_MASTER VALUES(
'C00003',
'ChhayaBankar',
'Mumbai',
400057,
'Maharashtra',
5000);

INSERT INTO CLIENT_MASTER VALUES(
'C00004',
'Ashwini Joshi',
'Bangalore',
560001,
'Karnataka',
0);

INSERT INTO CLIENT_MASTER VALUES(
'C00005',
'Hansel Colaco',
'Mumbai',
400060,
'Maharashtra',
2000);

INSERT INTO CLIENT_MASTER VALUES(
'C00006',
'Deepak Sharma',
'Mangalore',
560050,
'Karnataka',
0);





INSERT INTO PRODUCT_MASTER VALUES('P00001',
'T-Shirts',
5,
'Piece',
200,
50,
350,
250);

INSERT INTO PRODUCT_MASTER VALUES('P0345',
'Shirts',
6,
'Piece',
150,
50,
500,
350);

INSERT INTO PRODUCT_MASTER VALUES('P06734',
'Cotton Jeans',
5,
'Piece',
100,
20,
600,
450);

INSERT INTO PRODUCT_MASTER VALUES('P07865',
'Jeans',
5,
'Piece',
100,
20,
750,
500);

INSERT INTO PRODUCT_MASTER VALUES('P07868',
'Trousers',
2,
'Piece',
150,
50,
850,
550);
INSERT INTO PRODUCT_MASTER VALUES('P07885',
'Pullovers',
2.5,
'Piece',
80,
30,
700,
450);

INSERT INTO PRODUCT_MASTER VALUES('P07965',
'Denim Shirts',
4,
'Piece',
100,
40,
350,
250);

INSERT INTO PRODUCT_MASTER VALUES('P07975',
'Lyers Tops',
5,
'Piece',
70,
30,
300,
175);

INSERT INTO PRODUCT_MASTER VALUES('P08865',
'Skirts',
5,
'Piece',
75,
30,
450,
300);






INSERT INTO SALESMAN_MASTER VALUES('S00001',
'Aman',
'A/14',
'Jadavpur',
'Kolkata',
700032,
'West Bengal',
3000,
100,
50,
'Good');

INSERT INTO SALESMAN_MASTER VALUES('S00002',
'Omkar',
'65',
'Chandni',
'Delhi',
110006,
'Delhi',
3000,
200,
100,
'Good');

INSERT INTO SALESMAN_MASTER VALUES('S00003',
'Raj',
'P-7',
'Bandra',
'Mumbai',
400032,
'Maharashtra',
3000,
200,
100,
'Good');

INSERT INTO SALESMAN_MASTER VALUES('S00004',
'Ashish',
'A/5',
'Agara',
'Bengaluru',
560034,
'Karnataka',
3500,
200,
150,
'Good');









INSERT INTO SALES_ORDER VALUES(
'O19001',
'10-July-02',
'C00001',
'ABC',
'S00001',
'F',
'N',
'20-July-02',
'in process');

INSERT INTO SALES_ORDER VALUES(
'O19002',
'15-June-02',
'C00002',
'XYZ',
'S00002',
'P',
'N',
'27-June-02',
'cancelled');

INSERT INTO SALES_ORDER VALUES(
'O46865',
'11-Feb-02',
'C00003',
'AFSG',
'S00003',
'F',
'Y',
'20-Feb-02',
'fulfilled');

INSERT INTO SALES_ORDER VALUES(
'O19003',
'15-Mar-02',
'C00001',
'ZCX',
'S00001',
'F',
'Y',
'07-Apr-02',
'fulfilled');

INSERT INTO SALES_ORDER VALUES(
'O46866',
'12-May-02',
'C00004',
'AGH',
'S00002',
'P',
'N',
'22-May-02',
'cancelled');

INSERT INTO SALES_ORDER VALUES(
'O19008',
'14-July-02',
'C00005',
'AFC',
'S00004',
'F',
'N',
'26-July-02',
'in process');








INSERT INTO SALES_ORDER_DETAILS VALUES('O19001',
'P00001',
4,
4,
525);

INSERT INTO SALES_ORDER_DETAILS VALUES('O19001',
'P07965',
2,
1,
8400);

INSERT INTO SALES_ORDER_DETAILS VALUES('O19001',
'P07885',
2,
1,
5250);

INSERT INTO SALES_ORDER_DETAILS VALUES('O19002',
'P00001',
10,
0,
525);

INSERT INTO SALES_ORDER_DETAILS VALUES('O46865',
'P07868',
3,
3,
3150);

INSERT INTO SALES_ORDER_DETAILS VALUES('O46865',
'P07885',
3,
1,
5250);

INSERT INTO SALES_ORDER_DETAILS VALUES('O46865',
'P00001',
10,
10,
525);

INSERT INTO SALES_ORDER_DETAILS VALUES('O46865',
'P0345',
4,
4,
1050);

INSERT INTO SALES_ORDER_DETAILS VALUES('O19003',
'P0345',
2,
2,
1050);/P

INSERT INTO SALES_ORDER_DETAILS VALUES('O19003',
'P06734',
1,
1,
12000);

INSERT INTO SALES_ORDER_DETAILS VALUES('O46866',
'P07965',
1,
0,
8400);

INSERT INTO SALES_ORDER_DETAILS VALUES('O46866',
'P07975',
1,
0,
1050);

INSERT INTO SALES_ORDER_DETAILS VALUES('O19008',
'P00001',
10,
5,
525);

INSERT INTO SALES_ORDER_DETAILS VALUES('O19008',
'P07975',
5,
3,
1050);