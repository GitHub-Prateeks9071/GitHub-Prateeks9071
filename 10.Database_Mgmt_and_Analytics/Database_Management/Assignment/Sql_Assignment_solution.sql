CREATE TABLE LMS_MEMBERS   
(  
MEMBER_ID VARCHAR2(10 BYTE),   
MEMBER_NAME VARCHAR2(30 BYTE) NOT NULL ,   
CITY VARCHAR2(20 BYTE),   
DATE_REGISTER DATE NOT NULL ,   
DATE_EXPIRE DATE,   
MEMBERSHIP_STATUS VARCHAR2(15 BYTE) NOT NULL ,   
CONSTRAINT PK_MBR_ID PRIMARY KEY (MEMBER_ID)    
);

Insert into LMS_MEMBERS (MEMBER_ID,MEMBER_NAME,CITY,DATE_REGISTER,DATE_EXPIRE,MEMBERSHIP_STATUS) values ('LM001','Akshay','CHENNAI',to_date('12-06-18','DD-MM-RR'),to_date('26-10-20','DD-MM-RR'),'Temporary');

Insert into LMS_MEMBERS (MEMBER_ID,MEMBER_NAME,CITY,DATE_REGISTER,DATE_EXPIRE,MEMBERSHIP_STATUS) values ('LM002','Amruta','PUNE',to_date('02-03-20','DD-MM-RR'),to_date('03-06-20','DD-MM-RR'),'Temporary');

Insert into LMS_MEMBERS (MEMBER_ID,MEMBER_NAME,CITY,DATE_REGISTER,DATE_EXPIRE,MEMBERSHIP_STATUS) values ('LM003','Ashish','CHENNAI',to_date('12-06-18','DD-MM-RR'),to_date('17-08-20','DD-MM-RR'),'Permanent');

Insert into LMS_MEMBERS (MEMBER_ID,MEMBER_NAME,CITY,DATE_REGISTER,DATE_EXPIRE,MEMBERSHIP_STATUS) values ('LM004','Bhakti','CHENNAI',to_date('12-06-18','DD-MM-RR'),to_date('12-05-20','DD-MM-RR'),'Temporary');

Insert into LMS_MEMBERS (MEMBER_ID,MEMBER_NAME,CITY,DATE_REGISTER,DATE_EXPIRE,MEMBERSHIP_STATUS) values ('LM005','Gautam','BANGALORE',to_date('12-06-18','DD-MM-RR'),to_date('06-11-20','DD-MM-RR'),'Temporary');

Insert into LMS_MEMBERS (MEMBER_ID,MEMBER_NAME,CITY,DATE_REGISTER,DATE_EXPIRE,MEMBERSHIP_STATUS) values ('LM006','Hetvi','CHENNAI',to_date('12-06-18','DD-MM-RR'),to_date('26-10-20','DD-MM-RR'),'Permanent');

Insert into LMS_MEMBERS (MEMBER_ID,MEMBER_NAME,CITY,DATE_REGISTER,DATE_EXPIRE,MEMBERSHIP_STATUS) values ('LM007','Mayur','Pune',to_date('19-09-19','DD-MM-RR'),to_date('19-10-20','DD-MM-RR'),'Permanent');

Insert into LMS_MEMBERS (MEMBER_ID,MEMBER_NAME,CITY,DATE_REGISTER,DATE_EXPIRE,MEMBERSHIP_STATUS) values ('LM008','Nikhil','Bangalore',to_date('09-03-20','DD-MM-RR'),to_date('03-06-20','DD-MM-RR'),'Permanent');

Insert into LMS_MEMBERS (MEMBER_ID,MEMBER_NAME,CITY,DATE_REGISTER,DATE_EXPIRE,MEMBERSHIP_STATUS) values ('LM009','Nikita','Delhi',to_date('12-12-12','DD-MM-RR'),to_date('12-12-21','DD-MM-RR'),'Temporary');

Insert into LMS_MEMBERS (MEMBER_ID,MEMBER_NAME,CITY,DATE_REGISTER,DATE_EXPIRE,MEMBERSHIP_STATUS) values ('LM010','Preity','Kerala',to_date('17-06-19','DD-MM-RR'),to_date('11-08-20','DD-MM-RR'),'Permanent');

Insert into LMS_MEMBERS (MEMBER_ID,MEMBER_NAME,CITY,DATE_REGISTER,DATE_EXPIRE,MEMBERSHIP_STATUS) values ('LM011','Priti','Punjab',to_date('19-08-19','DD-MM-RR'),to_date('23-12-23','DD-MM-RR'),'Permanent');

Insert into LMS_MEMBERS (MEMBER_ID,MEMBER_NAME,CITY,DATE_REGISTER,DATE_EXPIRE,MEMBERSHIP_STATUS) values ('LM012','Rasika','CHENNAI',to_date('12-06-18','DD-MM-RR'),to_date('26-10-20','DD-MM-RR'),'Temporary');

Insert into LMS_MEMBERS (MEMBER_ID,MEMBER_NAME,CITY,DATE_REGISTER,DATE_EXPIRE,MEMBERSHIP_STATUS) values ('LM013','Renuka','PUNE',to_date('02-08-20','DD-MM-RR'),to_date('03-06-20','DD-MM-RR'),'Temporary');

Insert into LMS_MEMBERS (MEMBER_ID,MEMBER_NAME,CITY,DATE_REGISTER,DATE_EXPIRE,MEMBERSHIP_STATUS) values ('LM014','Sandeep','CHENNAI',to_date('12-06-18','DD-MM-RR'),to_date('17-08-20','DD-MM-RR'),'Permanent');

