import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt(), sum=0;
		for(int i=0;i<n;i++,sum+=in.nextInt());
		System.out.print(sum);
	}
}
