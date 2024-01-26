#3. Display all the order numbers along with the name of the customer who placed that order.

from pyspark.sql import SparkSession
spark = (SparkSession.builder.appName("comman_City").getOrCreate())
order = spark.read.csv ('orders.txt',inferSchema = True , header = True)
customer = spark.read.csv ('customers.txt',inferSchema = True , header = True)
result_df = order.join (customer ,order.cnum == customer.cnum,"inner")
result_df.select('cname','onum').show()

""" OUTPUT 
+--------+----+
|   cname|onum|
+--------+----+
|Cisneros|3001|
| Hoffman|3003|
| Pereira|3002|
|     Liu|3005|
|Cisneros|3006|
|Giovanni|3009|
|   Grass|3007|
| Clemens|3008|
|   Grass|3010|
| Clemens|3011|
+--------+----+ """