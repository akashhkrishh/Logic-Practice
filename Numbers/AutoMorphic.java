class HelloWorld {
    static boolean autoMorphic(int n){
        int val = n*n;
    
        while(n>0){
            if((n%10) != (val%10)){
                return false;
            }
            n/=10; val/=10;
        }
        return true;
    }
    
    public static void main(String[] args) {
        int n =63;
        if(autoMorphic(n))
        System.out.print("Automorphic "+n*n);
        else
        System.out.print("Not Automorphic "+n*n);
    }
}
