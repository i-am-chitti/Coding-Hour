public class question1 {
    public static void main(String args[]) {
        int[][] arr = new int[3][3];
        int k=0;
        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                arr[i][j] = Integer.parseInt(args[k]);
                k++;
            }
        }
        int greatest = arr[0][0];
        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                if(arr[i][j]>greatest) greatest = arr[i][j];
            }
        }
        System.out.println("Greatest is "+greatest);
    }
}