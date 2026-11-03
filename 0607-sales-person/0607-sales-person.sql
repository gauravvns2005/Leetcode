-- # Write your MySQL query statement below
-- select s.name 
-- from SalesPerson s
-- left join Orders o 
-- on s.sales_id = o.sales_id
-- left join Company c
-- on o.com_id = c.com_id and c.name = 'RED'
-- where c.com_id is null;


select name
from SalesPerson
where sales_id not in(
    select o.sales_id from orders o
    join company c
    on o.com_id = c.com_id
    where c.name = 'RED'
);