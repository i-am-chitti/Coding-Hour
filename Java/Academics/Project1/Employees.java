package Academics.Project1;

import java.util.ArrayList;

public class Employees {
    ArrayList<Employee> employees;
    Employees() {
        this.employees = new ArrayList<>();
    }
    void addEmployee(Employee emp) {
        employees.add(emp);
    }
}