Insert into LMS_MEMBERS (MEMBER_ID,MEMBER_NAME,CITY,DATE_REGISTER,DATE_EXPIRE,MEMBERSHIP_STATUS) values ('LM015','Saurabh','CHENNAI',to_date('12-06-18','DD-MM-RR'),to_date('12-05-20','DD-MM-RR'),'Temporary');

Insert into LMS_MEMBERS (MEMBER_ID,MEMBER_NAME,CITY,DATE_REGISTER,DATE_EXPIRE,MEMBERSHIP_STATUS) values ('LM016','Sayali','BANGALORE',to_date('12-06-18','DD-MM-RR'),to_date('06-11-20','DD-MM-RR'),'Temporary');

Insert into LMS_MEMBERS (MEMBER_ID,MEMBER_NAME,CITY,DATE_REGISTER,DATE_EXPIRE,MEMBERSHIP_STATUS) values ('LM017','Shruti','CHENNAI',to_date('12-06-18','DD-MM-RR'),to_date('26-10-20','DD-MM-RR'),'Permanent');

Insert into LMS_MEMBERS (MEMBER_ID,MEMBER_NAME,CITY,DATE_REGISTER,DATE_EXPIRE,MEMBERSHIP_STATUS) values ('LM018','Smita','Pune',to_date('19-09-19','DD-MM-RR'),to_date('19-10-20','DD-MM-RR'),'Permanent');

Insert into LMS_MEMBERS (MEMBER_ID,MEMBER_NAME,CITY,DATE_REGISTER,DATE_EXPIRE,MEMBERSHIP_STATUS) values ('LM019','Snehal','Bangalore',to_date('09-03-20','DD-MM-RR'),to_date('03-06-20','DD-MM-RR'),'Permanent');

Insert into LMS_MEMBERS (MEMBER_ID,MEMBER_NAME,CITY,DATE_REGISTER,DATE_EXPIRE,MEMBERSHIP_STATUS) values ('LM020','Supriya','Delhi',to_date('12-12-12','DD-MM-RR'),to_date('12-12-21','DD-MM-RR'),'Temporary');

Insert into LMS_MEMBERS (MEMBER_ID,MEMBER_NAME,CITY,DATE_REGISTER,DATE_EXPIRE,MEMBERSHIP_STATUS) values ('LM021','Writankar','Kerala',to_date('17-06-19','DD-MM-RR'),to_date('17-06-20','DD-MM-RR'),'Permanent');

Insert into LMS_MEMBERS (MEMBER_ID,MEMBER_NAME,CITY,DATE_REGISTER,DATE_EXPIRE,MEMBERSHIP_STATUS) values ('LM022','Amit','Punjab',to_date('19-08-19','DD-MM-RR'),to_date('23-12-23','DD-MM-RR'),'Permanent');

Insert into LMS_MEMBERS (MEMBER_ID,MEMBER_NAME,CITY,DATE_REGISTER,DATE_EXPIRE,MEMBERSHIP_STATUS) values ('LM023','Ritesh','Bangalore',to_date('12-06-18','DD-MM-RR'),to_date('17-08-20','DD-MM-RR'),'Permanent');

Insert into LMS_MEMBERS (MEMBER_ID,MEMBER_NAME,CITY,DATE_REGISTER,DATE_EXPIRE,MEMBERSHIP_STATUS) values ('LM024','Gaurav','Delhi',to_date('12-06-18','DD-MM-RR'),to_date('12-05-20','DD-MM-RR'),'Temporary');

Insert into LMS_MEMBERS (MEMBER_ID,MEMBER_NAME,CITY,DATE_REGISTER,DATE_EXPIRE,MEMBERSHIP_STATUS) values ('LM025','Sagar','Kerala',to_date('12-06-18','DD-MM-RR'),to_date('06-11-20','DD-MM-RR'),'Temporary');

CREATE TABLE LMS_SUPPLIERS_DETAILS   
(  
SUPPLIER_ID VARCHAR2(3 BYTE),   
SUPPLIER_NAME VARCHAR2(30 BYTE) NOT NULL ,   
ADDRESS VARCHAR2(50 BYTE),   
CONTACT NUMBER(10,0) NOT NULL ,   
EMAIL VARCHAR2(15 BYTE) NOT NULL ,   
CONSTRAINT PK_SP_ID PRIMARY KEY (SUPPLIER_ID)  
);

Insert into LMS_SUPPLIERS_DETAILS (SUPPLIER_ID,SUPPLIER_NAME,ADDRESS,CONTACT,EMAIL) values ('S01','SINGAPORE SHOPPEE','CHENNAI',9894123555,'sing@gmail.com');

Insert into LMS_SUPPLIERS_DETAILS (SUPPLIER_ID,SUPPLIER_NAME,ADDRESS,CONTACT,EMAIL) values ('S02','JK Stores','MUMBAI',9940123450,'jks@yahoo.com');

Insert into LMS_SUPPLIERS_DETAILS (SUPPLIER_ID,SUPPLIER_NAME,ADDRESS,CONTACT,EMAIL) values ('S03','ROSE BOOK STORE','TRIVANDRUM',9444411222,'rose@gmail.com');

Insert into LMS_SUPPLIERS_DETAILS (SUPPLIER_ID,SUPPLIER_NAME,ADDRESS,CONTACT,EMAIL) values ('S04','KAVARI STORE','DELHI',8630001452,'kavi@redif.com');

Insert into LMS_SUPPLIERS_DETAILS (SUPPLIER_ID,SUPPLIER_NAME,ADDRESS,CONTACT,EMAIL) values ('S05','EINSTEN BOOK GALLARY','US',9542000001,'eingal@aol.com');

