create table Trip_Guide
(
    G_NO integer,       -- Primary Key
    G_NAME char(30) not null,
    START_YEAR integer,
    DEPTNO varchar(10) not null
);

create table TRIP
(
    TNO integer,
    FROM_CITY char(20) not null,
    TO_CITY char(20) not null,
    DEPARTURE_DATE date,
    RETURN_DATE date,
    G_NO integer        -- Foreign Key
);

-- select * from Trip_Guide;
-- select * from TRIP;

-- drop table Trip_Guide;
-- drop table TRIP;

insert into Trip_Guide values (123, 'VS', 2017, 'ABC123');
insert into Trip_Guide values (124, 'AS', 2018, 'LMN124');
insert into Trip_Guide values (125, 'AP', 2019, 'PQR125');
insert into Trip_Guide values (126, 'VK', 2016, 'XYZ126');

insert into TRIP values (001, 'Prayagraj', 'Pune', to_date('10-03-2022','dd-mm-yyyy'), to_date('10-10-2022','dd-mm-yyyy'), 123);
insert into TRIP values (002, 'Delhi', 'Bangalore', to_date('01-04-2019','dd-mm-yyyy'), to_date('09-04-2019','dd-mm-yyyy'), 124);
insert into TRIP values (003, 'Mumbai', 'Chennai', to_date('01-11-2017','dd-mm-yyyy'), to_date('23-11-2017','dd-mm-yyyy'), 125);
insert into TRIP values (004, 'Prayagraj', 'Ramnagar', to_date('10-02-2017','dd-mm-yyyy'), to_date('19-02-2017','dd-mm-yyyy'), 123);
insert into TRIP values (005, 'Delhi', 'Pune', to_date('15-09-2021','dd-mm-yyyy'), to_date('09-12-2021','dd-mm-yyyy'));
insert into TRIP values (006, 'PYG', 'UK', to_date('19-08-2018','dd-mm-yyyy'), to_date('01-11-2018','dd-mm-yyyy'), 123);
insert into TRIP values (007, 'Kaush', 'PYG', to_date('01-12-2017','dd-mm-yyyy'), to_date('31-12-2017','dd-mm-yyyy'), 123);


-- Q1.1 Query

select *
from TRIP
where DEPARTURE_DATE = to_date('01-11-2017', 'dd-mm-yyyy');


-- Q1.2 Query

select TNO, FROM_CITY, TO_CITY, tg.G_NO, G_NAME, DEPTNO
from Trip_Guide tg
inner join TRIP tr on (tg.G_NO = tr.G_NO)
where tr.G_No is null and tg.G_NO is null;

-- Q1.3 Query

select count(tr.G_NO) G_NO, G_NAME
from Trip_Guide tg
inner join TRIP tr on (tg.G_NO = tr.G_NO)
group by tr.G_NO, G_NAME
having count(tr.G_NO) >= 4;





