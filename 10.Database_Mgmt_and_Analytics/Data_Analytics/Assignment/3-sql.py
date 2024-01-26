#3. Display all the order numbers along with the name of the customer who placed that order.

from pyspark.sql import SparkSession
spark = (SparkSession.builder.appName("comman_City").getOrCreate())
order = spark.read.csv ('orders.txt',inferSchema = True , header = True)
customer = spark.read.csv ('customers.txt',inferSchema = True , header = True)
order.createOrReplaceTempView("order_table")
customer.createOrReplaceTempView("cust_table")

spark.sql(
        """
        SELECT cname,onum FROM order_table 
        INNER JOIN cust_table
        ON(order_table.cnum = cust_table.cnum)
        """
        ).show()
