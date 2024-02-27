import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    String str = "Thiruvananthapuram";
		ArrayList<Character> lstr = new ArrayList<Character>();
	    for(int i=0;i<str.length();i++)
	       lstr.add(str.charAt(i));
	       
	    Collections.sort(lstr);
        
	    for(int i=0;i<lstr.size();i++){
           int count = 0;
           for(int j=i+1;j<lstr.size();j++){
              if (lstr.get(i) == lstr.get(j))
                  count++;
              }
           if(count != 0){
               System.out.println(lstr.get(i)+"->"+count);
               i +=count;
           }
        }
	}
}
