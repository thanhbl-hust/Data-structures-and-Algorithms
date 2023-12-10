public class Student {
    private String name;
    private int age;
    public String getName() {
        return name;
    }
    public int getAge() {
        return age;
    }
    public void setName(String newName) {
        name = newName;
    }
    public void setAge(int newAge) {
        age = newAge;
    }
}

public class Main {
    public static void main(String[] args) {
        Student student = new Student();
        student.setName("John Doe");
        student.setAge(20);
        System.out.println("Name: " + student.getName());
        System.out.println("Age: " + student.getAge());
    }
}
