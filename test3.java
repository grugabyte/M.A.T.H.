import java.util.Scanner;

public class test3 {

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		System.out.println("\nEnter function [1-9]: ");
		int fnc = scanner.nextInt();

		System.out.println("You have chosen function "+fnc);
		if(fnc == 1) {
			System.out.println("Enter radius of a circle");
			double rad = scanner.nextDouble();
			double res= Math.PI * (rad * rad);
			System.out.println("The area of the circle is: "+res);

		}

		else if(fnc == 2) {
			System.out.println("Enter side a");
			double sA = scanner.nextDouble();
			System.out.println("Enter side b");
			double sB = scanner.nextDouble();
			double res1 = sA * sB;
			System.out.println("\nThe area of the rectangle is: "+res1);

		}
		else {
			System.out.println("Invalid output");
		}
	}
}
