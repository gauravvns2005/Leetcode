# Write your MySQL query statement below
select name as Customers 
from Customers c
Left JOIN Orders o
ON c.id = o.customerId
where o.customerid is NULL;