Insert into LMS_SUPPLIERS_DETAILS (SUPPLIER_ID,SUPPLIER_NAME,ADDRESS,CONTACT,EMAIL) values ('S06','AKBAR STORE','MUMBAI',7855623100,'akbakst@aol.com');

Insert into LMS_SUPPLIERS_DETAILS (SUPPLIER_ID,SUPPLIER_NAME,ADDRESS,CONTACT,EMAIL) values ('S07','GUPTA STORE','CHENNAI',9899023555,'rom@gmail.com');

Insert into LMS_SUPPLIERS_DETAILS (SUPPLIER_ID,SUPPLIER_NAME,ADDRESS,CONTACT,EMAIL) values ('S08','D MART','MUMBAI',9940123450,'dance@gmail.com');

Insert into LMS_SUPPLIERS_DETAILS (SUPPLIER_ID,SUPPLIER_NAME,ADDRESS,CONTACT,EMAIL) values ('S09','BIG BAZAAR','TRIVANDRUM',9445511222,'rock@gmail.com');

Insert into LMS_SUPPLIERS_DETAILS (SUPPLIER_ID,SUPPLIER_NAME,ADDRESS,CONTACT,EMAIL) values ('S10','JIO MART','DELHI',8644001452,'free@rediff.com');

Insert into LMS_SUPPLIERS_DETAILS (SUPPLIER_ID,SUPPLIER_NAME,ADDRESS,CONTACT,EMAIL) values ('S11','GODREJ FARM','US',9542440001,'champ@yahoo.com');

Insert into LMS_SUPPLIERS_DETAILS (SUPPLIER_ID,SUPPLIER_NAME,ADDRESS,CONTACT,EMAIL) values ('S12','ZOMATO','MUMBAI',7855623440,'money@gmail.com');

CREATE TABLE LMS_BOOK_DETAILS   
(  
BOOK_CODE VARCHAR2(10 BYTE),   
BOOK_TITLE VARCHAR2(100 BYTE) NOT NULL ,   
CATEGORY VARCHAR2(15 BYTE) NOT NULL ,   
AUTHOR VARCHAR2(30 BYTE) NOT NULL ,   
PUBLICATION VARCHAR2(30 BYTE),   
PUBLISH_DATE DATE,   
BOOK_EDITION NUMBER,   
PRICE NUMBER(8,2) NOT NULL ,   
RACK_NUM VARCHAR2(3 BYTE),   
DATE_ARRIVAL DATE,   
SUPPLIER_ID VARCHAR2(3 BYTE),   
CONSTRAINT PK_BOOK_CODE PRIMARY KEY (BOOK_CODE),   
CONSTRAINT FK_SP_ID FOREIGN KEY (SUPPLIER_ID)  REFERENCES LMS_SUPPLIERS_DETAILS (SUPPLIER_ID)   
) ;

Insert into LMS_BOOK_DETAILS (BOOK_CODE,BOOK_TITLE,CATEGORY,AUTHOR,PUBLICATION,PUBLISH_DATE,BOOK_EDITION,PRICE,RACK_NUM,DATE_ARRIVAL,SUPPLIER_ID) values ('BL000001','Java How To Do Program','JAVA','Paul J. Deitel','Prentice Hall',to_date('10-12-99','DD-MM-RR'),6,600,'A1',to_date('10-05-11','DD-MM-RR'),'S01');

Insert into LMS_BOOK_DETAILS (BOOK_CODE,BOOK_TITLE,CATEGORY,AUTHOR,PUBLICATION,PUBLISH_DATE,BOOK_EDITION,PRICE,RACK_NUM,DATE_ARRIVAL,SUPPLIER_ID) values ('BL000002','Java: The Complete Reference ','JAVA','Herbert Schildt','Tata Mcgraw Hill ',to_date('10-10-11','DD-MM-RR'),5,750,'A1',to_date('10-05-11','DD-MM-RR'),'S03');

Insert into LMS_BOOK_DETAILS (BOOK_CODE,BOOK_TITLE,CATEGORY,AUTHOR,PUBLICATION,PUBLISH_DATE,BOOK_EDITION,PRICE,RACK_NUM,DATE_ARRIVAL,SUPPLIER_ID) values ('BL000003','Java How To Do Program','JAVA','Paul J. Deitel','Prentice Hall',to_date('10-05-99','DD-MM-RR'),6,600,'A1',to_date('10-05-12','DD-MM-RR'),'S01');

Insert into LMS_BOOK_DETAILS (BOOK_CODE,BOOK_TITLE,CATEGORY,AUTHOR,PUBLICATION,PUBLISH_DATE,BOOK_EDITION,PRICE,RACK_NUM,DATE_ARRIVAL,SUPPLIER_ID) values ('BL000004','Java: The Complete Reference ','JAVA','Herbert Schildt','Tata Mcgraw Hill ',to_date('10-10-11','DD-MM-RR'),5,750,'A1',to_date('11-05-12','DD-MM-RR'),'S01');

Insert into LMS_BOOK_DETAILS (BOOK_CODE,BOOK_TITLE,CATEGORY,AUTHOR,PUBLICATION,PUBLISH_DATE,BOOK_EDITION,PRICE,RACK_NUM,DATE_ARRIVAL,SUPPLIER_ID) values ('BL000005','Java How To Do Program','JAVA','Paul J. Deitel','Prentice Hall',to_date('10-12-99','DD-MM-RR'),6,600,'A1',to_date('11-05-12','DD-MM-RR'),'S01');

