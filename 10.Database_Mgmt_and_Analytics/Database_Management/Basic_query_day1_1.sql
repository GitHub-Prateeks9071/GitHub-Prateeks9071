create basic_table
select * from user_object where object_type = 'table'
select * from user_table
select * from user_tab_columns
CREATE table new_table
(
    roll number,
    name varchar2(100),
    dob date
)

drop table new_table

alter table new_table add(city varchar2(100))
alter table new_table drop(city)
alter table new_table rename column roll to roll_number
alter table new_table modify(name varchar2(200))


create basic_table
select * from user_object where object_type = 'table'
select * from user_table
select * from user_tab_columns

create basic_1table
CREATE table new_2table
(
    roll number,
    name varchar2(100),
    dob date,
    city varchar2(100)
)

drop table new_2table
alter table new_2table add(city varchar2(100))
alter table new_2table drop(city)
alter table new_2table rename column roll to roll_number
alter table new_2table modify(name varchar2(200))
rename new_2table to My_2_table





insert into new_2table(roll,name,dob,city)
values(23,'suraj',to_date('12-11-2022','dd-mm-yyyy'),'kolhapur');


select * from new_2table

select to_date('10-jan-2022','dd-mm-yyyy') from dual

alter table new_2table modify(roll varchar2(100))

delete from new_2table where roll = 23
delete from new_2table where name = 'suraj'

update new_2table set city = 'sangli' where roll = 23

------------------------task----------------------------------------
create basic_table
select * from user_object where object_type = 'table'
select * from user_table
select * from user_tab_columns

create basic_1table
CREATE table new_2table
(
    roll number,
    name varchar2(100),
    dob date,
    city varchar2(100)
)
drop table new_2table

insert into new_2table(roll,name,dob,city)
values(23,'suraj',to_date('12-11-2022','dd-mm-yyyy'),'kolhapur');

insert into new_2table(roll,name,dob,city)
values(23,'amit',to_date('12-11-2022','dd-mm-yyyy'),'sangli');

insert into new_2table(roll,name,dob,city)
values(23,'aditya',to_date('12-11-2022','dd-mm-yyyy'),'kolhapur');

insert into new_2table(roll,name,dob,city)
values(23,'pratik',to_date('12-11-2022','dd-mm-yyyy'),'sangli');

select * from new_2table

update new_2table set city = 'satara' where city = 'kolhapur'

delete from new_2table where city = 'satara'


-------------------------------------tcl-----------------------------------------

CREATE table new_2table
(
    roll number,
    name varchar2(100),
    dob date,
    city varchar2(100)
)
---drop table new_2table

insert into new_2table(roll,name,dob,city)
values(23,'suraj',to_date('12-11-2022','dd-mm-yyyy'),'kolhapur');

insert into new_2table(roll,name,dob,city)
values(23,'amit',to_date('12-11-2022','dd-mm-yyyy'),'sangli');

insert into new_2table(roll,name,dob,city)
values(23,'aditya',to_date('12-11-2022','dd-mm-yyyy'),'kolhapur');

insert into new_2table(roll,name,dob,city)
values(23,'pratik',to_date('12-11-2022','dd-mm-yyyy'),'sangli');

select * from new_2table;
rollback;


select * from new_2table;
commit;

select * from new_2table;



________________________________________________________________________________________________________________________________________

(LIBRARY PROJECT)


select * from user_tables;
select * from books;

create table books
(
book_ISBN number primary key,
book_title varchar2(100) not null,
book_category varchar2(50) check (book_category = 'programming'),
book_edition varchar2(100),
book_barcode_number number unique

);
  drop table books;
insert into books (book_ISBN,book_title,book_category,book_edition,book_barcode_number) values (907, 'Let us java', 'programming' , '3rd' ,234556);

insert into books (book_ISBN,book_title,book_category,book_edition,book_barcode_number) values (908, 'Hindi sahitya', 'Historical' , '2nd' ,2323556);

insert into books (book_ISBN,book_title,book_category,book_edition,book_barcode_number) values (909, 'java', 'programming' , '6th' ,2324246);

insert into books (book_ISBN,book_title,book_category,book_edition,book_barcode_number) values (910, 'C in depth', 'programming' , '8th' ,242456);
