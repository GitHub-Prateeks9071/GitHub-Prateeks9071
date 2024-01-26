#Find which customer is served by which salesperson. Display the customer name and salesperson name for all matching cases.

from pyspark.sql import SparkSession
spark = (SparkSession.builder.appName("comman_City").getOrCreate())
sales = spark.read.csv ('salespeople.txt',inferSchema = True , header = True)
customer = spark.read.csv ('customers.txt',inferSchema = True , header = True)
sales.createOrReplaceTempView("sales_table")
customer.createOrReplaceTempView("cust_table")

spark.sql(
        """
        SELECT cname,sname FROM sales_table 
        INNER JOIN cust_table
        ON(sales_table.snum = cust_table.snum)
        """
        ).show()


""" OUTPUT 
+--------+-------+
|   cname|  sname|
+--------+-------+
| Hoffman|   Peel|
|Giovanni|Axelrod|
|     Liu| Serres|
|   Grass| Serres|
| Clemens|   Peel|
| Pereira| Motika|
|Cisneros| Rifkin|
+--------+-------+  """      