Insert into LMS_BOOK_DETAILS (BOOK_CODE,BOOK_TITLE,CATEGORY,AUTHOR,PUBLICATION,PUBLISH_DATE,BOOK_EDITION,PRICE,RACK_NUM,DATE_ARRIVAL,SUPPLIER_ID) values ('BL000006','Java: The Complete Reference ','JAVA','Herbert Schildt','Tata Mcgraw Hill ',to_date('10-10-11','DD-MM-RR'),5,750,'A1',to_date('12-05-12','DD-MM-RR'),'S03');

Insert into LMS_BOOK_DETAILS (BOOK_CODE,BOOK_TITLE,CATEGORY,AUTHOR,PUBLICATION,PUBLISH_DATE,BOOK_EDITION,PRICE,RACK_NUM,DATE_ARRIVAL,SUPPLIER_ID) values ('BL000007','Let Us C','C','Yashavant Kanetkar ','BPB Publications',to_date('11-12-10','DD-MM-RR'),9,500,'A3',to_date('03-11-10','DD-MM-RR'),'S03');

Insert into LMS_BOOK_DETAILS (BOOK_CODE,BOOK_TITLE,CATEGORY,AUTHOR,PUBLICATION,PUBLISH_DATE,BOOK_EDITION,PRICE,RACK_NUM,DATE_ARRIVAL,SUPPLIER_ID) values ('BL000008','Python Cookbook: Recipes for Mastering Python 3','Python','Brian K. Jones','O''Reilly Media',to_date('10-05-13','DD-MM-RR'),3,350,null,to_date('10-06-19','DD-MM-RR'),'S02');

Insert into LMS_BOOK_DETAILS (BOOK_CODE,BOOK_TITLE,CATEGORY,AUTHOR,PUBLICATION,PUBLISH_DATE,BOOK_EDITION,PRICE,RACK_NUM,DATE_ARRIVAL,SUPPLIER_ID) values ('BL000009','Learn Python in 1 Day','Python','Krishna Rungta','Guru99',to_date('19-07-16','DD-MM-RR'),1,307,'A3',to_date('10-06-19','DD-MM-RR'),'S02');

Insert into LMS_BOOK_DETAILS (BOOK_CODE,BOOK_TITLE,CATEGORY,AUTHOR,PUBLICATION,PUBLISH_DATE,BOOK_EDITION,PRICE,RACK_NUM,DATE_ARRIVAL,SUPPLIER_ID) values ('BL000010','Python Programming:An Introduction to Computer Science','Python','John M Zelle','Ingram short title',to_date('01-01-16','DD-MM-RR'),3,1200,null,null,'S03');

Insert into LMS_BOOK_DETAILS (BOOK_CODE,BOOK_TITLE,CATEGORY,AUTHOR,PUBLICATION,PUBLISH_DATE,BOOK_EDITION,PRICE,RACK_NUM,DATE_ARRIVAL,SUPPLIER_ID) values ('BL000011','C# 8.0 and .NET Core 3.0 – Modern Cross-Platform Development','C#','Mark J. Price','Packt Publishing',to_date('31-10-19','DD-MM-RR'),4,410,'A3',to_date('10-06-19','DD-MM-RR'),null);

Insert into LMS_BOOK_DETAILS (BOOK_CODE,BOOK_TITLE,CATEGORY,AUTHOR,PUBLICATION,PUBLISH_DATE,BOOK_EDITION,PRICE,RACK_NUM,DATE_ARRIVAL,SUPPLIER_ID) values ('BL000012','C# 8.0 Pocket Reference: Instant Help for C# 8.0 Programmers','C#','Joseph Albahari ','O''Reilly Media',to_date('10-12-19','DD-MM-RR'),1,890,null,null,'S03');

Insert into LMS_BOOK_DETAILS (BOOK_CODE,BOOK_TITLE,CATEGORY,AUTHOR,PUBLICATION,PUBLISH_DATE,BOOK_EDITION,PRICE,RACK_NUM,DATE_ARRIVAL,SUPPLIER_ID) values ('BL000013','Agile Principles, Patterns, and Practices in C#','C#','Robert C. Martin','Pearson',to_date('20-06-06','DD-MM-RR'),5,630,null,to_date('12-09-09','DD-MM-RR'),null);

Insert into LMS_BOOK_DETAILS (BOOK_CODE,BOOK_TITLE,CATEGORY,AUTHOR,PUBLICATION,PUBLISH_DATE,BOOK_EDITION,PRICE,RACK_NUM,DATE_ARRIVAL,SUPPLIER_ID) values ('BL000014','Clean Code: A Handbook of Agile Software Craftsmanship','FUNDAMENTALS','Robert C. Martin','Prentice Hall',to_date('20-05-18','DD-MM-RR'),1,520,'A3',to_date('01-06-19','DD-MM-RR'),'S06');

Insert into LMS_BOOK_DETAILS (BOOK_CODE,BOOK_TITLE,CATEGORY,AUTHOR,PUBLICATION,PUBLISH_DATE,BOOK_EDITION,PRICE,RACK_NUM,DATE_ARRIVAL,SUPPLIER_ID) values ('BL000015','Introduction to Algorithms','ALGORITHMS','Thomas H. Cormen','The MIT Press',to_date('02-06-19','DD-MM-RR'),3,1220,'A4',to_date('02-08-19','DD-MM-RR'),'S01');

