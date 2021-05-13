public class WrapperClass {
    public static void main(String[] args) {
        byte input = 125;
        Byte data = new Byte(input);
        int result = data.compareTo(128);
        System.out.println(data+" "+result);
    }
}