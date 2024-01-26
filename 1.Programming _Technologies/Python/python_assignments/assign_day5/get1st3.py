#Write a code to get first three chars of all strings from list
["Siddhant","Pavan","Ramya","Raja"]

string= ["Siddhant","Pavan","Ramya","Raja"]
lst = list(map(lambda i : i[0:3],string))
print(lst)

