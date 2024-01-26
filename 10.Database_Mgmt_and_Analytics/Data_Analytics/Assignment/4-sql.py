#Find how many orders have been brought by each salesperson. Display the salesperson number, name, and the number of orders in the descending sequence of orders. 

from pyspark.sql import SparkSession
spark = (SparkSession.builder.appName("comman_City").getOrCreate())
order = spark.read.csv ('orders.txt',inferSchema = True , header = True)
sales = spark.read.csv ('salespeople.txt',inferSchema = True , header = True)
order.createOrReplaceTempView("order_table")
sales.createOrReplaceTempView("sales_table")

spark.sql(
        """
        SELECT sales_table.snum,sales_table.sname,COUNT(onum) count FROM order_table 
        INNER JOIN sales_table
        ON(order_table.snum = sales_table.snum)
        GROUP BY sales_table.snum,sales_table.sname
        ORDER BY COUNT(onum) DESC
        """
        ).show()

""" output 
+----+-------+-----+
|snum|  sname|count|
+----+-------+-----+
|1002| Serres|    3|
|1001|   Peel|    3|
|1007| Rifkin|    2|
|1003|Axelrod|    1|
|1004| Motika|    1|
+----+-------+-----+"""       