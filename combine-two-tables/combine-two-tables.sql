# Write your MySQL query statement below
select p.firstname,p.lastname,A.city,A.state FROM Person P left JOIN Address A
 on P.personId = A.personId;
# sELECT P.firstName, P.lastName, a.city, a.state FROM Person P right JOIN Address A
# on P.personId = A.personId