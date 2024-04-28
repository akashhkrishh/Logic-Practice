package org.example;

// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

public class Main {
    public static void main(String[] args) {
        int[][] arr = new int[][]{
                 {1, 2, 3, 4},  // rs=1
                 {5, 6, 7, 8},
                 {9, 10, 11, 12},
                 {13, 14,15,16}
        };
        int cStart = 0, cEnd = arr[0].length-1, rStart = 0, rEnd = arr.length-1;
        
        while (cStart < cEnd && rStart < rEnd){

            for (int i = rStart; i<= cEnd; i++){
                System.out.print(arr[rStart][i]+" ");
            }
            rStart += 1;
            for( int i = rStart; i<= rEnd; i++){
                System.out.print(arr[i][cEnd]+" ");
            }
            cEnd -= 1;
            for( int i = cEnd; i>= cStart; i--){
                System.out.print(arr[rEnd][i]+" ");
            }
            rEnd -= 1;

            for( int i = rEnd; i>= rStart; i--){
                System.out.print(arr[i][cStart]+" ");
            }
            cStart += 1;


        }

    }
}
