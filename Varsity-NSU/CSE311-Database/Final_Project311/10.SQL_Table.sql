
//SQL

Create Table Patient(
	 patient_id 		  int NOT NULL AUTO_INCREMENT, 
	admission_date		 date NOT NULL,
	 first_name			  varchar(20) NOT NULL, 
	middle_name			 varchar(20), 
	last_name			 varchar(20), 
	birth_date			 date,
	 mobile1			  varchar(20),
	 mobile2			  varchar(20),
	 present_streetnum	  varchar(20), 
	present_streetname	 varchar(20),
	 present_area		  varchar(20), 
	present_thana		 varchar(20), 
	present_district	 varchar(20), 
	permanent_streetnum	 varchar(20), 
	permanent_streetname varchar(20),
	 permanent_area		  varchar(20),
	 permanent_thana	  varchar(20), 
	permanent_district	 varchar(20),	 
	profession 			 varchar(20),
	 amount_deposited	  double NOT NULL, 
	choice 			 	 varchar(30) NOT NULL,
	PRIMARY KEY (patient_id)
);


Create Table Ward(
	 ward_id		int NOT NULL AUTO_INCREMENT,
	 name			varchar(20),
	bed_id         int,
	PRIMARY KEY (ward_id)
); 


Create Table Cabin(
	cabin_id      int NOT NULL AUTO_INCREMENT,
	name          varchar(20),
	bed_id        int,
	PRIMARY KEY (cabin_id)
);


Create Table Bed( 
	bed_id			int NOT NULL AUTO_INCREMENT,
	 type			 varchar(20),
	 rent			 double,
	 status			 varchar(20), 
	choice		    varchar(20),
	PRIMARY KEY (bed_id)
);


Create Table Nurse(
	 nurse_id		   	 int NOT NULL AUTO_INCREMENT, 
	first_name			varchar(20), 
	middle_name			varchar(20), 
	last_name			varchar(20), 
	birth_date			date, 
	appointment_date	date, 
	supervisor_id		int, 
	ward_id				int
);


Create Table Medicine(
 	 medicine_id		 int NOT NULL AUTO_INCREMENT, 
	supplier_id         int,
	supplier_name       varchar(30),
	date_of_supply      Date,
	name				varchar(20), 
	type				varchar(20),
	 unit_price			 double,
	 quantity			 int, 
	manufacture_date	date, 
	expiry_date			date
);


Create Table Prescription( 
	prescription_id    int NOT NULL AUTO_INCREMENT,
	patient_id		   int,
	 doctor_id			int,
	PRIMARY KEY(prescription_id)
);


Create Table Doctor(
	 doctor_id			 int, 
	first_name			varchar(20), 
	middle_name			varchar(20),	 
	last_name			varchar(20), 
	birth_date			date, 
	appointment_date	date,
	 specialist			 varchar(10),
	// ward_id			 int, 
	//cabin_id			int,
	registrar_id		int,
	//Membership1         varchar(30),
	//Membership2         varchar(30),
	//Membership3         varchar(30),
	//Membership4         varchar(30),
);


Create Table Membership(
	Membership_id int,
	membership_type varchar(40)
);


CREATE Table Patient_info(
	patient_id int NOT NULL,
	height double,
	weight double,
	symptom1 varchar(20),
	symptom2 varchar(20),
	symptom3 varchar(20),
	low_bp int,
	high_bp int,
	breakfastk1 varchar(20),
	breakfastk2 varchar(20),
	breakfastk3 varchar(20),
	lunch1 varchar(20),
	lunch2 varchar(20),
	lunch3 varchar(20),
	dinner1 varchar(20),
	dinner2 varchar(20),
	dinner3 varchar(20),
	hobby_game varchar(20),
	hobby_others varchar(20),
	disease varchar(20),
	doctor_id int NOT NULL,
	PRIMARY KEY (patient_id)
);


CREATE TABLE Test(
	test_id          int NOT NULL AUTO_INCREMENT,
	prescription_id  int,
	patient_id       int,
	doctor_id        int,
	test_name        varchar(30),
	test_no          int,
	PRIMARY KEY(test_id)
);


//For relationships
Create Table Admit(
	 patient_id 	int,
	 bed_id			int
);


Create Table Med_prescription(
	prescription_id int,
	 patient_id		 int, 
	doctor_id		int, 
	medicine_id		int,
	name_med		   varchar(20),
	 quantity			int,
	 times_a_day		int,
	morning            varchar(20),
	noon               varchar(20),
	evening            varchar(20),
	med_cost           double,
	PRIMARY KEY(prescription_id)
);





//For multi-values
Creat Table Doc_educational_qualification(
	 doctor_id 		int,
	 degree 		varchar(20), 
	institute	   varchar(20), 
	year1		   int, 
	cgpa		   double,
	position       int
);


Creat Table Doc_experience( 
	doctor_id		int, 
	job_title		varchar(20),
	 from1		   	 date, 
	to1			    date, 
	organization	varchar(20)
);


Creat Table Nurse_educational_qualification( 
	nurse_id 		int,
	 degree 		 varchar(20),
	 institute		 varchar(20), 
	year1		    int,
	 cgpa			 double
);


Creat Table Nurse_experience( 
	nurse_id		int, 
	job_title		varchar(20),
	 from1		 	 date, 
	to1			    date, 
	organization	varchar(20)
);


//