Insert into LMS_BOOK_DETAILS (BOOK_CODE,BOOK_TITLE,CATEGORY,AUTHOR,PUBLICATION,PUBLISH_DATE,BOOK_EDITION,PRICE,RACK_NUM,DATE_ARRIVAL,SUPPLIER_ID) values ('BL000016','Structure and Interpretation of Computer Programs (SICP)','FUNDAMENTALS','Harold Abelson','The MIT Press',to_date('02-08-11','DD-MM-RR'),4,1880,'A5',to_date('10-09-14','DD-MM-RR'),'S02');

Insert into LMS_BOOK_DETAILS (BOOK_CODE,BOOK_TITLE,CATEGORY,AUTHOR,PUBLICATION,PUBLISH_DATE,BOOK_EDITION,PRICE,RACK_NUM,DATE_ARRIVAL,SUPPLIER_ID) values ('BL000017','The Clean Coder: A Code of Conduct for Professional Programmers','FUNDAMENTALS','Robert C. Martin','Prentice Hall',to_date('02-06-15','DD-MM-RR'),5,3000,'A6',to_date('10-02-19','DD-MM-RR'),'S06');

Insert into LMS_BOOK_DETAILS (BOOK_CODE,BOOK_TITLE,CATEGORY,AUTHOR,PUBLICATION,PUBLISH_DATE,BOOK_EDITION,PRICE,RACK_NUM,DATE_ARRIVAL,SUPPLIER_ID) values ('BL000018','Code Complete: A Practical Handbook of Software Construction','FUNDAMENTALS','Steve McConnell','Microsoft Press',to_date('05-04-11','DD-MM-RR'),3,4500,'A5',to_date('03-12-11','DD-MM-RR'),'S03');

Insert into LMS_BOOK_DETAILS (BOOK_CODE,BOOK_TITLE,CATEGORY,AUTHOR,PUBLICATION,PUBLISH_DATE,BOOK_EDITION,PRICE,RACK_NUM,DATE_ARRIVAL,SUPPLIER_ID) values ('BL000019','Design Patterns: Elements of Reusable Object-Oriented Software','FUNDAMENTALS','Erich Gamma','Addison-Wesley Professional',to_date('02-01-01','DD-MM-RR'),1,450,'A8',to_date('06-06-11','DD-MM-RR'),'S03');

Insert into LMS_BOOK_DETAILS (BOOK_CODE,BOOK_TITLE,CATEGORY,AUTHOR,PUBLICATION,PUBLISH_DATE,BOOK_EDITION,PRICE,RACK_NUM,DATE_ARRIVAL,SUPPLIER_ID) values ('BL000020','The Pragmatic Programmer','FUNDAMENTALS','David Thomas','Addison-Wesley Professional',to_date('06-06-06','DD-MM-RR'),3,750,'A9',to_date('12-12-11','DD-MM-RR'),'S03');

Insert into LMS_BOOK_DETAILS (BOOK_CODE,BOOK_TITLE,CATEGORY,AUTHOR,PUBLICATION,PUBLISH_DATE,BOOK_EDITION,PRICE,RACK_NUM,DATE_ARRIVAL,SUPPLIER_ID) values ('BL000021','Head First Design Patterns: A Brain-Friendly Guide','JAVA','Eric Freeman','O''Reilly Media',to_date('05-05-05','DD-MM-RR'),1,860,'A2',to_date('05-05-06','DD-MM-RR'),'S01');

Insert into LMS_BOOK_DETAILS (BOOK_CODE,BOOK_TITLE,CATEGORY,AUTHOR,PUBLICATION,PUBLISH_DATE,BOOK_EDITION,PRICE,RACK_NUM,DATE_ARRIVAL,SUPPLIER_ID) values ('BL000023','Algorithms Unlocked','ALGORITHMS','Thomas H. Cormen','The MIT Press',to_date('02-12-12','DD-MM-RR'),2,860,'A8',to_date('02-12-13','DD-MM-RR'),'S01');

Insert into LMS_BOOK_DETAILS (BOOK_CODE,BOOK_TITLE,CATEGORY,AUTHOR,PUBLICATION,PUBLISH_DATE,BOOK_EDITION,PRICE,RACK_NUM,DATE_ARRIVAL,SUPPLIER_ID) values ('BL000024','The Algorithm Design Manual','ALGORITHMS',' Steven S. Skiena','Addison-Wesley Professional',to_date('02-12-12','DD-MM-RR'),6,456,'A6',to_date('02-12-13','DD-MM-RR'),null);

Insert into LMS_BOOK_DETAILS (BOOK_CODE,BOOK_TITLE,CATEGORY,AUTHOR,PUBLICATION,PUBLISH_DATE,BOOK_EDITION,PRICE,RACK_NUM,DATE_ARRIVAL,SUPPLIER_ID) values ('BL000025','Algorithms','ALGORITHMS','Robert Sedgewick','The MIT Press',to_date('06-04-11','DD-MM-RR'),2,630,'A3',to_date('02-12-13','DD-MM-RR'),'S02');

Insert into LMS_BOOK_DETAILS (BOOK_CODE,BOOK_TITLE,CATEGORY,AUTHOR,PUBLICATION,PUBLISH_DATE,BOOK_EDITION,PRICE,RACK_NUM,DATE_ARRIVAL,SUPPLIER_ID) values ('BL000026','Advanced Data Structures','DATA STRUCTURES','Peter Brass','The MIT Press',to_date('08-08-08','DD-MM-RR'),6,780,'A3',to_date('09-09-09','DD-MM-RR'),'S05');

CREATE TABLE LMS_FINE_DETAILS  
(  
FINE_RANGE VARCHAR2(3 BYTE),   
FINE_AMOUNT NUMBER(10,2) NOT NULL ,   
MAX_DAYS_DELAYED NUMBER,   
CONSTRAINT PK_FR PRIMARY KEY (FINE_RANGE)  
);

