select d.name as Department, e.name as Employee, e.Salary 
from Employee e join Department d on e.departmentID = d.id
where(e.salary, e.departmentID) in(
    select max(salary), departmentID from Employee group by departmentID
) 