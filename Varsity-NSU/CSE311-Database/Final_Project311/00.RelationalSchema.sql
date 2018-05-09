// Entities Relational Schema

Patient(patient_id,admission_date,first_name,middle_name,last_name,birth_date,mobile1,mobile2, present_streetnum,present_streetname,present_area,present_thana,present_district, permanent_streetnum,permanent_streetname,permanent_area,permanent_thana,permanent_district,profession,amount_deposited, choice)

Ward(ward_id,name)

Cabin(cabin_id, name)

Bed(bed_id,type,rent,status,ward_id)

Nurse(nurse_id,first_name,middle_name,last_name,birth_date,appointment_date,supervisor_id, ward_id)

Medicine(medicine_id,name,type,unit_price,quantity,manufacture_date,expiry_date)

Prescription(patient_id,doctor_id,name_med,quantity,times_a_day)

Test_Advice(prescription_id, test_name)

Doctor(doctor_id,first_name,middle_name,last_name,birth_date,appointment_date,specialist,ward_id,registrar_id)


Patient_info(patient_id,height,weight,symptom1,symptom2,symptom3,low_bp,high_bp,breakfastk1,breakfastk2, breakfastk3,lunch1,lunch2, lunch3, dinner1,dinner2,dinner3,hobby_game,hobby_others,disease,doctor_id)



//For relationships
Admit(patient_id,bed_id)

Med-Prescription(patient_id,doctor_id,medicine_id)



//For multi-values
Doc_Educational_Qualifiation(doctor_id,degree,institute,year,cgpa) 

Doc_Experience(doctor_id,job_title,from,to,organization)

Nurse_Educational_Qualifiation(nurse_id,degree,institute,year,cgpa) 

Nurse_Experience(nurse_id,job_title,from,to,organization)




//