Insert into LMS_FINE_DETAILS (FINE_RANGE,FINE_AMOUNT,MAX_DAYS_DELAYED) values ('R1',20,5);

Insert into LMS_FINE_DETAILS (FINE_RANGE,FINE_AMOUNT,MAX_DAYS_DELAYED) values ('R2',50,10);

Insert into LMS_FINE_DETAILS (FINE_RANGE,FINE_AMOUNT,MAX_DAYS_DELAYED) values ('R3',75,15);

Insert into LMS_FINE_DETAILS (FINE_RANGE,FINE_AMOUNT,MAX_DAYS_DELAYED) values ('R4',100,20);

Insert into LMS_FINE_DETAILS (FINE_RANGE,FINE_AMOUNT,MAX_DAYS_DELAYED) values ('R5',150,25);

Insert into LMS_FINE_DETAILS (FINE_RANGE,FINE_AMOUNT,MAX_DAYS_DELAYED) values ('R6',200,90);

CREATE TABLE LMS_BOOK_ISSUE  
(	 
BOOK_ISSUE_NO NUMBER,  
MEMBER_ID VARCHAR2(10 BYTE) NOT NULL ,  
BOOK_CODE VARCHAR2(10 BYTE) NOT NULL ,  
DATE_ISSUE DATE NOT NULL ,  
DATE_RETURN DATE NOT NULL ,  
DATE_RETURNED DATE ,  
FINE_RANGE VARCHAR2(3 BYTE),  
CONSTRAINT PK_BOOK_ISSUE_NO PRIMARY KEY (BOOK_ISSUE_NO),  
CONSTRAINT FK_MEM_ID FOREIGN KEY (MEMBER_ID)  REFERENCES LMS_MEMBERS (MEMBER_ID) ,  
CONSTRAINT FK_BOOKDETAIL FOREIGN KEY (BOOK_CODE)  REFERENCES LMS_BOOK_DETAILS (BOOK_CODE) ,  
CONSTRAINT FK_FINEDETAIL FOREIGN KEY (FINE_RANGE)  REFERENCES LMS_FINE_DETAILS (FINE_RANGE) , 
CONSTRAINT CHK_DATE_ISSUE CHECK ( DATE_ISSUE < DATE_RETURN  )  
);

Insert into LMS_BOOK_ISSUE (BOOK_ISSUE_NO,MEMBER_ID,BOOK_CODE,DATE_ISSUE,DATE_RETURN,DATE_RETURNED,FINE_RANGE) values (1,'LM001','BL000001',to_date('01-05-12','DD-MM-RR'),to_date('16-05-12','DD-MM-RR'),to_date('16-05-12','DD-MM-RR'),null);

Insert into LMS_BOOK_ISSUE (BOOK_ISSUE_NO,MEMBER_ID,BOOK_CODE,DATE_ISSUE,DATE_RETURN,DATE_RETURNED,FINE_RANGE) values (2,'LM002','BL000002',to_date('01-05-12','DD-MM-RR'),to_date('06-05-12','DD-MM-RR'),to_date('16-05-12','DD-MM-RR'),'R2');

Insert into LMS_BOOK_ISSUE (BOOK_ISSUE_NO,MEMBER_ID,BOOK_CODE,DATE_ISSUE,DATE_RETURN,DATE_RETURNED,FINE_RANGE) values (3,'LM003','BL000007',to_date('01-04-12','DD-MM-RR'),to_date('16-04-12','DD-MM-RR'),to_date('20-04-12','DD-MM-RR'),'R1');

Insert into LMS_BOOK_ISSUE (BOOK_ISSUE_NO,MEMBER_ID,BOOK_CODE,DATE_ISSUE,DATE_RETURN,DATE_RETURNED,FINE_RANGE) values (4,'LM004','BL000005',to_date('01-04-12','DD-MM-RR'),to_date('16-04-12','DD-MM-RR'),to_date('20-04-12','DD-MM-RR'),'R1');

Insert into LMS_BOOK_ISSUE (BOOK_ISSUE_NO,MEMBER_ID,BOOK_CODE,DATE_ISSUE,DATE_RETURN,DATE_RETURNED,FINE_RANGE) values (5,'LM005','BL000005',to_date('20-04-12','DD-MM-RR'),to_date('05-05-12','DD-MM-RR'),to_date('05-05-12','DD-MM-RR'),null);

Insert into LMS_BOOK_ISSUE (BOOK_ISSUE_NO,MEMBER_ID,BOOK_CODE,DATE_ISSUE,DATE_RETURN,DATE_RETURNED,FINE_RANGE) values (6,'LM003','BL000007',to_date('22-04-12','DD-MM-RR'),to_date('07-05-12','DD-MM-RR'),to_date('25-05-12','DD-MM-RR'),'R4');

Insert into LMS_BOOK_ISSUE (BOOK_ISSUE_NO,MEMBER_ID,BOOK_CODE,DATE_ISSUE,DATE_RETURN,DATE_RETURNED,FINE_RANGE) values (7,'LM001','BL000002',to_date('01-05-13','DD-MM-RR'),to_date('16-05-13','DD-MM-RR'),to_date('16-05-13','DD-MM-RR'),null);

Insert into LMS_BOOK_ISSUE (BOOK_ISSUE_NO,MEMBER_ID,BOOK_CODE,DATE_ISSUE,DATE_RETURN,DATE_RETURNED,FINE_RANGE) values (8,'LM002','BL000001',to_date('01-05-13','DD-MM-RR'),to_date('06-05-13','DD-MM-RR'),to_date('16-05-13','DD-MM-RR'),'R2');

