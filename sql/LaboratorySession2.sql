1.

SELECT NAME FROM CLIENT_MASTER
WHERE NAME LIKE '_a%'; 

========================================

2.

SELECT NAME FROM CLIENT_MASTER
WHERE CITY LIKE '_a%'; 

=======================================

3.

select name from client_master
where lower(city) in ('bombay','delhi');

=========================================

4.

select name from client_master
where balancedue>10000;

=========================================

5.

select * from sales_order
where OrderDate like '__-JAN-__';

=========================================

6.

select * from sales_order
where clientNo in ('C00001','C00002');

===========================================

7.

select description from product_master
where sellprice between 2000 and 5000;

===========================================

8.

select sellprice*0.15 "new_price" from product_master
where sellprice>1500;

===========================================

9.

select name,city,state from client_master
where lower(state) != 'maharashtra';

===========================================

10.

select * from product_master
where qtyinhand<reorderlvl;

==========================================

11.

select orderno,orderdate from sales_order;