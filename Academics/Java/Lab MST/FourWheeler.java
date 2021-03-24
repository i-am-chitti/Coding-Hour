public class FourWheeler {
    public static void main(String[] args) {
		Logan logan = new Logan("Ciaz 30s VDI","BR01829","Deepak Kumar",46,1,23);
		logan.getModelName();
		logan.getOwnerName();
		System.out.println("current speed"+logan.speed());
		System.out.println("Current Temperature"+logan.tempControl());
	}
}
