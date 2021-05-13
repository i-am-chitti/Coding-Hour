import java.io.BufferedReader;
import java.util.Scanner;

abstract class Account {
    double interestRate;
    double amount;
    abstract double calculateInterest();
}

class FDAccount extends Account {
    int noOfDays;
    int ageOfACHolder;
    String errorMessage;
    boolean isError;
    double calculateInterest() {
        if(this.noOfDays>=7 && this.noOfDays<=14) {
            if(this.amount<10000000) {
                if(this.ageOfACHolder>60) this.interestRate = 5.00;
                else this.interestRate = 4.50;
            }
            else this.interestRate=6.5;
        }
        else if(this.noOfDays>=15 && this.noOfDays<=29) {
            if(this.amount<10000000) {
                if(this.ageOfACHolder>60) this.interestRate = 5.25;
                else this.interestRate = 4.75;
            }
            else this.interestRate=6.75;
        }
        else if(this.noOfDays>=30 && this.noOfDays<=45) {
            if(this.amount<10000000) {
                if(this.ageOfACHolder>60) this.interestRate = 6.00;
                else this.interestRate = 5.50;
            }
            else this.interestRate = 6.75;
        }
        else if(this.noOfDays>=45 && this.noOfDays<=60) {
            if(this.amount<10000000) {
                if(this.ageOfACHolder>60) this.interestRate = 7.5;
                else this.interestRate = 7;
            }
            else this.interestRate = 8;
        }
        else if(this.noOfDays>=61 && this.noOfDays<=184) {
            if(this.amount<10000000) {
                if(this.ageOfACHolder>60) this.interestRate = 8;
                else this.interestRate = 7.5;
            }
            else this.interestRate=8.5;
        }
        else if(this.noOfDays>=185 && this.noOfDays<=365) {
            if(this.amount<10000000) {
                if(this.ageOfACHolder>60) this.interestRate = 8.5;
                else this.interestRate = 8.00;
            }
            else this.interestRate=10;
        }
        double totalAmount = (this.amount*this.interestRate)/100;
        return totalAmount;
        
    }
    
    boolean validateAmount() {
        if(this.amount<=0) {
            this.errorMessage = "Amount can't be zero or less than zero";
            return true;
        }
        else return false;
    }
    boolean validateNoOfDays() {
        if(this.noOfDays<=0 || this.noOfDays>365) {
            if(this.noOfDays<=0) this.errorMessage = "No of days can't be zero or less than zero";
            else this.errorMessage = "No of days can't exceed 365";
            return true;
        }
        else return false;
    }
    boolean validateAge() {
        if(this.ageOfACHolder<18 || this.ageOfACHolder>110) {
            if(this.ageOfACHolder<18) this.errorMessage = "Account holder can't be minor";
            else this.errorMessage = "Age can't exceed 110 years";
            return true;
        }
        else return false;
    }

    void getInput() {
        Scanner sc = new Scanner(System.in);
        try {
            System.out.println("Enter the amount: ");
            this.amount = sc.nextDouble();
            this.isError = this.validateAmount();
            if(!this.isError) {
                System.out.println("Enter no of days: ");
                this.noOfDays = sc.nextInt();
                isError = validateNoOfDays();
            }
            if(!this.isError) {
                System.out.println("Enter age: ");
                this.ageOfACHolder = sc.nextInt();
                isError = validateAge();
            }
            if(isError) {
                System.out.println(this.errorMessage);
                throw new Exception();
            }
            else {
                double interestGained = this.calculateInterest();
                System.out.println("Amount\tPeriod\tRate\tAge\tInterest Gained");
                System.out.println(this.amount+"\t"+this.noOfDays+"\t"+this.interestRate+"\t"+this.ageOfACHolder+"\t"+interestGained);
            }
        }
        catch(Exception e) {
            System.out.println("There is an input Error. Try again");;
        }
        finally{
            sc.close();
        }
    }
}

class SBAccount extends Account {
    int isNRI;
    boolean isError;
    String errorMessage;
    double calculateInterest() {
        if(isNRI==1) {
            this.interestRate = 6;
        }
        else this.interestRate = 4;
        double interestGained = (this.amount*this.interestRate)/100;
        return interestGained;
    }

    boolean validateAmount() {
        if(this.amount<=0) {
            this.errorMessage = "Amount can't be zero or less than zero";
            return true;
        }
        else return false;
    }

    boolean validateNRI() {
        if(this.isNRI==1 || this.isNRI==0) return false;
        else {
            this.errorMessage = "Invalid NRI status";
            return true;
        }
    }
    
