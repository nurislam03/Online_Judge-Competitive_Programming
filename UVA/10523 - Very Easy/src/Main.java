
import java.util.*;
import java.math.BigInteger;


public class Main
{

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		Scanner cin = new Scanner(System.in);
		
		int N,A;
		BigInteger sum, tmpA,tmpI;
		
		while(cin.hasNextInt())
		{
			N = cin.nextInt();
			A = cin.nextInt();		
			
			sum = new BigInteger("0");
			tmpA = BigInteger.valueOf(A);
			
			for(int i = 1; i <= N; i++)
			{
				tmpI = BigInteger.valueOf(i);
				
				sum = sum.add(tmpI.multiply(tmpA.pow(i)));
			}
			
			System.out.println(sum);
		}
	}

}
