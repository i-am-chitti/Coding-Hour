public class question3 {
    public static void main(String args[]) {
        String str = args[0];
        String seperator = args[1];
        int N = Integer.parseInt(args[2]);
        String res="";
        while(N>1) {
            res+=str+seperator;
            N--;
        }
        res+=str;
        System.out.println("New String: "+res);
    }
}
