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
		
		else if(fnc == 3) {
			System.out.println("Enter side");
			double sC = scanner.nextDouble();
			double res = sC * sC;
			System.out.println("\nThe area of the square is: "+res);
		}

		else if(fnc == 4) {
			System.out.println("Enter base ");
			double base = scanner.nextDouble();
			System.out.println("Enter height ");
			double height = scanner.nextDouble();
			double ans = base * height * 1 / 2;
			System.out.println("\nThe area of the triangle is: "+ans);
		}
		else {
			System.out.println("Invalid output");
		}
	}
}
