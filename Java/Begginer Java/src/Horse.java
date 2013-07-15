
public class Horse {

	private int speed;
	private String name;
	private boolean life;
	private double dimensions;
	private String swag;	

	
	public Horse()
	{
		speed = 10;
		name = "Horsey";
		life = true;
		dimensions = 10.5;
		swag = "Off the Charts";
	}
	public void neigh()
	{
		System.out.println("I am a horse");
	}

	public int getSpeed() {
		return speed;
	}

	public void setSpeed(int speed) {
		this.speed = speed;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public boolean isLife() {
		return life;
	}

	public void setLife(boolean life) {
		this.life = life;
	}

	public double getDimensions() {
		return dimensions;
	}

	public void setDimensions(double dimensions) {
		this.dimensions = dimensions;
	}

	public String getSwag() {
		return swag;
	}

	public void setSwag(String swag) {
		this.swag = swag;
	}
}
