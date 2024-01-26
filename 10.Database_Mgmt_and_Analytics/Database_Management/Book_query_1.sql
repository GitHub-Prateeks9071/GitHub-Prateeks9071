create table gairave_lms_suppliers_details
(
    supplier_id varchar2(3) primary key,
    supplier_name varchar2(30) not null,
    address varchar2(50),
    contact number(10) not null,
    email varchar2(15) not null
)

insert into gairave_lms_suppliers_details values('100','Aditya_patil','At/post Shigaon',1234567890,'adit@gmail.com');
insert into gairave_lms_suppliers_details values('101','Amit_sutrave','At/post latur',9876543210,'amit@gmail.com');
insert into gairave_lms_suppliers_details values('102','prateek_sing','At/post pune',554445644,'pratk@gmail.com');

drop table gairave_lms_suppliers_details;
select * from gairave_lms_suppliers_details;

create table guarav_lms_members
(
    member_id varchar2(10) primary key,
    member_name varchar2(30) not null,
    city varchar2(20) not null,
    date_register date not null,
    date_expired date,
    membership_status varchar2(15) not null
)

insert into guarav_lms_members values('000001','Suraj_patil','At/post Satara',to_date('10-07-2022','dd-mm-yyyy'),to_date('10-07-2023','dd-mm-yyyy'),'Active');
insert into guarav_lms_members values('000002','Hrushikesh','At/post marthvada',to_date('10-07-2022','dd-mm-yyyy'),to_date('10-07-2023','dd-mm-yyyy'),'Active');
insert into guarav_lms_members values('000003','Abhishek','At/post MP',to_date('10-07-2022','dd-mm-yyyy'),to_date('10-07-2023','dd-mm-yyyy'),'Active');

drop table guarav_lms_members;
select * from guarav_lms_members;

create table gourav_lms_fine_details
(
    fine_range varchar2(3) primary key,
    fine_amount number(3) not null,
    max_day_delayed number
)

insert into gourav_lms_fine_details values('100',100.00,10);
insert into gourav_lms_fine_details values('200',200.00,20);
insert into gourav_lms_fine_details values('300',300.00,30);

drop table gourav_lms_fine_details;
select * from gourav_lms_fine_details;

create table gaurav_lms_book_details
(
    book_code varchar2(10) primary key,
    book_title varchar2(100) not null,
    category varchar2(15) not null,
    author varchar2(30) not null,
    publication varchar2(30),
    publish_date date,
    book_edition number,
    price number(8,2) not null,
    rack_num varchar2(3),
    data_arrival date,
    supplier_ide varchar2(3),
    constraint detail foreign key(supplier_ide) references gairave_lms_suppliers_details(supplier_id)
)

insert into gaurav_lms_book_details values('1001','abcd','java','aditya','patil',to_date('15-04-2017','dd-mm-yyyy'),10,100.45,'111',to_date('24-08-2020','dd-mm-yyyy'),'100');
insert into gaurav_lms_book_details values('1002','gchg','c','amit','sutrave',to_date('10-09-2018','dd-mm-yyyy'),24,220.45,'112',to_date('16-05-2021','dd-mm-yyyy'),'104');
insert into gaurav_lms_book_details values('1003','gfrh','python','prateek','sing',to_date('27-05-2014','dd-mm-yyyy'),21,250.45,'113',to_date('02-08-2020','dd-mm-yyyy'),'101');
insert into gaurav_lms_book_details values('1004','likj','angular','suraj','patil',to_date('30-04-2019','dd-mm-yyyy'),14,300.45,'114',to_date('16-08-2021','dd-mm-yyyy'),'102');

drop table gaurav_lms_book_details;
select * from gaurav_lms_book_details;

create table gourav_lms_book_lssue
(
    book_issue_no number primary key,
    member_ide varchar2(10),
    book_codee varchar2(10),
    date_issue date,
    date_return date,
    date_returned date,
    fine_rangee varchar2(3),
    constraint detail1 foreign key(member_ide) references guarav_lms_members(member_id),
    constraint detail2 foreign key(book_codee) references gaurav_lms_book_details(book_code),
    constraint detail3 foreign key(fine_rangee) references gourav_lms_fine_details(fine_range)
)
