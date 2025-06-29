select e1.name
from Employee e1 join(select managerId from Employee where managerId is not null group by managerId having count(*) >= 5)
m on e1.id = m.managerId 