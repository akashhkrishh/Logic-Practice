class NeonNumber {
    static boolean neoN(int n){
        int val = n*n;
        int sum = 0;
        while(val>0){
            sum+=val%10;
            val/=10; 
        }
        return sum == n;
    }
    
    public static void main(String[] args) {
        int n =9;
        if(neoN(n))
        System.out.print("Neon Number ");
        else
        System.out.print("Not Neon Number ");
    }
}
