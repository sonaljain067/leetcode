select emp.name as Employee from Employee emp, Employee man
where man.salary < emp.salary and emp.managerId=man.id;