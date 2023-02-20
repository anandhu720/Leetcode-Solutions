SELECT distinct p1.email FROM Person as p1,Person as p2 where p1.id != p2.id and p1.email = p2.email;
