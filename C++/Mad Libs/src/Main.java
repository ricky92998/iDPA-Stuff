import java.util.Scanner;


public class Main {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
System.out.println("Write adjective");
Scanner s = new Scanner(System.in);
String adj1 = s.nextLine();
System.out.println("Write verb");
String verb1 = s.nextLine();
System.out.println("Write noun");
String noun1 = s.nextLine();
System.out.println("Write adjective");
String adj2 = s.nextLine();
System.out.println("Write noun");
String noun2 = s.nextLine();
System.out.println("The king of Narnia is " + adj1 +" and loves to " + verb1 +". Someone threw at him a " + noun1 +" and became very " + adj2 +". So he threw at the pesant a " +noun2);
	}

}
