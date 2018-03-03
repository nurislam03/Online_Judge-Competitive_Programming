
//01
Select ((-b+(sqrt((b*b)-(4*a*c))))/(2*a)) As root1, ((-b-(sqrt((b*b)-(4*a*c))))/(2*a)) As root2
From Quardratic_Equation
Where Id = 5;


//02
Select Concat("The root value of the equation of Id ", Id, " is = ", ((-b+(sqrt((b*b)-(4*a*c))))/(2*a)))
From Quardratic_Equation
Where Id = 5;
