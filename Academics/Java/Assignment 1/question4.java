import java.util.Arrays;
import java.util.HashMap;
import java.util.Scanner;

public class question4 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] arr = new int[N];
        for(int i=0;i<N;i++) {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        int j=0;
        for(int i=0;i<N-1;i++) {
            if(arr[i]!=arr[i+1]) arr[j++]=arr[i];
        }
        arr[j++]=arr[N-1];
        N=j;
        for(int i=0;i<N;i++) System.out.print(arr[i]+" ");
        sc.close();
    }
}
