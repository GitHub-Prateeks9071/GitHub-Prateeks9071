
#Find all the customers and salespeople who share a city (i.e. have common city).

from pyspark.sql import SparkSession
spark = (SparkSession.builder.appName("comman_City").getOrCreate())
sales = spark.read.csv ('salespeople.txt',inferSchema = True , header = True)
customer = spark.read.csv ('customers.txt',inferSchema = True , header = True)
sales.createOrReplaceTempView("sales_table")
customer.createOrReplaceTempView("cust_table")

spark.sql(
        """
        SELECT * FROM sales_table 
        INNER JOIN cust_table
        ON(sales_table.snum = cust_table.snum)
        WHERE sales_table.city = cust_table.city
        """
        ).show()

""" 
OUTPUT->
+----+------+--------+----+----+-------+--------+-------+----+
|snum| sname|    city|comm|cnum|  cname|    city|ranking|snum|
+----+------+--------+----+----+-------+--------+-------+----+
|1001|  Peel|  London|0.12|2001|Hoffman|  London|    100|1001|
|1002|Serres|San Jose|0.13|2003|    Liu|San Jose|    200|1002|
|1001|  Peel|  London|0.12|2006|Clemens|  London|    100|1001|
+----+------+--------+----+----+-------+--------+-------+----+ """        