#5. For every salesperson, find out the maximum order amount for each date.

from pyspark.sql import SparkSession
spark = (SparkSession.builder.appName("comman_City").getOrCreate())
order = spark.read.csv ('orders.txt',inferSchema = True , header = True)
sales = spark.read.csv ('salespeople.txt',inferSchema = True , header = True)
order.createOrReplaceTempView("order_table")
sales.createOrReplaceTempView("sales_table")

spark.sql(
        """
        SELECT sales_table.snum,sales_table.sname,order_table.odate,MAX(order_table.amount)  FROM order_table 
        INNER JOIN sales_table
        ON(order_table.snum = sales_table.snum)
        GROUP BY order_table.odate,sales_table.snum,sales_table.sname
        """
        ).show()