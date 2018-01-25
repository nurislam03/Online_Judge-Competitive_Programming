/*


*/

import java.math.BigInteger;
import java.util.Scanner;

public class Main
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		int[] A = new int[200];
		int n, i, j;
		while(input.hasNext())
		{
			n = 0;
			while(input.hasNextInt())
			{
				A[n] = input.nextInt();
				if(A[n] == -999999)
					break;
				n++;
			}
			BigInteger max = BigInteger.valueOf(A[0]);
			BigInteger tmp;
			for(i = 0; i < n; i++)
			{
				tmp = new BigInteger("1");
				for(j = i; j < n; j++)
				{
					tmp = tmp.multiply(BigInteger.valueOf(A[j]));
					max = tmp.max(max);
				}
			}
			System.out.println(max);
		}
	}
}
