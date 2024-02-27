import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    int[] arr = new int[]{12,42,24,1,2,100,90};
        int N = arr.length;
	    Arrays.sort(arr);
        
        System.out.println("Max : "+(arr[N-1]+arr[N-2]));
	    System.out.println("Min : "+(arr[0]+arr[1]));
	}
}
