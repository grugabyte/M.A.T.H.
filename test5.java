import java.util.Scanner;
import java.util.ArrayList;

public class test5 {

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		System.out.println("Homework Manager:");
		ArrayList<String> subject = new ArrayList<String>();

		//WARNING THIS IS A TEST

		System.out.println("How many subjects do you have? ");
		int sub = scanner.nextInt();

		int i = 0;
		while(i < sub) {
			System.out.println("Enter subject:");
			String subj = scanner.next();
			subject.add(subj);
			i++;
		}

		System.out.println("You have "+subject.size()+" subjects.");

		//school ending time
		System.out.println("\nPlease enter the following information.\nWhen does your school end?\nHours:");
		int hours = scanner.nextInt();
		System.out.println("Minutes: ");
		int min = scanner.nextInt();

		//home arrival time
		System.out.println("What time to you arrive home? \nHours:");
		int home1 = scanner.nextInt();
		System.out.println("Minutes: ");
		int home2 = scanner.nextInt();
		
		//dinner time
		System.out.println("Do you have dinner?[y/n]");
		char resp = scanner.next().charAt(0);

		if(resp == 'Y' || resp == 'y') {
			//System.out.println("What time you you have dinner?\nHours:");
			//int hours1 = scanner.nextInt();
			//System.out.println("Minutes");
			//int min1 = scanner.nextInt();
		}
		
		else if(resp == 'N' || resp == 'n') {
			System.out.println("proceeding...");
		}
		
		else {
			System.out.println("Invalid output (default no)");
		}

		System.out.println("Schedule ends at 10:00pm\n\nschedule: ");

		System.out.println(hours+":"+min+"\t School ends");
		System.out.println(home1+":"+home2+"\t Arrive home");
		int newth = home1;
		int newtm = home2 + 10;
		System.out.println(newth+":"+newtm+"\t Complete homework/study "+subject.get(0));
		
		int j = 0;

		while (j < subject.size()) {
			if(newtm < 30) {
                        int v = newtm + 30;
                        newtm = v;}
			else {
				int v1 = 60 - newtm;
				newth++;
				newtm = v1;
			}
			System.out.println(newth+":"+newtm+"\t Complete homework/study "+subject.get(j));
			j++;
		}

		System.out.println("10:00\t End");



	}
}

