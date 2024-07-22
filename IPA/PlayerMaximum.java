import java.util.*;


public class Main
{
    public static int findPlayerWithLowestRuns(Player[] player,String ExpPlayerType) {
        int Lowest = Integer.MAX_VALUE;;
        int index = -1;
        for(int i=0;i<4;i++){
            if(ExpPlayerType.equals(player[i].getPlayerType()) && Lowest>player[i].getRuns()){
               Lowest=player[i].getRuns();
               index = i;
            }
        }
        return index;
    }
    public static int findPlayerwithMostRuns(Player[] player,String ExpMatchType) {
        int Highest = Integer.MIN_VALUE;;
        int index = -1;
        for(int i=0;i<4;i++){
            
            if(ExpMatchType.equals(player[i].getMatchType()) && Highest<player[i].getRuns()){
               Highest=player[i].getRuns();
               index = i;
            }
        }
        return index;
    }
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		Player[] player = new Player[4];
		
		for(int i=0; i<4;i++){
		    int playerId = in.nextInt();in.nextLine();
		    String playerName = in.nextLine();
		    int runs = in.nextInt();in.nextLine();
		    String playerType = in.nextLine();
		    String matchType = in.nextLine();
		    player[i] = new Player(playerId,playerName,runs,playerType,matchType);
		}
        // player[0] = new Player(11,"Sachin",100,"International","One day");
        // player[1] = new Player(12,"Shewag",133,"International","Test");
        // player[2] = new Player(13,"Varun",78,"State","Test");
        // player[3] = new Player(14,"Ashwin",67,"State","One day");
        String ExpPlayerType = in.nextLine();
        String ExpMatchType = in.nextLine() ;
        in.close();
  
		int result = findPlayerWithLowestRuns(player,ExpPlayerType);
		int sres = findPlayerwithMostRuns(player,ExpMatchType);
		if(result == -1){
		    System.out.println("No such player");
		}else{
		    System.out.println(player[result].getRuns()+"\n"+player[result].getPlayerId());
		}
		if(sres == -1){
		    System.out.print("No player with given matchType");
		}else{
		    System.out.print(player[sres].getPlayerId());
		}
	  
	}
}
class Player {
    private int playerId,runs;
    private String playerName,playerType,matchType;
    Player(int playerId,String playerName,int runs,String playerType, String matchType) {
        this.playerId = playerId;
        this.playerName = playerName;
        this.runs = runs;
        this.playerType = playerType;
        this.matchType = matchType;
    }
    public int getPlayerId(){
        return playerId;
    }
    public void setPlayerId(){
        this.playerId = playerId;
    }
    public String getPlayerType(){
        return playerType;
    }
    public void setPlayerType(){
        this.playerType = playerType;
    }
    public String getPlayerName(){
        return playerName;
    }
    public void setPlayerName(){
        this.playerName = playerName;
    }
    public int getRuns(){
        return runs;
    }
    public void setRuns(){
        this.runs = runs;
    }
    public String getMatchType(){
        return matchType;
    }
    public void setMatchType(){
        this.matchType = matchType;
    }
 
}
