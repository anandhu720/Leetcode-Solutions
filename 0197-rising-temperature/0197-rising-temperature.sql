# Write your MySQL query statement below
select w1.id from Weather as w1,Weather as w2 where w1.temperature > w2.temperature and to_days(w1.recordDate) - to_days(w2.recordDate) = 1;