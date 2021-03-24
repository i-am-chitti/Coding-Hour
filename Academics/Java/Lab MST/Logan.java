public class Logan extends Vehicle {
	private String modelName;
	private String registrationNumber;
	private String ownerName;
	private int speed;
	private int gps;
	private int temperature;
	
	

	public Logan(String modelName, String registrationNumber, String ownerName, int speed, int gps, int temp) {
		super();
		this.modelName = modelName;
		this.registrationNumber = registrationNumber;
		this.ownerName = ownerName;
		this.speed = speed;
		this.gps = gps;
		this.temperature=temp;
	}

	public void getModelName() {
		System.out.println("modelName: " + modelName);
	}

	public void getRegistrationNumber() {
		System.out.println("registrationNumber: " + registrationNumber);
	}

	public void getOwnerName() {
		System.out.println("ownerName: " + ownerName);
	}
	
	public int speed() {
		return speed;
	}
	
	public int gps() {
		return gps;
	}

	public int tempControl() {
		return this.temperature;
	}

}