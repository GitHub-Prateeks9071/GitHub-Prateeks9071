#Find how many orders have been brought by each salesperson. Display the salesperson number, name, and the number of orders in the descending sequence of orders. 
from pyspark.sql.functions import col
from pyspark.sql import SparkSession
spark = (SparkSession.builder.appName("comman_City").getOrCreate())
order = spark.read.csv ('orders.txt',inferSchema = True , header = True)
sales = spark.read.csv ('salespeople.txt',inferSchema = True , header = True)
result_df = order.join (sales,order.snum == sales.snum,"inner").select(sales.snum,sales.sname).groupBy(sales.snum,sales.sname).count().orderBy(col("count").desc()).show()


""" Output 
+----+-------+-----+
|snum|  sname|count|
+----+-------+-----+
|1002| Serres|    3|
|1001|   Peel|    3|
|1007| Rifkin|    2|
|1003|Axelrod|    1|
|1004| Motika|    1|
+----+-------+-----+ """