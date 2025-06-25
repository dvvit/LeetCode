select   p.product_id, ifnull(round(sum(u.units * price)/sum(units),2),0)
as average_price
from Prices p left outer join UnitsSold u on p.product_id = u.product_id and purchase_date between start_date and end_date group by product_id