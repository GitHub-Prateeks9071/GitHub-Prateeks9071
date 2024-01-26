#Find all the customers and salespeople who share a city (i.e. have common city).

from pyspark.sql import SparkSession
spark = (SparkSession.builder.appName("comman_City").getOrCreate())
sales = spark.read.csv ('salespeople.txt',inferSchema = True , header = True)
customer = spark.read.csv ('customers.txt',inferSchema = True , header = True)
sales.join (customer ,sales.snum == customer.snum,"inner").filter(sales.city == customer.city).show()


