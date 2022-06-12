1.

update product_master
set reorderlvl=80
where lower(description)='shirts';

==================================================

2.

update product_master
set sellprice=sellprice*1.1;

==================================================

3.

UPDATE SALESMAN_MASTER
SET YTDSALES=YTDSALES+35
WHERE SALESMANNO='S00001';

==================================================

4.

UPDATE SALES_ORDER_DETAILS
SET QTYDISP=QTYORDERED
WHERE PRODUCTRATE<=1000;

=====================================================

5.

UPDATE CLIENT_MASTER
SET PINCODE=400001
WHERE lower(CITY) = 'mumbai';

======================================================

6.

UPDATE PRODUCT_MASTER
SET REORDERLVL=REORDERLVL*2;

=======================================================

7.

DELETE SALES_ORDER
WHERE lower(ORDERSTATUS)='cancelled';

=======================================================

8.

delete salesman_master;

=======================================================

9.

select * from product_master
where qtyinhand<reorderlvl;

=======================================================

10.

update emp
set mgr=(select empno from emp where lower(ename)='blake')
where lower(ename) in ('smith','adams');
