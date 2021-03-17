import java.util.Scanner;
public class temp2{
public static void main(String[] args) {
Scanner sc = new Scanner(System.in);

System.out.println("Enter Gender");

String Gender=sc.nextLine();
System.out.println("Enter Age");
int age = sc.nextInt();



if(Gender.equals("Male") || Gender.equals("Female"))

{

if(age>1 && age<=100)

{

if (Gender.equals("Female") && (age >= 1 && age <= 58)) {

System.out.println("Interest == 8.2%");

} else if (Gender.equals("Female") && (age >= 59 && age <= 100)) {

System.out.println("Interest == 9.2%");

} else if (Gender.equals("Male") && (age >= 1 && age <= 58)) {

System.out.println("Interest == 8.4%");

} else if (Gender.equals("Male") && (age >= 59 && age <= 100)) {

System.out.println("Interest == 10.5%");}}}}}