Insert into LMS_BOOK_ISSUE (BOOK_ISSUE_NO,MEMBER_ID,BOOK_CODE,DATE_ISSUE,DATE_RETURN,DATE_RETURNED,FINE_RANGE) values (9,'LM003','BL000005',to_date('01-04-20','DD-MM-RR'),to_date('16-04-20','DD-MM-RR'),to_date('20-04-20','DD-MM-RR'),'R1');

Insert into LMS_BOOK_ISSUE (BOOK_ISSUE_NO,MEMBER_ID,BOOK_CODE,DATE_ISSUE,DATE_RETURN,DATE_RETURNED,FINE_RANGE) values (10,'LM004','BL000007',to_date('01-04-20','DD-MM-RR'),to_date('16-04-20','DD-MM-RR'),to_date('20-04-20','DD-MM-RR'),'R1');

Insert into LMS_BOOK_ISSUE (BOOK_ISSUE_NO,MEMBER_ID,BOOK_CODE,DATE_ISSUE,DATE_RETURN,DATE_RETURNED,FINE_RANGE) values (11,'LM005','BL000002',to_date('20-04-13','DD-MM-RR'),to_date('05-05-13','DD-MM-RR'),to_date('05-05-13','DD-MM-RR'),null);

Insert into LMS_BOOK_ISSUE (BOOK_ISSUE_NO,MEMBER_ID,BOOK_CODE,DATE_ISSUE,DATE_RETURN,DATE_RETURNED,FINE_RANGE) values (12,'LM003','BL000001',to_date('22-04-13','DD-MM-RR'),to_date('07-05-13','DD-MM-RR'),to_date('25-05-13','DD-MM-RR'),'R4');

Insert into LMS_BOOK_ISSUE (BOOK_ISSUE_NO,MEMBER_ID,BOOK_CODE,DATE_ISSUE,DATE_RETURN,DATE_RETURNED,FINE_RANGE) values (13,'LM001','BL000001',to_date('16-05-12','DD-MM-RR'),to_date('31-05-12','DD-MM-RR'),to_date('31-05-12','DD-MM-RR'),null);

Insert into LMS_BOOK_ISSUE (BOOK_ISSUE_NO,MEMBER_ID,BOOK_CODE,DATE_ISSUE,DATE_RETURN,DATE_RETURNED,FINE_RANGE) values (14,'LM002','BL000002',to_date('06-05-12','DD-MM-RR'),to_date('21-05-12','DD-MM-RR'),to_date('31-05-12','DD-MM-RR'),'R2');

Insert into LMS_BOOK_ISSUE (BOOK_ISSUE_NO,MEMBER_ID,BOOK_CODE,DATE_ISSUE,DATE_RETURN,DATE_RETURNED,FINE_RANGE) values (15,'LM003','BL000007',to_date('16-04-12','DD-MM-RR'),to_date('01-05-12','DD-MM-RR'),to_date('06-05-12','DD-MM-RR'),'R1');

Insert into LMS_BOOK_ISSUE (BOOK_ISSUE_NO,MEMBER_ID,BOOK_CODE,DATE_ISSUE,DATE_RETURN,DATE_RETURNED,FINE_RANGE) values (16,'LM004','BL000005',to_date('16-04-12','DD-MM-RR'),to_date('01-05-12','DD-MM-RR'),to_date('06-05-12','DD-MM-RR'),'R1');

Insert into LMS_BOOK_ISSUE (BOOK_ISSUE_NO,MEMBER_ID,BOOK_CODE,DATE_ISSUE,DATE_RETURN,DATE_RETURNED,FINE_RANGE) values (17,'LM005','BL000005',to_date('05-05-12','DD-MM-RR'),to_date('20-05-12','DD-MM-RR'),to_date('20-05-12','DD-MM-RR'),null);

Insert into LMS_BOOK_ISSUE (BOOK_ISSUE_NO,MEMBER_ID,BOOK_CODE,DATE_ISSUE,DATE_RETURN,DATE_RETURNED,FINE_RANGE) values (18,'LM003','BL000007',to_date('07-05-12','DD-MM-RR'),to_date('22-05-12','DD-MM-RR'),to_date('11-06-12','DD-MM-RR'),'R4');

Insert into LMS_BOOK_ISSUE (BOOK_ISSUE_NO,MEMBER_ID,BOOK_CODE,DATE_ISSUE,DATE_RETURN,DATE_RETURNED,FINE_RANGE) values (19,'LM001','BL000002',to_date('16-05-13','DD-MM-RR'),to_date('31-05-13','DD-MM-RR'),to_date('31-05-13','DD-MM-RR'),null);

Insert into LMS_BOOK_ISSUE (BOOK_ISSUE_NO,MEMBER_ID,BOOK_CODE,DATE_ISSUE,DATE_RETURN,DATE_RETURNED,FINE_RANGE) values (20,'LM002','BL000001',to_date('06-05-13','DD-MM-RR'),to_date('21-05-13','DD-MM-RR'),to_date('31-05-13','DD-MM-RR'),'R2');

Insert into LMS_BOOK_ISSUE (BOOK_ISSUE_NO,MEMBER_ID,BOOK_CODE,DATE_ISSUE,DATE_RETURN,DATE_RETURNED,FINE_RANGE) values (21,'LM003','BL000005',to_date('16-04-20','DD-MM-RR'),to_date('01-05-20','DD-MM-RR'),to_date('06-05-20','DD-MM-RR'),'R1');

