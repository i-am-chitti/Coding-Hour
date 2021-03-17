import java.util.*;

public class project1 {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    int size = 7;
    int empNo[] = {1001, 1002, 1003, 1004, 1005, 1006, 1007};
    String name[] = {"Ashish", "Sushma", "Rahul", "Chahat", "Ranjan", "Suman", "Tanmay"};
    String dept[] = {"R&D", "PM", "Acct", "Front Desk", "Eng", "Manufacturer", "PM"};
    char desg[] = {'e', 'c', 'k', 'r', 'm', 'e', 'c'};
    int basic[] = {20000, 30000, 10000, 12000, 50000, 23000, 29000};
    int hra[] = {8000, 12000, 8000, 6000, 20000, 9000, 12000};
    int it[] = {3000, 9000, 1000, 2000, 20000, 4400, 10000};
    System.out.print("Enter the employee ID: ");
    int empId = sc.nextInt();
    boolean ok = false;
    int pos = 0;
    for (int i = 0; i < size; ++i) {
      if (empNo[i] == empId) {
        ok = true;
        pos = i;
        break;
      }
    }
    if (!ok)
      System.out.println("There is no employee with empid : " + empId);
    else {
      System.out.println("Emp No.\tEmp Name\tDepartment\tDesignation\tSalary");
      System.out.print(empNo[pos] + "\t");
      System.out.print(name[pos] + "\t\t");
      System.out.print(dept[pos] + "\t\t");
      System.out.print(desgConverter(desg[pos]) + "\t\t");
      int salary = basic[pos] + hra[pos] + DAconverter(desg[pos]) - it[pos];
      System.out.println(salary);
    }
  }

  static String desgConverter(char ch) {
    switch(ch) {
    case 'c': return "Consultant";
      case 'e': return "Engineer";
      case 'k': return "Clerk";
      case 'r': return "Receptionist";
      case 'm': return "Manager";
      default : return "Wrong Character";
    }
  }
  static int DAconverter(char ch) {
    switch(ch) {
    case 'c': return 32000;
      case 'e': return 20000;
      case 'k': return 12000;
      case 'r': return 15000;
      case 'm': return 40000;
      default : return 0;
    }
  }
}
