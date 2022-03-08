import java.util.Scanner;

public class test4 {

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		System.out.println("\nEnter function [1-9]: ");
		int fnc = scanner.nextInt();

		if(fnc == 1) {
			System.out.println("You have chosen function "+fnc);

			System.out.println("\nIs the temp. in (C) or (F)? ");
			char unit = scanner.next().charAt(0);

			if(unit == 'C' || unit == 'c') {
				System.out.println("Enter temp. in celcius: ");
				float temp = scanner.nextFloat();
				temp = (temp * 9 / 5) + 32;
				System.out.println("\nThe temp is "+temp+"F");
			}
			else if(unit == 'F' || unit == 'f') {
				System.out.println("\nEnter temp. in Farenheit: ");
				float temp = scanner.nextFloat();
				temp = ((temp - 32) * 5) /9;
				System.out.println("\nThe temp. is "+temp+"C");
			}
			System.out.println("End function "+fnc);
		}

		else if(fnc == 2) {
			System.out.println("Enter side a");
			double a = scanner.nextDouble();
			System.out.println("Enter side b");
			double b = scanner.nextDouble();
			double c = Math.pow(a*a, b*b);
			System.out.println("> "+c);
		}
		else {
			System.out.println("Invalid output");
		}
	}
}
