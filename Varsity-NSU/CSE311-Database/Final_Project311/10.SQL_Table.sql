
SQL

Create Table Patient(
	 patient_id 		int, 
	admission_date		date,
	 first_name		varchar(20), 
	middle_name		varchar(20), 
	last_name		varchar(20), 
	birth_date		date,
	 mobile1		varchar(20),
	 mobile2		varchar(20),
	 present_streetnum	int, 
	present_streetname	varchar(20),
	 present_area		varchar(20), 
	present_thana		varchar(20), 
	present_district		varchar(20), 
	permanent_streetnum	int, 
	permanent_streetname varchar(20),
	 permanent_area	varchar(20),
	 permanent_thana	varchar(20), 
	permanent_district	varchar(20),	 
	profession 		varchar(20),
	 amount_deposited	double, 
	ward_id 		int
);


Create Table Ward(
	 ward_id		int,
	 name			varchar(20)
); 


Create Table Bed( 
	bed_id			int,
	 type			varchar(20),
	 rent			double,
	 status			varchar(20), 
	ward_id		int
);



Create Table Nurse(
	 nurse_id		int, 
	first_name		varchar(20), 
	middle_name		varchar(20), 
	last_name		varchar(20), 
	birth_date		date, 
	appointment_date	date, 
	supervisor_id		int, 
	ward_id		int
);


Create Table Medicine(
	 medicine_id		int, 
	name			varchar(20), 
	type			varchar(20),
	 unit_price		double,
	 quantity		int, 
	manufacture_date	date, 
	expiry_date		date
);


Create Table Prescription( 
	patient_id		int,
	 doctor_id		int,
	 name_med		varchar(20),
	 quantity		int,
	 times_a_day		int
);


Create Table Doctor(
	 doctor_id		int, 
	first_name		varchar(20), 
	middle_name		varchar(20),	 
	last_name		varchar(20), 
	birth_date		date, 
	appointment_date	date,
	 specialist		varchar(10),
	 ward_id		int, 
	registrar_id		int
);


Creat Table Patient_info(
	 patient_id		int, 
	height			double, 
	weight			double,
	 symptom1		varchar(20),
	 symptom2		varchar(20), 
	symptom3		varchar(20), 
	symptom4		varchar(20), 
	low_bp			int, 
	high_bp		int, 
	bk1			varchar(20), 
	bk2			varchar(20),
	 bk3			varchar(20), 
	lh1			varchar(20), 
	lh2			varchar(20),
	 lh3			varchar(20),
	 dn1			varchar(20), 
	dn2			varchar(20),
	 dn3			varchar(20),
	 hobby_game		varchar(20), 
	hobby_others		varchar(20),
	 disease			varchar(20)
);



//For relationships
Create Table Admit(
	 patient_id 		int,
	 bed_id			int
);


Create Table Med_prescription(
	 patient_id		int, 
	doctor_id		int, 
	medicine_id		int
);



//For multi-values
Creat Table Doc_educational_qualification(
	 doctor_id 		int,
	 degree 			varchar(20), 
	institute		varchar(20), 
	year1			int, 
	cgpa			double
);


Creat Table Doc_experience( 
	doctor_id		int, 
	job_title		varchar(20),
	 from1			date, 
	to1			date, 
	organization		varchar(20)
);


Creat Table Nurse_educational_qualification( 
	nurse_id 		int,
	 degree 			varchar(20),
	 institute		varchar(20), 
	year1			int,
	 cgpa			double
);


Creat Table Nurse_experience( 
	nurse_id		int, 
	job_title		varchar(20),
	 from1			date, 
	to1			date, 
	organization		varchar(20)
);


//
