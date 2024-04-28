class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        int row = matrix.length;
        int col = matrix[0].length;
        ArrayList<Integer> list = new ArrayList<>(row);
        int left = 0, right = col - 1;
        int top = 0, down = row - 1;
        int dir = 0;

        while (left <= right && top <= down){

            if(dir == 0){
                for (int i=top;i<=right;i++){
                    list.add(matrix[top][i]);
                }
                top++;

            }
            if(dir == 1){
                for (int i=top;i<=down;i++){
                    list.add(matrix[i][right]);
                }
                right--;
            }
            if(dir == 2){
                for (int i=right;i>=left;i--){
                    list.add(matrix[down][i]);
                }
                down--;
            }
            if (dir == 3){
                for (int i=down;i>=top;i--){
                    list.add(matrix[i][left]);
                }
                left++;
            }
            dir = ((++dir)%4);

        }
        return list;
    }
}
