from pyspark.sql import SparkSession

spark = (SparkSession.builder.appName("VS Q3 Solution using DataFrame and SQL").getOrCreate())

movies11_file = "movies11.csv"
rating11_file = "rating11.csv"

df1 = (spark.read.format("csv")
        .option("inferSchema","true")
        .option("header","true")
        .load(movies11_file))


df2 = (spark.read.format("csv")
        .option("inferSchema","true")
        .option("header","true")
        .load(rating11_file))

# Solution No. Q3.1 using DataFrame Method
print ("Solution No. Q3.1 using DataFrame Method")

join_df = df1.join(df2, df1.movieId == df2.movieId, "inner").select(['title','rating'])
join_df.groupBy('title')
join_df.agg({'rating':'mean'}).show()

# Solution No. Q3.2 using DataFrame Method
print ("Solution No. Q3.2 using DataFrame Method")

df1.join(df2, df1.movieId == df2.movieId, "inner").select(['title','rating']).show()

# Solution No. Q3.3 using DataFrame Method
print ("Solution No. Q3.3 using DataFrame Method")

df1.join(df2, df1.movieId == df2.movieId, "inner").select(['title','genres']).show()
# df1.filter(df1['genres']=='Adventure'| df1['genres']=='Children' | df1['genres']=='Comedy').show()



# Solutions using SQL Query Method

df1.createOrReplaceTempView("movies_table")
df2.createOrReplaceTempView("rating_table")

# Solution No. Q3.1 using SQL Query Method
print ("Solution No. Q3.1 using SQL Query Method")

# spark.sql("""SELECT * FROM movies_table""").show()
# spark.sql("""SELECT * FROM rating_table""").show()


spark.sql("""SELECT mt.title, rt.rating
            FROM movies_table mt
            INNER JOIN rating_table rt
            ON (mt.movieId = rt.movieId)""").show()

# Solution No. Q3.2 using SQL Query Method
print ("Solution No. Q3.2 using SQL Query Method")

spark.sql("""SELECT mt.movieId, title, rt.rating
            FROM movies_table mt
            INNER JOIN rating_table rt
            ON (mt.movieId = rt.movieId)
            WHERE rating > 2""").show()

# Solution No. Q3.3 using SQL Query Method
print ("Solution No. Q3.3 using SQL Query Method")

spark.sql("""SELECT title, genres
            FROM movies_table
            WHERE genres = initcap('Comedy') or genres = initcap('Adventure') or genres = ('Children')""").show()




