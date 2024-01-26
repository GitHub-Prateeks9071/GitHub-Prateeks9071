#Find which customer is served by which salesperson. Display the customer name and salesperson name for all matching cases.

from pyspark.sql import SparkSession
spark = (SparkSession.builder.appName("comman_City").getOrCreate())
sales = spark.read.csv ('salespeople.txt',inferSchema = True , header = True)
customer = spark.read.csv ('customers.txt',inferSchema = True , header = True)
result_df = sales.join (customer ,sales.snum == customer.snum,"inner").filter(sales.snum == customer.snum)
result_df.select('cname','sname').show()