    void getInput() {
        Scanner sc = new Scanner(System.in);
        try {
            System.out.println("Enter amount");
            this.amount = sc.nextDouble();
            this.isError = this.validateAmount();
            if(!this.isError) {
                System.out.print("Are you NRI?\nEnter 1 for yes, else 0: ");
                this.isNRI = sc.nextInt();
                this.isError = this.validateNRI();
            }
            if(!this.isError) {
                double interestGained = this.calculateInterest();
                System.out.println("Amount\tRate\tInterest Gained");
                System.out.println(this.amount+"\t"+this.interestRate+"\t"+interestGained);
            }
            else {
                System.out.println(this.errorMessage);
                throw new Exception();
            }
        }
        catch(Exception e) {
            System.out.println("Input Error! Try again");
        }
        finally {
            sc.close();
        }
    }
}

class RDAccount extends Account {
    int noOfMonths;
    double monthlyAmount;
    int ageOfACHolder;
    String errorMessage;
    boolean isError;
    double calculateInterest() {
        if(this.noOfMonths==6) {
            if(this.ageOfACHolder>60) this.interestRate = 8.00;
            else this.interestRate = 7.50;
        }
        else if(this.noOfMonths==9) {
            if(this.ageOfACHolder>60) this.interestRate = 8.25;
            else this.interestRate = 7.75;
        }
        else if(this.noOfMonths==12) {
            if(this.ageOfACHolder>60) this.interestRate = 8.50;
            else this.interestRate = 8.00;
        }
        else if(this.noOfMonths==15) {
            if(this.ageOfACHolder>60) this.interestRate = 8.75;
            else this.interestRate = 8.25;
        }
        else if(this.noOfMonths==18) {
            if(this.ageOfACHolder>60) this.interestRate = 9.0;
            else this.interestRate = 8.50;
        }
        else if(this.noOfMonths==21) {
            if(this.ageOfACHolder>60) this.interestRate = 9.25;
            else this.interestRate = 8.75;
        }
        double totalAmount = (this.amount*this.interestRate)/100;
        return totalAmount;
    }

    boolean validateAmount() {
        if(this.amount<=0) {
            this.errorMessage = "Amount can't be zero or less than zero";
            return true;
        }
        else return false;
    }
    boolean validateNoOfMonths() {
        if(this.noOfMonths<=0 || this.noOfMonths>21) {
            if(this.noOfMonths<=0) this.errorMessage = "No of months can't be zero or less than zero";
            else this.errorMessage = "No of months can't exceed 21";
            return true;
        }
        else return false;
    }
    boolean validateAge() {
        if(this.ageOfACHolder<18 || this.ageOfACHolder>110) {
            if(this.ageOfACHolder<18) this.errorMessage = "Account holder can't be minor";
            else this.errorMessage = "Age can't exceed 110 years";
            return true;
        }
        else return false;
    }

    void getInput() {
        Scanner sc = new Scanner(System.in);
        try {
            System.out.println("Enter the amount: ");
            this.amount = sc.nextDouble();
            this.isError = this.validateAmount();
            if(!this.isError) {
                System.out.println("Enter no of months: ");
                this.noOfMonths = sc.nextInt();
                this.isError = this.validateNoOfMonths();
            }
            if(!this.isError) {
                System.out.println("Enter age: ");
                this.ageOfACHolder = sc.nextInt();
                this.isError = this.validateAge();
            }
            if(!this.isError) {
                double interestGained = this.calculateInterest();
                System.out.println("Amount\tPeriod\tRate\tAge\tInterest Gained");
                System.out.println(this.amount+"\t"+this.noOfMonths+"\t"+this.interestRate+"\t"+this.ageOfACHolder+"\t"+interestGained);
            }
            else {
                System.out.println(this.errorMessage);
                throw new Exception();
            }
        }
        catch(Exception e) {
            System.out.println("There is an input Error. Try again");
        }
        finally {
            sc.close();
        }
    }
}

public class Main {
    public static void main(String args[]) {
        System.out.println("Welcome to Interest Calculator");
        Scanner sc = new Scanner(System.in);
        int input;
        try{
            while(true) {
                System.out.println("Select option");
                System.out.println("1. SB Interest Calculator");
                System.out.println("2. FD Interest Calculator");
                System.out.println("3. RD Interest Calculator");
                System.out.println("4. Exit");
                System.out.print("Your Choice: ");
                input = sc.nextInt();
                if(input==1) {
                    SBAccount obj = new SBAccount();
                    obj.getInput();
                }
                else if(input==2) {
                    FDAccount obj = new FDAccount();
                    obj.getInput();
                }
                else if(input==3) {
                    RDAccount obj = new RDAccount();
                    obj.getInput();
                }
                else if(input==4) {
                    System.out.println("Thanks for using our system. Have A God Day");
                    sc.close();
                    break;
                }
            }
        }
        catch(Exception e) {
            System.out.println("Error Occured!");
        }
    }
}
