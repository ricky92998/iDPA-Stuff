import java.util.*;
public class Main {

	public static void main(String[] args) {
		System.out.println(9);
		Scanner s = new Scanner(System.in); 
		System.out.println("Do you play Dota 2?");
		String answer = s.nextLine();
		System.out.println(answer); 
		System.out.println("Howsit goin?");
		answer = s.nextLine();
		Random r = new Random();
		System.out.println(r.nextInt(6));
		
		
	}
}
