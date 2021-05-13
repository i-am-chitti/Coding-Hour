class newthread extends Thread {
    Thread t;
    newThread() {
        t = new Thread(this,"New Thread");
        t.start();
    }
    public void run() {
        System.out.println(t.isAlive());
    }
}
class temp2 {
    public static void main(String[] args) {
        new newthread();
    }
}