Insert into LMS_BOOK_ISSUE (BOOK_ISSUE_NO,MEMBER_ID,BOOK_CODE,DATE_ISSUE,DATE_RETURN,DATE_RETURNED,FINE_RANGE) values (22,'LM004','BL000007',to_date('16-04-20','DD-MM-RR'),to_date('01-05-20','DD-MM-RR'),to_date('06-05-20','DD-MM-RR'),'R1');

Insert into LMS_BOOK_ISSUE (BOOK_ISSUE_NO,MEMBER_ID,BOOK_CODE,DATE_ISSUE,DATE_RETURN,DATE_RETURNED,FINE_RANGE) values (23,'LM005','BL000002',to_date('05-05-13','DD-MM-RR'),to_date('20-05-13','DD-MM-RR'),to_date('20-05-13','DD-MM-RR'),null);

Insert into LMS_BOOK_ISSUE (BOOK_ISSUE_NO,MEMBER_ID,BOOK_CODE,DATE_ISSUE,DATE_RETURN,DATE_RETURNED,FINE_RANGE) values (24,'LM003','BL000001',to_date('07-05-13','DD-MM-RR'),to_date('22-05-13','DD-MM-RR'),to_date('11-06-13','DD-MM-RR'),'R4');


-- Problem # 1: Write a query to display the member id, member name, city and membership status who are all having life time membership. Hint: Life time membership status is “Permanent”.

SELECT member_id, member_name, city, membership_status FROM lms_members WHERE upper(membership_status) LIKE upper('Permanent')


-- Problem # 2: Write a query to display the member_name,book code, publication, price and supplier name of the book which has been issued to a member.

SELECT lms_members.member_name, lms_book_issue.book_code, lms_book_details.publication, lms_book_details.price, lms_suppliers_details.supplier_name
FROM lms_members
    INNER JOIN lms_book_issue
        ON (lms_members.member_id = lms_book_issue.member_id)
    INNER JOIN lms_book_details
        ON (lms_book_issue.book_code = lms_book_details.book_code)
    INNER JOIN lms_suppliers_details
        ON (lms_book_details.supplier_id = lms_suppliers_details.supplier_id)
    GROUP BY lms_members.member_name, lms_book_issue.book_code, lms_book_details.publication, lms_book_details.price, lms_suppliers_details.supplier_name
    ORDER BY lms_members.member_name


-- Problem # 3: Write a query to display the member id, member name who have taken the book with book code 'BL000002'.

SELECT member_id, member_name
FROM lms_members
    WHERE member_id 
        IN (
            SELECT member_id
            FROM lms_book_issue
            WHERE book_code = 'BL000002'
        )


--Problem # 4: Write a query to display the book code, book title and author of the books whose author name begins with 'P'.

SELECT book_code, book_title, author
FROM lms_book_details
WHERE author LIKE 'P%'


-- Problem # 5: Write a query to display the total number of Java books available in library with alias column name ‘NO_OF_BOOKS’.

SELECT category, COUNT(*) No_of_books
FROM lms_book_details
WHERE upper(category) = upper('Java')
GROUP BY category


-- Problem # 6: Write a query to list the category and number of books in each category with alias name ‘NO_OF_BOOKS’.

SELECT category, COUNT(category) No_of_books
FROM lms_book_details
GROUP BY category
ORDER BY category


-- Problem # 6-1: Write a query to list the category and number of books in each category with alias name ‘NO_OF_BOOKS’ such that the number of books are greater than 2 .

SELECT category, COUNT(category) No_of_books
FROM lms_book_details
GROUP BY category
HAVING COUNT(category) > 2


-- Problem # 7: Write a query to display the number of books published by "Prentice Hall” with the alias name “NO_OF_BOOKS”.

SELECT publication, COUNT(publication) No_of_books
FROM lms_book_details
GROUP BY publication
HAVING publication LIKE 'Prentice Hall'


-- Problem # 8: Write a query to display the book code, book title of the books which are issued on the date "1st April 2012".

SELECT lms_book_details.book_code, lms_book_details.book_title, lms_book_issue.date_issue
FROM lms_book_details
INNER JOIN lms_book_issue
ON (lms_book_details.book_code = lms_book_issue.book_code)
WHERE date_issue = to_date('01-04-2012', 'dd-mm-yyyy')


-- Problem # 9: Write a query to display the member id, member name, date of registration and expiry date of the members whose membership expiry date is before APR 2013.

SELECT member_id, member_name, date_register, date_expire
FROM lms_members
WHERE date_expire < to_date('01-04-2013', 'dd-mm-yyyy')


-- Problem # 10: write a query to display the member id, member name, date of registration, membership status of the members who registered before "March 2012" and membership status is "Temporary"

SELECT member_id, member_name, date_register, date_expire, membership_status
FROM lms_members
WHERE date_register < to_date('01-03-2012', 'dd-mm-yyyy') 
AND membership_status = 'Temporary'


-- Problem #11: Write a query to display the member id, member name who’s City is CHENNAI or DELHI. Hint:case insenstive search and display the member name in title/sentence case with alias name 'Name'.

SELECT member_id, member_name, city
FROM lms_members
WHERE initcap(city) IN ('Chennai', 'Delhi')


-- Problem #12: Write a query to concatenate book title, author and display in the following format. Book_Title_is_written_by_Author Example: Let Us C_is_written_by_Yashavant Kanetkar Hint: display unique books. Use “BOOK_WRITTEN_BY” as alias name.

SELECT DISTINCT (book_title || '_is_written_by_' || author) book_written_by
FROM lms_book_details
