import java.util.Random;
import java.util.Scanner;

public class Driver {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int e = 1;
		char b = 'b';
		double c = 4.4;
		boolean d = true;
		String a = "Java";
	
		Scanner scan = new Scanner(System.in);
		int i = scan.nextInt();
		String f = scan.nextLine();
		scan.close();
		
		Horse horse = new Horse();
		horse.setSpeed(10);
		horse.setName("Horsey");
		horse.setLife(true);
		
		Horse[] horses = new Horse[10];
		for(int k =0; k < horses.length; k++)
		{
			horses[k] = new Horse();
		}
		
	}
}
