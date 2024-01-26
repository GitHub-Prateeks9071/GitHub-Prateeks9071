-----------------Basic Table--------------------------------------

select * from user_tables;
select * from user_tab_columns;

create table my_first_table(
rollno number,
name varchar2(100),
dob date

);



--------------------------------------------------------------------------------------

select * from user_objects where OBJECT_TYPE=&#39;TABLE&#39;
;

select * from user_tables
;

select * from user_tab_columns
;

select * from my_first_table
;

select * from my_second_table
;



create table my_first_table( 
rollno number, 
name varchar2(100), 
dob date 
 
)   
;

create table my_second_table( 
empid number, 
name varchar2(100), 
dob date
salary number
 
)   
;

insert into my_second_table(empid,name , dob,salary) 
values (456,'Ankit Singh', to_date('15/09/1996','DD/MM/YYYY'),445444)
;


insert into my_first_table(rollno,name , dob ) 
values (88888, 'Ayush singh', to_date('15/09/1996','DD/MM/YYYY'))
;
alter table my_first_table add(rollno number);
alter table my_first_table modify(rollno number);
alter table my_first_table drop(rollno number);



delete from my_first_table(rollno,name,dob)
values (88888,'prateek', to_date('15/09/1996','DD/MM/YYYY'))
;

delete from my_first_table where rollno=88888;

update my_second table set city=rewa where name=

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------



select * from Institutions
;

create table Institutions( 
ID number, 
name varchar2(100), 
city varchar2(100),
phone_no number
 
)   
;



insert into Institutions(ID,name , city,phone_no) 
values (456,'CDAC', 'Hyderabad', 8770446748)
;
insert into Institutions(ID,name , city,phone_no) 
values (457,'MIT','Bangluru', 834355465)
;

commit;

insert into Institutions(ID,name , city,phone_no) 
values (458,'IACSD','Pune', 8766435353)
;

rollback;

insert into Institutions(ID,name , city,phone_no) 
values (459, 'SUNBEAM','Pune', 6546454544)
;


------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


select * from Members
;

create table Members( 
member_name varchar2(100), 
city varchar2(100),
membership_status varchar2(100)

);



insert into Members(member_name , city, membership_status) 
values ('Prateek singh', 'Hyderabad','permanent')
;
insert into Members(member_name , city,membership_status) 
values ('suraj patil','Satara' ,'permanent')
;
insert into Members(member_name , city,membership_status) 
values ('Aditya patil', 'Sangli','temporary')
;
insert into Members(member_name , city,membership_status) 
values ('Adarsh Katiyar', 'Uttarpradesh','temporary')
;

-- drop table Members;

select * from Members where membership_status=&#39;temporary&#39;;

select * from Members
Welcome || CHR(32) || member_name || CHR(32)  your status is as per mentioned here :&#39; || CHR(32) || membership_status Welcome_message
from Members;


