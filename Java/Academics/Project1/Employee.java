package Academics.Project1;

public class Employee {
    int empNo;
    String empName;
    String joinDate;
    char desgCode;
    String dept;
    int basic;
    int hra;
    int it;
    Employee(int no, String name, String joinDate, char desgCode
            , String dept, int basic, int hra, int it) {
                this.empNo=no;
                this.empName=name;
                this.joinDate=joinDate;
                this.desgCode=desgCode;
                this.dept=dept;
                this.basic=basic;
                this.hra=hra;
                this.it=it;
            }
}
