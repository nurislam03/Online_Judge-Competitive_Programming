// patient profile -> showPatientProfile
SELECT *
From Patient
ORDER by patient_id DESC
LIMIT 1


Select Count(test_id) as testID, Count(Distinct prescription_id) as PrescriptionCnt, Count(test_id)*(300) as test_percentage, Count(Distinct prescription_id)*(500) as Prescription_percentage, Count(test_id)*(300)+ Count(Distinct prescription_id)*(500) AS Total
From Test
Group By doctor_id
Order By doctor_id ASC 
