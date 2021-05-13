import java.util.ArrayList;
import java.util.Iterator;
import java.util.Scanner;

class Solution {
    ArrayList<String> arr;
    Solution() {
        arr = new ArrayList<String>();
    }
    void insert(String val) throws Exception {
        arr.add(val);
        System.out.println("Inserted Successfully");
    }
    void search(String val) throws Exception{
        Iterator iterator = arr.iterator();
        while(iterator.hasNext()) {
            if(iterator.next().equals(val)) {
                System.out.println("Item found in the list");
                return;
            }
        }
        System.out.println("Item not found in the list");
    }
    void delete(String val) throws Exception {
        Iterator iterator = arr.iterator();
        boolean isPresent=false;
        while(iterator.hasNext()) {
            if(iterator.next().equals(val)) {
                isPresent=true;
                break;
            }
        }
        if(isPresent) {
            iterator.remove();
            System.out.println("Deleted Successfully");
        }
        else System.out.println("Can't Delete: Not Found");
    }
    void display() throws Exception {
        if(arr.isEmpty()) {
            System.out.println("List is empty");
            return;
        }
        Iterator iterator = arr.iterator();
        while(iterator.hasNext()) {
            System.out.println(iterator.next());
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Solution obj = new Solution();
        Scanner sc = new Scanner(System.in);
        int choice=0;
        try {
            while(choice!=5) {
                System.out.println("1. Insert");
                System.out.println("2. Search");
                System.out.println("3. Delete");
                System.out.println("4. Display");
                System.out.println("5. Exit\n");
                System.out.println("Enter your choice");
                choice = sc.nextInt();
                switch(choice) {
                    case 1: {
                        System.out.println("Enter item to be inserted");
                        String str = sc.next();
                        obj.insert(str);
                        break;
                    }
                    case 2: {
                        System.out.println("Enter item to be searched");
                        String str = sc.next();
                        obj.search(str);
                        break;
                    }
                    case 3: {
                        System.out.println("Enter item to be deleted");
                        String str = sc.next();
                        obj.delete(str);
                        break;
                    }
                    case 4: {
                        obj.display();
                    }
                    case 5: {
                        break;
                    }
                    default: System.out.println("Wrong Input! Try again");
                }
            }
            System.out.println("Thanks for using! :)");
        }
        catch(Exception e) {
            System.out.println("An Error Occured! Try restarting program");
        }
        sc.close();
    }
}