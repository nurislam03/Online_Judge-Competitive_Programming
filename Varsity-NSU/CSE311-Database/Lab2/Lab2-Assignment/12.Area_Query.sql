// 01
Select (Length*Width) As area, (2*(Length+Width)) As Circumference, Sqrt((Length*Length) + (Width*Width)) As Diagonal
From Area;


// 02
Select Concat(Name, " is situated in ", Location, " and the diagonal is ", Sqrt((Length*Length) + (Width*Width)))
From Area;
