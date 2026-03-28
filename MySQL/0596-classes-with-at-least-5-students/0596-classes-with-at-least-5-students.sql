# Write your MySQL query statement below
select c1.class
from courses c1
group by class
having count(distinct student) >= 5;