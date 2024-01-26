#5. For every salesperson, find out the maximum order amount for each date.

from pyspark.sql.functions import col
from pyspark.sql import SparkSession
spark = (SparkSession.builder.appName("comman_City").getOrCreate())
order = spark.read.csv ('orders.txt',inferSchema = True , header = True)
sales = spark.read.csv ('salespeople.txt',inferSchema = True , header = True)
result_df = order.join (sales,order.snum == sales.snum,"inner").select(sales.snum,sales.sname,order.onum).groupBy(order.onum,sales.snum,sales.sname).max(order.amount).show()

""" OUTPUT 
+----+-------+-------------------+-----------+
|snum|  sname|              odate|max(amount)|
+----+-------+-------------------+-----------+
|1001|   Peel|1990-10-05 00:00:00|     4723.0|
|1001|   Peel|1990-10-03 00:00:00|     767.19|
|1002| Serres|1990-10-06 00:00:00|    1309.95|
|1002| Serres|1990-10-04 00:00:00|      75.75|
|1007| Rifkin|1990-10-03 00:00:00|    1098.16|
|1003|Axelrod|1990-10-04 00:00:00|    1713.23|
|1002| Serres|1990-10-03 00:00:00|    5160.45|
|1001|   Peel|1990-10-06 00:00:00|    9891.88|
|1004| Motika|1990-10-03 00:00:00|     1900.1|
+----+-------+-------------------+-----------+    """  
