/*
    ekahne function gular just kaj dekhano hoise. amra eishob function database e use korbo.
*/

SELECT UPPER('jihad');
SELECT LOWER('JIHAD');
SELECT ABS(-3);

SELECT DEGREES(3); -- rad ke degree te convert kore. input radian e hote hobe. 
SELECT RADIANS(90); -- degree ke rad e convert kroe.

SELECT COS(3); -- cos er value radian e input dite hobe. 
SELECT COS(RADIANS(0)); -- degree input dilam, oi degree ke radian e convert korlam. 
SELECT ACOS(RADIANS(0)); -- ACOSE means cos-1(cos inverse)
-- baki trigometric functions ow same. SIN,ASIN, TAN,ATAN, etc...

SELECT CEIL(12.4);
SELECT FLOOR(12.4);

SELECT 10/2;
SELECT 10 DIV 2; -- using div function

SELECT EXP(10); -- exp(10) means e^10

SELECT GREATEST(3,5,1,7,9,2);
SELECT LEAST(3,5,1,7,9,2);

SELECT LN(10); -- etar base e.
SELECT LOG(10); -- etar base e.
SELECT LOG10(10); -- etar base 10.
SELECT LOG2(10); -- etar base 2. 

SELECT 5 MOD 2; -- ramainder
SELECT  PI();
SELECT POW(2,5); -- 2^5
SELECT SQRT(4); -- eta root 4

SELECT RAND(); -- 0 and 1 er moddhe random values dekhabe. 
SELECT ROUND(12.7678); -- .5 er beshi hole 13, .5 er kom hoile 12 dekhabe.
SELECT TRUNCATE(12.5678,2); -- doshomiker por ami koy ghor dekhte chai eta bole dewa lagbe